#include "MinesweeperGame.h"

#include <iostream>
#include <exception>

#include <SFML/Graphics.hpp>

#include "io/SimpleINIParser.h"

#ifdef __S_RELEASE__
#include "io/ini_strings/WindowINI.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

sf::RenderWindow* MinesweeperGame::window = nullptr;

int MinesweeperGame::run() noexcept
{
    int run_result = 0;

    try {

#ifdef __S_RELEASE__
        auto win_data = SimpleINIParser::load_ini_string(win_ini).data;
#else
        auto win_data = SimpleINIParser::load_ini_file("config/Window.ini").data;
#endif // __S_RELEASE__

        const std::string win_title = win_data["WINDOW"]["Title"];
        const unsigned win_width    = stoul(win_data["WINDOW"]["Width"]);
        const unsigned win_height   = stoul(win_data["WINDOW"]["Height"]);

        sf::RenderWindow window(sf::VideoMode(win_width, win_height), win_title);

        MinesweeperGame::window = &window;

        MinesweeperGame::process();

    }catch(const std::exception& e) {

        std::cout << "\n\n/////////////////////////////\n\n";
        std::cerr << "Error while running the game. Reason: " << e.what() << std::endl;

        run_result = -1;

    }

    return run_result;
}

void MinesweeperGame::read_color_from_str(const std::string& str, sf::Color& col) noexcept
{
    if     (str == "BLACK")       col = sf::Color::Black;
    else if(str == "WHITE")       col = sf::Color::White;
    else if(str == "RED")         col = sf::Color::Red;
    else if(str == "GREEN")       col = sf::Color::Green;
    else if(str == "BLUE")        col = sf::Color::Blue;
    else if(str == "YELLOW")      col = sf::Color::Yellow;
    else if(str == "MAGENTA")     col = sf::Color::Magenta;
    else if(str == "CYAN")        col = sf::Color::Cyan;
    else if(str == "TRANSPARENT") col = sf::Color::Transparent;
    else                          std::cerr << "ERR: Unrecognized color name" << std::endl;
}

void MinesweeperGame::process()
{
    try {

        sf::Color background_color = sf::Color::Black;

#ifdef __S_RELEASE__
        MinesweeperGame::read_color_from_str(SimpleINIParser::load_ini_string(win_ini).data["WINDOW"]["BackgroundColor"], background_color);
#else
        MinesweeperGame::read_color_from_str(SimpleINIParser::load_ini_file("config/Window.ini").data["WINDOW"]["BackgroundColor"], background_color);
#endif // __S_RELEASE__

        while(MinesweeperGame::window->isOpen()) {

            sf::Event event;

            while(MinesweeperGame::window->pollEvent(event)) {

                if(event.type == sf::Event::Closed) MinesweeperGame::window->close();

            }

            MinesweeperGame::window->clear(background_color);

            MinesweeperGame::window->display();

        }

    }catch(const std::exception& e) {

        throw std::runtime_error(std::string("Failed to process the game. Reason: ") + e.what());

    }
}
