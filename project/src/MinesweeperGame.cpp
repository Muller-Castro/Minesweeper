/****************************************************************************************/
/* MinesweeperGame.cpp                                                                  */
/****************************************************************************************/
/* Copyright (c) 2020-2021 Muller Castro.                                               */
/*                                                                                      */
/* Permission is hereby granted, free of charge, to any person obtaining                */
/* a copy of this software and associated documentation files (the "Software"),         */
/* to deal in the Software without restriction, including without limitation            */
/* the rights to use, copy, modify, merge, publish, distribute, sublicense,             */
/* and/or sell copies of the Software, and to permit persons to whom the Software       */
/* is furnished to do so, subject to the following conditions:                          */
/*                                                                                      */
/* The above copyright notice and this permission notice shall be included in all       */
/* copies or substantial portions of the Software.                                      */
/*                                                                                      */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,  */
/* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A        */
/* PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT   */
/* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF */
/* CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE */
/* OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                                        */
/****************************************************************************************/

#include "MinesweeperGame.h"

#include <iostream>
#include <exception>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/WindowStyle.hpp>

#include "io/SimpleINIParser.h"
#include "GlobalConfigurations.h"
#include "scene/SceneManager.h"
#include "Input.h"
#include "io/ResourceLoader.h"

#include "assets/BombIcon.h"

#ifdef __S_RELEASE__
#include "io/ini_strings/WindowINI.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

PeerInfo MinesweeperGame::peer_info;
PeerInfo MinesweeperGame::new_peer_info;
sf::TcpSocket MinesweeperGame::tcp_socket;
sf::RenderWindow* MinesweeperGame::window = nullptr;
bool MinesweeperGame::is_running          = true;

int MinesweeperGame::run() noexcept
{
    int run_result = 0;

    try {

#ifdef __S_RELEASE__
        auto win_data = SimpleINIParser::load_ini_string(win_ini);
#else
        auto win_data = SimpleINIParser::load_ini_file("config/Window.ini");
#endif // __S_RELEASE__

        const std::string win_title = win_data["WINDOW"]["Title"];
        const unsigned win_width    = stoul(win_data["WINDOW"]["Width"]);
        const unsigned win_height   = stoul(win_data["WINDOW"]["Height"]);

        unsigned win_style = sf::Style::Default;

        read_win_style_from_str(win_data["WINDOW"]["Style"], win_style);

        sf::RenderWindow window(sf::VideoMode(win_width, win_height), win_title, win_style, sf::ContextSettings(0, 0, 4));

        {
            sf::Image icon;

            auto raw_bomb_icon = get_raw_bomb_icon();

            icon.loadFromMemory(raw_bomb_icon.second.c_str(), raw_bomb_icon.second.length());

            window.setIcon(64, 64, icon.getPixelsPtr());
        }

        window.setVerticalSyncEnabled(true);

        MinesweeperGame::window = &window;

        MinesweeperGame::process();

    }catch(const std::exception& e) {

        std::cout << "\n\n/////////////////////////////\n\n";
        std::cerr << "Error while running the game. Reason: " << e.what() << std::endl;

        run_result = -1;

    }

    MinesweeperGame::tcp_socket.disconnect();

    ResourceLoader::resources.clear();

    MinesweeperGame::window->close();

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

void MinesweeperGame::read_win_style_from_str(const std::string& str, unsigned& style) noexcept
{

    if     (str == "DEFAULT")    style = sf::Style::Titlebar | sf::Style::Close;
    else if(str == "FULLSCREEN") style = sf::Style::Titlebar | sf::Style::Close | sf::Style::Fullscreen;
    else if(str == "RESIZE")     style = sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize;

}

void MinesweeperGame::process()
{
    try {

        sf::Color background_color = sf::Color::Black;

#ifdef __S_RELEASE__
        MinesweeperGame::read_color_from_str(SimpleINIParser::load_ini_string(win_ini)["WINDOW"]["BackgroundColor"], background_color);
#else
        MinesweeperGame::read_color_from_str(SimpleINIParser::load_ini_file("config/Window.ini")["WINDOW"]["BackgroundColor"], background_color);
#endif // __S_RELEASE__

        sf::Clock clock;

        SceneManager::force_scene_change(SceneManager::Scenes::SPLASH_SCREEN);

        while(MinesweeperGame::is_running) {

            sf::Time elapsed = clock.restart();

            Input::poll_events();

            GlobalConfigurations::process_inputs();
            SceneManager::process_inputs();

            GlobalConfigurations::update(elapsed.asSeconds());
            SceneManager::update(elapsed.asSeconds());

            MinesweeperGame::window->clear(background_color);

            SceneManager::draw();
            GlobalConfigurations::draw();

            MinesweeperGame::window->display();

            SceneManager::run_deferred();

            ResourceLoader::erase_unique_references();

        }

    }catch(const std::exception& e) {

        throw std::runtime_error(std::string("Failed to process the game. Reason: ") + e.what());

    }
}
