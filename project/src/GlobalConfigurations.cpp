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

#ifndef __S_RELEASE__
#include <SFML/Graphics/Text.hpp>
#endif // __S_RELEASE__

#include "Input.h"
#include "scene/SceneManager.h"
#include "MinesweeperGame.h"
#include "io/SimpleINIParser.h"

#ifndef __S_RELEASE__
#include "io/ResourceLoader.h"
#endif // __S_RELEASE__

#ifdef __S_RELEASE__
#include "io/ini_strings/WindowINI.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

#ifdef __DEBUG__
bool GlobalConfigurations::show_bb = true;
#endif // __DEBUG__

#ifdef __DEBUG__
bool GlobalConfigurations::show_grid_button_icons = true;
#elif defined(__RELEASE__)
bool GlobalConfigurations::show_grid_button_icons = false;
#endif // __DEBUG__

#ifndef __S_RELEASE__
std::shared_ptr<sf::Font> GlobalConfigurations::font;
std::string GlobalConfigurations::current_scene_name;
#endif // __S_RELEASE__

void GlobalConfigurations::process_inputs()
{
//    if(Input::is_just_pressed<Input::Key>(sf::Keyboard::F3)) GlobalConfigurations::resize_window();
    /*else*/ if(Input::is_just_pressed<Input::Key>(sf::Keyboard::Escape)) MinesweeperGame::is_running = false;
#ifndef __S_RELEASE__
    else if(Input::is_just_pressed<Input::Key>(sf::Keyboard::F5)) SceneManager::restart_scene();
#endif // __S_RELEASE__
#ifdef __DEBUG__
    else if(Input::is_just_pressed<Input::Key>(sf::Keyboard::F9)) GlobalConfigurations::show_bb = !GlobalConfigurations::show_bb;
    else if(Input::is_just_pressed<Input::Key>(sf::Keyboard::F10)) SceneManager::change_scene_to(SceneManager::Scenes::TEST_ZONE);
#endif // __DEBUG__
#ifndef __S_RELEASE__
    else if(Input::is_just_pressed<Input::Key>(sf::Keyboard::F11)) GlobalConfigurations::show_grid_button_icons = !GlobalConfigurations::show_grid_button_icons;
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
                  //<< " | F3: Resize"
#ifndef __S_RELEASE__
                  << " | F5: RST Scene"
#endif // __S_RELEASE__
                  << " | FPS: " << fps
#ifndef __DEBUG__
                  << " | Run-time: "
#else
                  << " | RT: "
#endif // __DEBUG__
                  << (hours   < 10 ? "0" + std::to_string(hours)   : std::to_string(hours)  ) << 'h'
                  << (minutes < 10 ? "0" + std::to_string(minutes) : std::to_string(minutes)) << 'm'
                  << (seconds < 10 ? "0" + std::to_string(seconds) : std::to_string(seconds)) << 's'
#ifdef __DEBUG__
                  << " | F9: BB"
                  << " | F10: TZ"
#endif // __DEBUG__
#ifndef __S_RELEASE__
                  << " | F11: Icons"
#endif // __S_RELEASE__
                  ;

    MinesweeperGame::window->setTitle(new_win_title.str());
}

void GlobalConfigurations::draw()
{
#ifndef __S_RELEASE__
    GlobalConfigurations::draw_current_scene_text();

    GlobalConfigurations::draw_amount_of_loaded_resources();
#endif // __S_RELEASE__
}

#ifndef __S_RELEASE__
void GlobalConfigurations::draw_current_scene_text()
{
    if(!GlobalConfigurations::font) GlobalConfigurations::font = ResourceLoader::load<sf::Font>("assets/fonts/NeonNanoborg.otf");

    sf::Text current_scene_text("[" + current_scene_name + "]", *GlobalConfigurations::font);

    current_scene_text.setPosition(sf::Vector2f{5.f, 5.f});

    current_scene_text.setOutlineColor(sf::Color::Black);
    current_scene_text.setOutlineThickness(1.f);

    current_scene_text.setFillColor(sf::Color(127, 127, 127)); // light gray

    MinesweeperGame::window->draw(current_scene_text);
}
#endif // __S_RELEASE__

#ifndef __S_RELEASE__
void GlobalConfigurations::draw_amount_of_loaded_resources()
{
    std::ostringstream oss;

    oss << ResourceLoader::resources.size();

    sf::Text loaded_resources("[Resources: " + oss.str() + "]", *GlobalConfigurations::font);

    loaded_resources.setPosition(sf::Vector2f{5.f, 45.f});

    loaded_resources.setOutlineColor(sf::Color::Black);
    loaded_resources.setOutlineThickness(1.f);

    loaded_resources.setFillColor(sf::Color(127, 127, 127)); // light gray

    MinesweeperGame::window->draw(loaded_resources);
}
#endif // __S_RELEASE__

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
