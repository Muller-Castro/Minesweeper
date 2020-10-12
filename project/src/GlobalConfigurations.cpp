/****************************************************************************************/
/* GlobalConfigurations.cpp                                                             */
/****************************************************************************************/
/* Copyright (c) 2020 Muller Castro.                                                    */
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

#include "GlobalConfigurations.h"

#include <sstream>
#include <string>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>

#include "Input.h"
#include "scene/SceneManager.h"
#include "MinesweeperGame.h"
#include "io/SimpleINIParser.h"

using namespace Minesweeper;

void GlobalConfigurations::process_inputs()
{
    if(Input::is_just_pressed<Input::Key>(sf::Keyboard::F3)) GlobalConfigurations::resize_window();
    else if(Input::is_just_pressed<Input::Key>(sf::Keyboard::Escape)) MinesweeperGame::is_running = false;
#ifndef __S_RELEASE__
    else if(Input::is_just_pressed<Input::Key>(sf::Keyboard::F5)) SceneManager::restart_scene();
#endif // __S_RELEASE__
}

void GlobalConfigurations::update(float delta)
{
#ifdef __S_RELEASE__
        auto win_data = SimpleINIParser::load_ini_string(win_ini);
#else
        auto win_data = SimpleINIParser::load_ini_file("config/Window.ini");
#endif // __S_RELEASE__

    static sf::Clock fps_update_interval;
    static int fps = static_cast<int>(1.f / delta);

    if(fps_update_interval.getElapsedTime().asSeconds() > 1.f) {

        fps = static_cast<int>(1.f / delta);

        fps_update_interval.restart();

    }

    static sf::Clock runtime;

    unsigned long elapsed_runtime = static_cast<unsigned long>(runtime.getElapsedTime().asSeconds());

    unsigned long seconds = elapsed_runtime % 60;
    unsigned long minutes = (elapsed_runtime / 60) % 60;
    unsigned long hours   = (elapsed_runtime / 60 / 60) % 60;

    std::ostringstream new_win_title;

    new_win_title << win_data["WINDOW"]["Title"]
                  << " | Esc: Quit"
                  << " | F3: Resize window"
#ifndef __S_RELEASE__
                  << " | F5: Restart scene"
#endif // __S_RELEASE__
                  << " | FPS: " << fps
                  << " | Runtime: " << (hours   < 10 ? "0" + std::to_string(hours)   : std::to_string(hours)  ) << 'h'
                                    << (minutes < 10 ? "0" + std::to_string(minutes) : std::to_string(minutes)) << 'm'
                                    << (seconds < 10 ? "0" + std::to_string(seconds) : std::to_string(seconds)) << 's';

    MinesweeperGame::window->setTitle(new_win_title.str());
}

void GlobalConfigurations::draw()
{

}

void GlobalConfigurations::resize_window()
{
    sf::Vector2i current_position = MinesweeperGame::window->getPosition();
    sf::Vector2u current_size     = MinesweeperGame::window->getSize();

    switch(current_size.x) {

        case 640:  { MinesweeperGame::window->setSize(sf::Vector2u{800, 600}); }  break;
        case 800:  { MinesweeperGame::window->setSize(sf::Vector2u{1024, 768}); } break;
        case 1024: { MinesweeperGame::window->setSize(sf::Vector2u{640, 480}); }  break;

        default: break;

    }

    // Little bit of algebra since I couldn't find a method to center the window's position after resizing it
    int new_x_position = ((current_position.x + current_size.x / 2) / 0.5f) / 2 - MinesweeperGame::window->getSize().x / 2;
    int new_y_position = ((current_position.y + current_size.y / 2) / 0.5f) / 2 - MinesweeperGame::window->getSize().y / 2;

    MinesweeperGame::window->setPosition(sf::Vector2i{new_x_position, new_y_position});
}
