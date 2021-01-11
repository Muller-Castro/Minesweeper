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
#include <chrono>
#include <cmath>

#include <SFML/Graphics/RenderWindow.hpp>

#include "io/ResourceLoader.h"
#include "scene/SceneManager.h"
#include "components/buttons/ClearButton.h"
#include "components/buttons/HostButton.h"
#include "components/buttons/JoinButton.h"
#include "components/buttons/AllFieldsOKButton.h"
#include "components/buttons/LobbyBeginnerButton.h"
#include "components/buttons/LobbyAverageButton.h"
#include "components/buttons/LobbyExpertButton.h"
#include "components/buttons/DurationAButton.h"
#include "components/buttons/DurationBButton.h"
#include "components/buttons/DurationCButton.h"
#include "components/buttons/StartButton.h"
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
        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(745.f, 550.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/ReturnHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ReturnNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ReturnDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_return_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_return_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_return_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__
    ),

    in_time(),
    connection_status(sf::Socket::NotReady),
#ifdef __S_RELEASE__
    text_edit_font_data(get_raw_arial()),
#endif // __S_RELEASE__
    text_edits(3),
    buttons(),
    panels(),
    background_texture(),
    lobby_registration_panel_texture(),
    select_difficulty_panel_texture(),
    select_duration_panel_texture(),
    p1_panel(),
    p2_panel(),
    background_sprite(),
    lobby_registration_panel_sprite(),
    select_panels(),
    match_panels(),
    players_info_text("", *ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf"), 18),
    background_shader(),
    listener()
{
    if(MinesweeperGame::public_ip_address.empty()) MinesweeperGame::public_ip_address = sf::IpAddress::getPublicAddress().toString();

#ifndef __S_RELEASE__
    background_texture               = ResourceLoader::load<sf::Texture>("assets/textures/MainMenuBG.png");
    lobby_registration_panel_texture = ResourceLoader::load<sf::Texture>("assets/textures/LobbyRegistrationPanel.png");
    select_difficulty_panel_texture  = ResourceLoader::load<sf::Texture>("assets/textures/SelectDifficultyPanel.png");
    select_duration_panel_texture    = ResourceLoader::load<sf::Texture>("assets/textures/SelectDurationPanel.png");
    p1_panel                         = ResourceLoader::load<sf::Texture>("assets/textures/P1LobbyPanel.png");
    p2_panel                         = ResourceLoader::load<sf::Texture>("assets/textures/P2LobbyPanel.png");
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

    players_info_text.setOutlineColor(sf::Color::Black);
    players_info_text.setOutlineThickness(2.f);

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
        13,
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
    buttons[States::REGISTRATION].push_back(std::unique_ptr<Button>(new ClearButton(

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

    buttons[States::REGISTRATION].push_back(std::unique_ptr<Button>(new ClearButton(

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

    buttons[States::REGISTRATION].push_back(std::unique_ptr<Button>(new ClearButton(

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
    buttons[States::REGISTRATION].push_back(std::unique_ptr<Button>(new HostButton(

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

    buttons[States::REGISTRATION].push_back(std::unique_ptr<Button>(new JoinButton(

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


    /////////////// Waiting Buttons
    buttons[States::WAITING].push_back(std::unique_ptr<Button>(new LobbyBeginnerButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(92.f, 133.f),
        sf::Vector2f(.5f, .5f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/BeginnerButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/BeginnerButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/BeginnerButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_beginner_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_beginner_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_beginner_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[States::WAITING].push_back(std::unique_ptr<Button>(new LobbyAverageButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(205.f, 133.f),
        sf::Vector2f(.5f, .5f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/AverageButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/AverageButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/AverageButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_average_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_average_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_average_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[States::WAITING].push_back(std::unique_ptr<Button>(new LobbyExpertButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(318.f, 133.f),
        sf::Vector2f(.5f, .5f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/ExpertButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ExpertButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ExpertButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_expert_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_expert_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_expert_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[States::WAITING].push_back(std::unique_ptr<Button>(new DurationAButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(458.f, 139.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/DurationAButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/DurationAButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/DurationAButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_n_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[States::WAITING].push_back(std::unique_ptr<Button>(new DurationBButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(571.f, 139.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/DurationBButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/DurationBButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/DurationBButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_n_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[States::WAITING].push_back(std::unique_ptr<Button>(new DurationCButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(684.f, 139.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/DurationCButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/DurationCButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/DurationCButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_n_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_expert_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    )));

    buttons[States::WAITING].push_back(std::unique_ptr<Button>(new StartButton(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(400.f, 400.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/StartButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/StartButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/StartButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
//        ResourceLoader::load<sf::Texture>(get_raw_join_button_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_join_button_n_hovered()),
//        ResourceLoader::load<sf::Texture>(get_raw_join_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__

    )));
    /////////////// Waiting Buttons

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

    panels["F_2_HOST"] = Panel(

        sf::Vector2f(105.f, 189.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/FailedToHost.png"),
#else
        //ResourceLoader::load<sf::Texture>(get_raw_invalid_port_panel()),
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
    if(listener) {

        listener->close();

    }
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

            for(auto& button : buttons[States::WAITING]) button->process_inputs();

            return_button.process_inputs();

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

            update_waiting();

            for(auto& button : buttons[States::WAITING]) button->update(delta);

            return_button.update(delta);

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

            draw_waiting();

            for(auto& button : buttons[States::WAITING]) MinesweeperGame::window->draw(*button);

            if(connection_status != sf::Socket::Done) draw_inactivation_rects();

            MinesweeperGame::window->draw(return_button);

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
    if(!std::regex_match(text_edits[1].get_text_str(), std::regex("^[0-9]{1,5}$"))) {

        SceneManager::call_deferred([&]() {

            panels["I_PORT"].set_active(true);

        });

        return false;

    }

    return true;
}

bool Lobby::evaluate_ip_port()
{
    if(!std::regex_match(text_edits[1].get_text_str(), std::regex("^[0-9]+..[0-9]+..[0-9]+..[0-9]+:[0-9]{1,5}$"))) {

        SceneManager::call_deferred([&]() {

            panels["I_IPPORT"].set_active(true);

        });

        return false;

    }

    return true;
}

void Lobby::update_waiting()
{
    if(listener && (connection_status != sf::Socket::Done)) {

        connection_status = listener->accept(MinesweeperGame::tcp_socket);

        if(connection_status != sf::Socket::Done) {

            //

        }else {

            //

        }

    }else if(connection_status == sf::Socket::Done) {

        update_ping();

    }
}

void Lobby::update_ping()
{
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();

    connection_status = MinesweeperGame::tcp_socket.send("PING", 4);

    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

    MinesweeperGame::ping = std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count();

    MinesweeperGame::max_ping = MinesweeperGame::ping > MinesweeperGame::max_ping ? MinesweeperGame::ping : MinesweeperGame::max_ping;
}

void Lobby::draw_waiting()
{
    //////////////
    select_panels.setTexture(*select_difficulty_panel_texture);
    select_panels.setPosition(sf::Vector2f(58.f, 95.f));
    MinesweeperGame::window->draw(select_panels);

    select_panels.setTexture(*select_duration_panel_texture);
    select_panels.setPosition(sf::Vector2f(399.f, 95.f));
    MinesweeperGame::window->draw(select_panels);
    //////////////

    match_panels.setTexture(*p1_panel);
    match_panels.setPosition(sf::Vector2f(58.f, 160.f));
    match_panels.setColor(sf::Color::White);
    MinesweeperGame::window->draw(match_panels);

    match_panels.setTexture(*p2_panel);
    match_panels.setPosition(sf::Vector2f(399.f, 160.f));
    match_panels.setColor(connection_status == sf::Socket::Done ? sf::Color::White : sf::Color(128, 128, 128, 128));
    MinesweeperGame::window->draw(match_panels, sf::RenderStates(sf::BlendMode(sf::BlendMode::SrcAlpha, sf::BlendMode::One, sf::BlendMode::Subtract)));

    draw_players_info();
}

void Lobby::draw_players_info()
{
    //// P1
    {
        players_info_text.setString("Name: " + text_edits[0].get_text_str());
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(240.f - bounds.width / 2.f), 194.f));
        MinesweeperGame::window->draw(players_info_text);
    }

    {
        players_info_text.setString("IP: " + MinesweeperGame::public_ip_address + ':' + text_edits[1].get_text_str());
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(240.f - bounds.width / 2.f), 234.f));
        MinesweeperGame::window->draw(players_info_text);
    }

    {
        players_info_text.setString("Ping: " + (connection_status == sf::Socket::Done ? std::to_string(MinesweeperGame::ping) : "???") + "ms");
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(240.f - bounds.width / 2.f), 274.f));
        MinesweeperGame::window->draw(players_info_text);
    }

    {
        players_info_text.setString("Max Ping: " + (connection_status == sf::Socket::Done ? std::to_string(MinesweeperGame::max_ping) : "???") + "ms");
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(240.f - bounds.width / 2.f), 314.f));
        MinesweeperGame::window->draw(players_info_text);
    }
    //// P1
}

void Lobby::draw_inactivation_rects()
{
    sf::RectangleShape shape(sf::Vector2f(338.f, 62.f));
    shape.setFillColor(sf::Color(0, 0, 0, 180));

    shape.setPosition(sf::Vector2f(61.f, 98.f));
    MinesweeperGame::window->draw(shape);

    shape.setPosition(sf::Vector2f(402.f, 98.f));
    MinesweeperGame::window->draw(shape);

    shape.setPosition(sf::Vector2f(61.f, 372.f));
    shape.setSize(sf::Vector2f(679.f, 57.f));
    MinesweeperGame::window->draw(shape);
}
