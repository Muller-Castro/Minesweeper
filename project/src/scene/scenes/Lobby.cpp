/****************************************************************************************/
/* Lobby.cpp                                                                            */
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

#include "scene/scenes/Lobby.h"

#include <regex>

#include <SFML/Graphics/RenderWindow.hpp>

#include "io/ResourceLoader.h"
#include "scene/SceneManager.h"
#include "components/buttons/ClearButton.h"
#include "components/buttons/HostButton.h"
#include "components/buttons/JoinButton.h"
#include "components/buttons/AllFieldsOKButton.h"
#ifdef __S_RELEASE__
#include "assets/ReturnNHovered.h"
#include "assets/ReturnHovered.h"
#include "assets/ReturnDown.h"
#include "assets/ClearButtonHovered.h"
#include "assets/ClearButtonNHovered.h"
#include "assets/ClearButtonDown.h"
#include "assets/MainMenuButtonHovered.h"
#include "assets/MainMenuButtonPressed.h"
#include "assets/Arial.h"
#include "assets/MainMenuBG.h"
#include "assets/LobbyRegistrationPanel.h"
#include "assets/LobbyBGFRG.h"
#include "assets/Typing.h"
#include "assets/HostButtonHovered.h"
#include "assets/HostButtonNHovered.h"
#include "assets/HostButtonDown.h"
#include "assets/JoinButtonHovered.h"
#include "assets/JoinButtonNHovered.h"
#include "assets/JoinButtonDown.h"
#include "assets/AllFieldsPanel.h"
#include "assets/InvalidPortPanel.h"
#include "assets/InvalidIPPortPanel.h"
#include "assets/AllFieldsOKButtonNHovered.h"
#include "assets/AllFieldsOKButtonHovered.h"
#include "assets/AllFieldsOKButtonDown.h"
#endif // __S_RELEASE__
#include "MinesweeperGame.h"

using namespace Minesweeper;

Lobby::Lobby() :
    current_state(States::REGISTRATION),

    return_button(
        Button::Enabled::LEFT,
        sf::Vector2f(745.f, 550.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/ReturnHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ReturnNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ReturnDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_return_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_return_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_return_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__
    ),

    in_time(),
#ifdef __S_RELEASE__
    text_edit_font_data(get_raw_arial()),
#endif // __S_RELEASE__
    text_edits(3),
    buttons(),
    panels(),
    background_texture(),
    lobby_registration_panel_texture(),
    background_sprite(),
    lobby_registration_panel_sprite(),
    background_shader()
{
#ifndef __S_RELEASE__
    background_texture               = ResourceLoader::load<sf::Texture>("assets/textures/MainMenuBG.png");
    lobby_registration_panel_texture = ResourceLoader::load<sf::Texture>("assets/textures/LobbyRegistrationPanel.png");
#else
    background_texture               = ResourceLoader::load<sf::Texture>(get_raw_main_menu_bg());
    lobby_registration_panel_texture = ResourceLoader::load<sf::Texture>(get_raw_lobby_registration_panel());
#endif // __S_RELEASE__

    background_sprite.setTexture(*background_texture);
    lobby_registration_panel_sprite.setTexture(*lobby_registration_panel_texture);

    lobby_registration_panel_sprite.setPosition(sf::Vector2f(195.f, 123.f));

#ifndef __S_RELEASE__
    background_shader = ResourceLoader::load<sf::Shader>("assets/shaders/LobbyBG.frg");
#else
    background_shader = ResourceLoader::load<sf::Shader>({"LobbyBGFRG", ""});

    background_shader->loadFromMemory(get_raw_lobby_bg_frg().second, sf::Shader::Fragment);
#endif // __S_RELEASE__

    background_shader->setUniform("in_texture"   , sf::Shader::CurrentTexture);
    background_shader->setUniform("in_resolution", sf::Vector2f(300.f, 1200.f));
    background_shader->setUniform("in_width"     , 1000.f);

    /////////////// Text Edits
    text_edits[0] = TextEdit(

        sf::Vector2f(233.f, 177.f),
        sf::Vector2f(1.f, 1.f),
        sf::Vector2f(255.f, 22.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf"),
#else
        ResourceLoader::load<sf::Font>(text_edit_font_data),
#endif // __S_RELEASE__
        16,
        sf::Color::Black,
        15,
        "e.g. Defuser@123",
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Typing.wav"),
#else
        ResourceLoader::load<sf::SoundBuffer>(get_raw_typing()),
#endif // __S_RELEASE__
        &text_edits[1],
        {},
        20.f

    );

    text_edits[1] = TextEdit(

        sf::Vector2f(233.f, 257.f),
        sf::Vector2f(1.f, 1.f),
        sf::Vector2f(255.f, 22.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf"),
#else
        ResourceLoader::load<sf::Font>(text_edit_font_data),
#endif // __S_RELEASE__
        16,
        sf::Color::Black,
        21,
        "e.g. 123.456.789.222:12345",
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Typing.wav"),
#else
        ResourceLoader::load<sf::SoundBuffer>(get_raw_typing()),
#endif // __S_RELEASE__
        &text_edits[2],

        [](char c) {

            unsigned unicode = static_cast<unsigned>(c);

            return ((unicode > 47) && (unicode < 59)) || unicode == 46;

        },

        20.f

    );

    text_edits[2] = TextEdit(

        sf::Vector2f(233.f, 337.f),
        sf::Vector2f(1.f, 1.f),
        sf::Vector2f(255.f, 22.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf"),
#else
        ResourceLoader::load<sf::Font>(text_edit_font_data),
#endif // __S_RELEASE__
        16,
        sf::Color::Black,
        15,
        "e.g. repeewsenim#789",
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Typing.wav"),
#else
        ResourceLoader::load<sf::SoundBuffer>(get_raw_typing()),
#endif // __S_RELEASE__
        &text_edits[0],
        {},
        20.f

    );
    /////////////// Text Edits

    /////////////// Clear buttons
    buttons[current_state].push_back(std::unique_ptr<Button>(new ClearButton(

        text_edits[0],
        Button::Enabled::LEFT,
        sf::Vector2f(536.f, 187.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[current_state].push_back(std::unique_ptr<Button>(new ClearButton(

        text_edits[1],
        Button::Enabled::LEFT,
        sf::Vector2f(536.f, 268.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[current_state].push_back(std::unique_ptr<Button>(new ClearButton(

        text_edits[2],
        Button::Enabled::LEFT,
        sf::Vector2f(536.f, 348.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ClearButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_clear_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));
    /////////////// Clear buttons

    /////////////// Registration Buttons
    buttons[current_state].push_back(std::unique_ptr<Button>(new HostButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(308.f, 426.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/HostButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/HostButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/HostButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_host_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_host_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_host_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[current_state].push_back(std::unique_ptr<Button>(new JoinButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(492.f, 426.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/JoinButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/JoinButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/JoinButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_join_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_join_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_join_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));
    /////////////// Registration Buttons

    /////////////// Panels
    panels["ALL_F"] = Panel(

        sf::Vector2f(105.f, 189.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsPanel.png"),
#else
        ResourceLoader::load<sf::Texture>(get_raw_all_fields_panel()),
#endif // __S_RELEASE__
        {
            std::make_shared<AllFieldsOKButton>(

                Button::Enabled::LEFT,
                sf::Vector2f(406.f, 303.f),
                sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonNHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonDown.png"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_n_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_down()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

            )
        }

    );

    panels["I_IPPORT"] = Panel(

        sf::Vector2f(105.f, 189.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/InvalidIPPortPanel.png"),
#else
        ResourceLoader::load<sf::Texture>(get_raw_invalid_ip_port_panel()),
#endif // __S_RELEASE__
        {
            std::make_shared<AllFieldsOKButton>(

                Button::Enabled::LEFT,
                sf::Vector2f(406.f, 303.f),
                sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonNHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonDown.png"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_n_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_down()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

            )
        }

    );

    panels["I_PORT"] = Panel(

        sf::Vector2f(105.f, 189.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/InvalidPortPanel.png"),
#else
        ResourceLoader::load<sf::Texture>(get_raw_invalid_port_panel()),
#endif // __S_RELEASE__
        {
            std::make_shared<AllFieldsOKButton>(

                Button::Enabled::LEFT,
                sf::Vector2f(406.f, 303.f),
                sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonNHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonDown.png"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_n_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_down()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

            )
        }

    );
    /////////////// Panels
}

Lobby::~Lobby() noexcept
{
    //
}

void Lobby::process_inputs()
{
    for(auto& panel : panels) {

        panel.second.process_inputs();

        if(panel.second.activated()) return;

    }

    switch(current_state) {

        case States::REGISTRATION: {

            for(auto& text_edit : text_edits) text_edit.process_inputs();

            for(auto& button : buttons[States::REGISTRATION]) button->process_inputs();

            return_button.process_inputs();

        } break;

        case States::CONNECTING: {

        } break;

        case States::WAITING: {

        } break;

        default: break;

    }
}

void Lobby::update(float delta)
{
    for(auto& panel : panels) {

        panel.second.update(delta);

        if(panel.second.activated()) return;

    }

    switch(current_state) {

        case States::REGISTRATION: {

            for(auto& text_edit : text_edits) text_edit.update(delta);

            for(auto& button : buttons[States::REGISTRATION]) button->update(delta);

            return_button.update(delta);

        } break;

        case States::CONNECTING: {

        } break;

        case States::WAITING: {

        } break;

        default: break;

    }
}

void Lobby::draw()
{
    background_shader->setUniform("in_time", in_time.getElapsedTime().asSeconds());

    MinesweeperGame::window->draw(background_sprite, background_shader.get());

    switch(current_state) {

        case States::REGISTRATION: {

            MinesweeperGame::window->draw(lobby_registration_panel_sprite);

            for(auto& text_edit : text_edits) text_edit.draw();

            for(auto& button : buttons[States::REGISTRATION]) MinesweeperGame::window->draw(*button);

            MinesweeperGame::window->draw(return_button);

        } break;

        case States::CONNECTING: {

        } break;

        case States::WAITING: {

        } break;

        default: break;

    }

    for(auto& panel : panels) {

        bool should_break = false;

        if(panel.second.activated()) {

            sf::RectangleShape shape(sf::Vector2f(800.f, 600.f));

            shape.setFillColor(sf::Color(0, 0, 0, 200));

            MinesweeperGame::window->draw(shape);

            should_break = true;

        }

        panel.second.draw();

        if(should_break) break;

    }
}

bool Lobby::evaluate_text_edits()
{
    for(auto& text_edit : text_edits) {

        if(text_edit.get_text_str().empty()) {

            SceneManager::call_deferred([&]() {

                panels["ALL_F"].set_active(true);

            });

            return false;

        }

    }

    return true;
}

bool Lobby::evaluate_port()
{
    if(!std::regex_match(text_edits[1].get_text_str(), std::regex("^[0-9]+$"))) {

        SceneManager::call_deferred([&]() {

            panels["I_PORT"].set_active(true);

        });

        return false;

    }

    return true;
}

bool Lobby::evaluate_ip_port()
{
    if(!std::regex_match(text_edits[1].get_text_str(), std::regex("^[0-9]+..[0-9]+..[0-9]+..[0-9]+:[0-9]+$"))) {

        SceneManager::call_deferred([&]() {

            panels["I_IPPORT"].set_active(true);

        });

        return false;

    }

    return true;
}
