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
#include <cmath>

#ifdef __RELEASE__
#include <iostream>
#endif // __RELEASE__

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Network/Packet.hpp>

#include "io/ResourceLoader.h"
#include "scene/SceneManager.h"
#include "components/buttons/ClearButton.h"
#include "components/buttons/HostButton.h"
#include "components/buttons/JoinButton.h"
#include "components/buttons/ConnectionCancelButton.h"
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
#include "assets/CancelButtonHovered.h"
#include "assets/CancelButtonNHovered.h"
#include "assets/CancelButtonDown.h"
#include "assets/SmallBeginnerButtonHovered.h"
#include "assets/SmallBeginnerButtonNHovered.h"
#include "assets/SmallBeginnerButtonDown.h"
#include "assets/SmallAverageButtonHovered.h"
#include "assets/SmallAverageButtonNHovered.h"
#include "assets/SmallAverageButtonDown.h"
#include "assets/SmallExpertButtonHovered.h"
#include "assets/SmallExpertButtonNHovered.h"
#include "assets/SmallExpertButtonDown.h"
#include "assets/DurationAButtonHovered.h"
#include "assets/DurationAButtonNHovered.h"
#include "assets/DurationAButtonDown.h"
#include "assets/DurationBButtonHovered.h"
#include "assets/DurationBButtonNHovered.h"
#include "assets/DurationBButtonDown.h"
#include "assets/DurationCButtonHovered.h"
#include "assets/DurationCButtonNHovered.h"
#include "assets/DurationCButtonDown.h"
#include "assets/StartButtonHovered.h"
#include "assets/StartButtonNHovered.h"
#include "assets/StartButtonDown.h"
#include "assets/AllFieldsOKButtonHovered.h"
#include "assets/AllFieldsOKButtonNHovered.h"
#include "assets/AllFieldsOKButtonDown.h"
#include "assets/MainMenuButtonHovered.h"
#include "assets/MainMenuButtonPressed.h"
#include "assets/Arial.h"
#include "assets/MainMenuBG.h"
#include "assets/LobbyRegistrationPanel.h"
#include "assets/SelectDifficultyPanel.h"
#include "assets/SelectDurationPanel.h"
#include "assets/P1LobbyPanel.h"
#include "assets/P2LobbyPanel.h"
#include "assets/InvalidIPPortPanel.h"
#include "assets/FailedToHost.h"
#include "assets/MatchDropPanel.h"
#include "assets/WrongPasswordPanel.h"
#include "assets/INET.h"
#include "assets/ClientArrived.h"
#include "assets/LobbySoundtrack.h"
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

#ifndef __S_RELEASE__
#include "Input.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

Lobby::Lobby() :
    Network('D', 'E'),
    arrow_speed(20.f),
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
    join_delay_timer(),
    arrow(sf::Triangles, 3),
#ifdef __S_RELEASE__
    text_edit_font_data(get_raw_arial()),
    general_info_font_data(get_raw_arial()),
    you_font_data(get_raw_inet()),
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
    general_info_font(),
    you_font(),
    background_sprite(),
    lobby_registration_panel_sprite(),
    select_panels(),
    match_panels(),
    players_info_text(),
    connecting_text(),
    you_text(),
    background_shader(),
    sound(),
    client_arrived_s_buffer(),
    soundtrack(),
    listener()
{
    MinesweeperGame::tcp_socket.setBlocking(true);

    if(MinesweeperGame::peer_info.public_ip_address.empty()) MinesweeperGame::peer_info.public_ip_address = sf::IpAddress::getPublicAddress().toString();

    arrow[0].color = sf::Color::Red;
    arrow[1].color = sf::Color::Blue;
    arrow[2].color = sf::Color::Green;

#ifndef __S_RELEASE__
    background_texture               = ResourceLoader::load<sf::Texture>("assets/textures/MainMenuBG.png");
    lobby_registration_panel_texture = ResourceLoader::load<sf::Texture>("assets/textures/LobbyRegistrationPanel.png");
    select_difficulty_panel_texture  = ResourceLoader::load<sf::Texture>("assets/textures/SelectDifficultyPanel.png");
    select_duration_panel_texture    = ResourceLoader::load<sf::Texture>("assets/textures/SelectDurationPanel.png");
    p1_panel                         = ResourceLoader::load<sf::Texture>("assets/textures/P1LobbyPanel.png");
    p2_panel                         = ResourceLoader::load<sf::Texture>("assets/textures/P2LobbyPanel.png");
    general_info_font                = ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf");
    you_font                         = ResourceLoader::load<sf::Font>("assets/fonts/INET.ttf");
    client_arrived_s_buffer          = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/ClientArrived.wav");
    soundtrack                       = ResourceLoader::load<MusicStream>("assets/musics/LobbySoundtrack.ogg");
#else
    background_texture               = ResourceLoader::load<sf::Texture>(get_raw_main_menu_bg());
    lobby_registration_panel_texture = ResourceLoader::load<sf::Texture>(get_raw_lobby_registration_panel());
    select_difficulty_panel_texture  = ResourceLoader::load<sf::Texture>(get_raw_select_difficulty_panel());
    select_duration_panel_texture    = ResourceLoader::load<sf::Texture>(get_raw_select_duration_panel());
    p1_panel                         = ResourceLoader::load<sf::Texture>(get_raw_p1_lobby_panel());
    p2_panel                         = ResourceLoader::load<sf::Texture>(get_raw_p2_lobby_panel());
    general_info_font                = ResourceLoader::load<sf::Font>(general_info_font_data);
    you_font                         = ResourceLoader::load<sf::Font>(you_font_data);
    client_arrived_s_buffer          = ResourceLoader::load<sf::SoundBuffer>(get_raw_client_arrived());
    soundtrack                       = ResourceLoader::load<MusicStream>(get_raw_lobby_soundtrack());
#endif // __S_RELEASE__

    background_sprite.setTexture(*background_texture);
    lobby_registration_panel_sprite.setTexture(*lobby_registration_panel_texture);

    lobby_registration_panel_sprite.setPosition(sf::Vector2f(195.f, 123.f));

    sound.setBuffer(*client_arrived_s_buffer);

    soundtrack->music.setLoop(true);
    soundtrack->music.play();
    soundtrack->music.setVolume(40.f);

#ifndef __S_RELEASE__
    background_shader = ResourceLoader::load<sf::Shader>("assets/shaders/LobbyBG.frg");
#else
    background_shader = ResourceLoader::load<sf::Shader>({"LobbyBGFRG", ""});

    background_shader->loadFromMemory(get_raw_lobby_bg_frg().second, sf::Shader::Fragment);
#endif // __S_RELEASE__

    background_shader->setUniform("in_texture"   , sf::Shader::CurrentTexture);
    background_shader->setUniform("in_resolution", sf::Vector2f(300.f, 1200.f));
    background_shader->setUniform("in_width"     , 1000.f);

    players_info_text.setFont(*general_info_font);
    players_info_text.setCharacterSize(18);
    players_info_text.setOutlineColor(sf::Color::Black);
    players_info_text.setOutlineThickness(2.f);

    connecting_text.setFont(*general_info_font);
    connecting_text.setCharacterSize(30);
    connecting_text.setOutlineColor(sf::Color::Black);
    connecting_text.setOutlineThickness(2.f);

    you_text.setFont(*you_font);
    you_text.setString("YOU");
    you_text.setCharacterSize(24);
    you_text.setOutlineColor(sf::Color::Black);
    you_text.setOutlineThickness(2.f);
    you_text.setPosition(sf::Vector2f(214.f, 10.f));

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
        "e.g. DEFUSER@123",
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Typing.wav"),
#else
        ResourceLoader::load<sf::SoundBuffer>(get_raw_typing()),
#endif // __S_RELEASE__
        &text_edits[1],
        {},
        true,
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

        false,
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
        "e.g. REPEEWSENIM#789",
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Typing.wav"),
#else
        ResourceLoader::load<sf::SoundBuffer>(get_raw_typing()),
#endif // __S_RELEASE__
        &text_edits[0],
        {},
        true,
        20.f

    );
    /////////////// Text Edits

    /////////////// Clear buttons
    buttons[States::REGISTRATION].push_back(std::make_unique<ClearButton>(

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

    ));

    buttons[States::REGISTRATION].push_back(std::make_unique<ClearButton>(

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

    ));

    buttons[States::REGISTRATION].push_back(std::make_unique<ClearButton>(

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

    ));
    /////////////// Clear buttons

    /////////////// Registration Buttons
    buttons[States::REGISTRATION].push_back(std::make_unique<HostButton>(

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

    ));

    buttons[States::REGISTRATION].push_back(std::make_unique<JoinButton>(

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

    ));
    /////////////// Registration Buttons

    /////////////// Connecting Buttons
    buttons[States::CONNECTING].push_back(std::make_unique<ConnectionCancelButton>(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(400.f, 336.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/CancelButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/CancelButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/CancelButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_cancel_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_cancel_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_cancel_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    ));
    /////////////// Connecting Buttons

    /////////////// Waiting Buttons
    buttons[States::WAITING].push_back(std::make_unique<LobbyBeginnerButton>(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(118.f, 140.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/SmallBeginnerButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/SmallBeginnerButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/SmallBeginnerButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_small_beginner_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_small_beginner_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_small_beginner_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    ));

    buttons[States::WAITING].push_back(std::make_unique<LobbyAverageButton>(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(230.f, 140.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/SmallAverageButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/SmallAverageButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/SmallAverageButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_small_average_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_small_average_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_small_average_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    ));

    buttons[States::WAITING].push_back(std::make_unique<LobbyExpertButton>(

        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(343.f, 140.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/SmallExpertButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/SmallExpertButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/SmallExpertButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_small_expert_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_small_expert_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_small_expert_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    ));

    buttons[States::WAITING].push_back(std::make_unique<DurationAButton>(

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
        ResourceLoader::load<sf::Texture>(get_raw_duration_a_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_duration_a_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_duration_a_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    ));

    buttons[States::WAITING].push_back(std::make_unique<DurationBButton>(

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
        ResourceLoader::load<sf::Texture>(get_raw_duration_b_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_duration_b_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_duration_b_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    ));

    buttons[States::WAITING].push_back(std::make_unique<DurationCButton>(

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
        ResourceLoader::load<sf::Texture>(get_raw_duration_c_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_duration_c_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_duration_c_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

    ));

    buttons[States::WAITING].push_back(std::make_unique<StartButton>(

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
        ResourceLoader::load<sf::Texture>(get_raw_start_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_start_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_start_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__

    ));
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
        ResourceLoader::load<sf::Texture>(get_raw_failed_to_host()),
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

    panels["M_DROP"] = Panel(

        sf::Vector2f(105.f, 189.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/MatchDropPanel.png"),
#else
        ResourceLoader::load<sf::Texture>(get_raw_match_drop_panel()),
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

    panels["W_PASS"] = Panel(

        sf::Vector2f(105.f, 189.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/WrongPasswordPanel.png"),
#else
        ResourceLoader::load<sf::Texture>(get_raw_wrong_password_panel()),
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

            for(auto& button : buttons[States::CONNECTING]) button->process_inputs();

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

            MinesweeperGame::peer_info.max_ping = 0;
            MinesweeperGame::new_peer_info.clear();

            for(auto& text_edit : text_edits) text_edit.update(delta);

            for(auto& button : buttons[States::REGISTRATION]) button->update(delta);

            return_button.update(delta);

        } break;

        case States::CONNECTING: {

            update_connecting();

            for(auto& button : buttons[States::CONNECTING]) button->update(delta);

            receive_packages();

        } break;

        case States::WAITING: {

            update_waiting();
            update_you(delta);

            for(auto& button : buttons[States::WAITING]) button->update(delta);

            return_button.update(delta);

            receive_packages();

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

            draw_connecting();

            for(auto& button : buttons[States::CONNECTING]) MinesweeperGame::window->draw(*button);

        } break;

        case States::WAITING: {

            draw_waiting();

            for(auto& button : buttons[States::WAITING]) MinesweeperGame::window->draw(*button);

            if(!listener || (connection_status != sf::Socket::Done)) draw_inactivation_rects();

            MinesweeperGame::window->draw(return_button);

        } break;

        default: break;

    }

    draw_panel();
}

void Lobby::receive_packages()
{
    sf::Packet p;

    while(MinesweeperGame::tcp_socket.receive(p) == sf::Socket::Done) {

        std::string received_data;

        p >> received_data;

        //////////////////////////////////////////
        size_t idx;

        if((idx = received_data.find('A')) != std::string::npos) {

            if(listener) receive_password(retrieve_data<'A'>(idx, received_data));
            else         receive_password_response(retrieve_data<'A'>(idx, received_data));

        }

        if((idx = received_data.find('B')) != std::string::npos) MinesweeperGame::new_peer_info.name              = TextEdit::to_uppercase(retrieve_data<'B'>(idx, received_data));
        if((idx = received_data.find('C')) != std::string::npos) MinesweeperGame::new_peer_info.public_ip_address = retrieve_data<'C'>(idx, received_data);
        if((idx = received_data.find('D')) != std::string::npos) receive_ping(retrieve_data<'D'>(idx, received_data));
        if((idx = received_data.find('E')) != std::string::npos) receive_max_ping(retrieve_data<'E'>(idx, received_data));

        if(!listener) {

            if((idx = received_data.find('F')) != std::string::npos) change_difficulty(Difficulties::BEGINNER, retrieve_data<'F'>(idx, received_data));
            if((idx = received_data.find('G')) != std::string::npos) change_difficulty(Difficulties::AVERAGE , retrieve_data<'G'>(idx, received_data));
            if((idx = received_data.find('H')) != std::string::npos) change_difficulty(Difficulties::EXPERT  , retrieve_data<'H'>(idx, received_data));

            if((idx = received_data.find('I')) != std::string::npos) change_duration(Durations::SHORT , retrieve_data<'I'>(idx, received_data));
            if((idx = received_data.find('J')) != std::string::npos) change_duration(Durations::NORMAL, retrieve_data<'J'>(idx, received_data));
            if((idx = received_data.find('K')) != std::string::npos) change_duration(Durations::LONG  , retrieve_data<'K'>(idx, received_data));

            if((idx = received_data.find('L')) != std::string::npos) {

                SceneManager::call_deferred([&]() {

                    dynamic_cast<StartButton&>(*buttons[States::WAITING][6]).play_counter();

                });

            }

            if((idx = received_data.find('M')) != std::string::npos) SceneManager::change_scene_to(SceneManager::Scenes::GAME);

        }
        //////////////////////////////////////////

        p.clear();

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

void Lobby::update_connecting()
{
    if(

#ifdef __S_RELEASE__
        (join_delay_timer.getElapsedTime().asSeconds() >= Lobby::JOIN_DELAY) &&
#endif // __S_RELEASE__
       (connection_status != sf::Socket::Error) && (connection_status != sf::Socket::Done)

    ) {

        std::string ip_port = text_edits[1].get_text_str();
        std::string ip      = ip_port.substr(0, ip_port.find(':'));
        std::string port    = ip_port.substr(ip_port.find(':') + 1);

        connection_status   = MinesweeperGame::tcp_socket.connect(ip, std::stoul(port), sf::seconds(3.f));

        if(connection_status == sf::Socket::Done) send('A', TextEdit::to_lowercase(text_edits[2].get_text_str()));

    }
}

void Lobby::update_waiting()
{
    if(listener && (connection_status != sf::Socket::Done)) {

        dynamic_cast<StartButton&>(*buttons[States::WAITING][6]).stop_counter();

        connection_status = listener->accept(MinesweeperGame::tcp_socket);

        if(connection_status != sf::Socket::Done) {

            reset_config_buttons();

        }else {

            receive_packages(); // todo: check if it's better to just hide the player's info while the name of the new peer isn't already set

        }

    }else if(connection_status == sf::Socket::Done) {

        update_ping();

    }else if(connection_status != sf::Socket::Done) {

        current_state     = States::REGISTRATION;

        connection_status = sf::Socket::NotReady;

        panels["M_DROP"].set_active(true);

        reset_config_buttons();

        dynamic_cast<StartButton&>(*buttons[States::WAITING][6]).stop_counter();

        MinesweeperGame::tcp_socket.setBlocking(true);
        MinesweeperGame::tcp_socket.disconnect();

    }
}

void Lobby::update_you(float delta)
{
    for(size_t i = 0; i < arrow.getVertexCount(); ++i) arrow[i].position = sf::Vector2f(arrow[i].position.x, arrow[i].position.y + arrow_speed * delta);

    if(arrow[0].position.y < 47.f) {

        arrow[0].position = sf::Vector2f(arrow[0].position.x, 47.f);
        arrow[1].position = sf::Vector2f(arrow[1].position.x, 47.f);
        arrow[2].position = sf::Vector2f(arrow[2].position.x, 83.f);

        arrow_speed = std::abs(arrow_speed);

    }else if(arrow[0].position.y > 57.f) {

        arrow[0].position = sf::Vector2f(arrow[0].position.x, 57.f);
        arrow[1].position = sf::Vector2f(arrow[1].position.x, 57.f);
        arrow[2].position = sf::Vector2f(arrow[2].position.x, 93.f);

        arrow_speed = -arrow_speed;

    }
}

void Lobby::reset_config_buttons()
{
    dynamic_cast<LobbyBeginnerButton&>(*buttons[States::WAITING][0]).set_active(false);
    dynamic_cast<LobbyAverageButton&>(*buttons[States::WAITING][1]).set_active(false);
    dynamic_cast<LobbyExpertButton&>(*buttons[States::WAITING][2]).set_active(false);

    dynamic_cast<DurationAButton&>(*buttons[States::WAITING][3]).set_active(false);
    dynamic_cast<DurationBButton&>(*buttons[States::WAITING][4]).set_active(false);
    dynamic_cast<DurationCButton&>(*buttons[States::WAITING][5]).set_active(false);
}

void Lobby::change_difficulty(Difficulties d, const std::string& difficulty)
{
    LobbyBeginnerButton& beg = dynamic_cast<LobbyBeginnerButton&>(*buttons[States::WAITING][0]);
    LobbyAverageButton&  ave = dynamic_cast<LobbyAverageButton&>(*buttons[States::WAITING][1]);
    LobbyExpertButton&   exp = dynamic_cast<LobbyExpertButton&>(*buttons[States::WAITING][2]);

    if((d == Difficulties::BEGINNER) && (difficulty == "1")) {

        beg.set_active(true);
        ave.set_active(false);
        exp.set_active(false);

    }else if((d == Difficulties::AVERAGE) && (difficulty == "1")) {

        beg.set_active(false);
        ave.set_active(true);
        exp.set_active(false);

    }else if((d == Difficulties::EXPERT) && (difficulty == "1")) {

        beg.set_active(false);
        ave.set_active(false);
        exp.set_active(true);

    }
}

void Lobby::change_duration(Durations d, const std::string& duration)
{
    DurationAButton& da = dynamic_cast<DurationAButton&>(*buttons[States::WAITING][3]);
    DurationBButton& db = dynamic_cast<DurationBButton&>(*buttons[States::WAITING][4]);
    DurationCButton& dc = dynamic_cast<DurationCButton&>(*buttons[States::WAITING][5]);

    if((d == Durations::SHORT) && (duration == "1")) {

        da.set_active(true);
        db.set_active(false);
        dc.set_active(false);

    }else if((d == Durations::NORMAL) && (duration == "1")) {

        da.set_active(false);
        db.set_active(true);
        dc.set_active(false);

    }else if((d == Durations::LONG) && (duration == "1")) {

        da.set_active(false);
        db.set_active(false);
        dc.set_active(true);

    }
}

void Lobby::receive_password(const std::string& password_str)
{
    if(TextEdit::to_uppercase(password_str) != text_edits[2].get_text_str()) {

#ifdef __RELEASE__
        std::cout << "[HOST] The client sent a WRONG password." << std::endl;
#endif // __RELEASE__

        connection_status = sf::Socket::NotReady;

        send('A', "0");

        MinesweeperGame::tcp_socket.disconnect();

        return;

    }else {

#ifdef __RELEASE__
        std::cout << "[HOST] The client sent a CORRECT password." << std::endl;
#endif // __RELEASE__

        send('A', "1");

    }

    MinesweeperGame::new_peer_info.port = text_edits[1].get_text_str();

    // Send name
    {
        send('B', TextEdit::to_lowercase(MinesweeperGame::peer_info.name));

#ifdef __RELEASE__
        std::cout << "[HOST] " << (connection_status == sf::Socket::Done ? "Succeeded to" : "Failed to") << " send name \"" << MinesweeperGame::peer_info.name << "\"" << std::endl;
#endif // __RELEASE__
    }

    // Send IP address
    {
        send('C', MinesweeperGame::peer_info.public_ip_address);

#ifdef __RELEASE__
        std::cout << "[HOST] " << (connection_status == sf::Socket::Done ? "Succeeded to" : "Failed to") << " send IP \"" << MinesweeperGame::peer_info.public_ip_address << "\"" << std::endl;
#endif // __RELEASE__
    }

    MinesweeperGame::tcp_socket.setBlocking(false);

    update_ping();
    ping_delay_timer.restart();

    sound.play();
}

void Lobby::receive_password_response(const std::string& response_str)
{
    if(response_str != "1") {

#ifdef __RELEASE__
        std::cout << "[CLIENT] The host DENIED the password." << std::endl;
#endif // __RELEASE__

        current_state     = States::REGISTRATION;

        connection_status = sf::Socket::NotReady;

        panels["W_PASS"].set_active(true);

        MinesweeperGame::tcp_socket.disconnect();

        return;

    }
#ifdef __RELEASE__
    else {

        std::cout << "[CLIENT] The host ACCEPTED the password." << std::endl;

    }
#endif // __RELEASE__

    current_state = States::WAITING;

    MinesweeperGame::peer_info.name = text_edits[0].get_text_str();

    {
        std::string ip_port = text_edits[1].get_text_str();
        std::string port    = ip_port.substr(ip_port.find(':') + 1);

        MinesweeperGame::peer_info.port     = port;
        MinesweeperGame::new_peer_info.port = port;
    }

    ///////////////////////////////////
    // Send name
    {
        send('B', TextEdit::to_lowercase(MinesweeperGame::peer_info.name));

#ifdef __RELEASE__
        std::cout << "[CLIENT] " << (connection_status == sf::Socket::Done ? "Succeeded to" : "Failed to") << " send name \"" << MinesweeperGame::peer_info.name << "\"" << std::endl;
#endif // __RELEASE__
    }

    // Send IP address
    {
        send('C', MinesweeperGame::peer_info.public_ip_address);

#ifdef __RELEASE__
        std::cout << "[CLIENT] " << (connection_status == sf::Socket::Done ? "Succeeded to" : "Failed to") << " send IP \"" << MinesweeperGame::peer_info.public_ip_address << "\"" << std::endl;
#endif // __RELEASE__
    }
    ///////////////////////////////////

    MinesweeperGame::tcp_socket.setBlocking(false);

    update_ping();
    ping_delay_timer.restart();

    sound.play();
}

void Lobby::draw_connecting()
{
    sf::RectangleShape shape(sf::Vector2f(602.f, 182.f));

    shape.setOutlineColor(sf::Color::Black);
    shape.setOutlineThickness(2.f);
    shape.setFillColor(sf::Color(160, 160, 160, 255));
    shape.setPosition(sf::Vector2f(99.f, 194.f));
    MinesweeperGame::window->draw(shape);

    if(connection_status != sf::Socket::Error) {

        connecting_text.setFillColor(sf::Color::White);
        connecting_text.setString("Connecting to:");
        connecting_text.setPosition(sf::Vector2f(314.f, 195.f));
        MinesweeperGame::window->draw(connecting_text);

    }else {

        connecting_text.setFillColor(sf::Color::Red);
        connecting_text.setString("Failed to connect to:");
        sf::FloatRect bounds = connecting_text.getLocalBounds();
        connecting_text.setPosition(sf::Vector2f(std::round(396.f - bounds.width / 2.f), 195.f));
        MinesweeperGame::window->draw(connecting_text);

    }

    connecting_text.setFillColor(sf::Color::Green);
    connecting_text.setString(text_edits[1].get_text_str());
    sf::FloatRect bounds = connecting_text.getLocalBounds();
    connecting_text.setPosition(sf::Vector2f(std::round(396.f - bounds.width / 2.f), 250.f));
    MinesweeperGame::window->draw(connecting_text);
}

void Lobby::draw_waiting()
{
    draw_you();

    //////////////
    select_panels.setTexture(*select_difficulty_panel_texture);
    select_panels.setPosition(sf::Vector2f(58.f, 95.f));
    MinesweeperGame::window->draw(select_panels);

    select_panels.setTexture(*select_duration_panel_texture);
    select_panels.setPosition(sf::Vector2f(399.f, 95.f));
    MinesweeperGame::window->draw(select_panels);
    //////////////

    /* to slightly bright the panels' textures */ {

        sf::RectangleShape shape(sf::Vector2f(683.f, 212.f));

        shape.setFillColor(sf::Color(0, 0, 0, 64));
        shape.setPosition(sf::Vector2f(58.f, 160.f));

        MinesweeperGame::window->draw(shape);

    }

    match_panels.setTexture(*p1_panel);
    match_panels.setPosition(sf::Vector2f(58.f, 160.f));
    match_panels.setColor(sf::Color::White);
    MinesweeperGame::window->draw(match_panels, sf::RenderStates(sf::BlendMode(sf::BlendMode::SrcAlpha, sf::BlendMode::One, sf::BlendMode::Subtract)));

    match_panels.setTexture(*p2_panel);
    match_panels.setPosition(sf::Vector2f(399.f, 160.f));
    match_panels.setColor(connection_status == sf::Socket::Done ? sf::Color::White : sf::Color(128, 128, 128, 128));
    MinesweeperGame::window->draw(match_panels, sf::RenderStates(sf::BlendMode(sf::BlendMode::SrcAlpha, sf::BlendMode::One, sf::BlendMode::Subtract)));

    draw_players_info();
}

void Lobby::draw_you()
{
    you_text.setPosition(listener ? 214.f : 554.f, you_text.getPosition().y);

    MinesweeperGame::window->draw(you_text);

    MinesweeperGame::window->draw(arrow, sf::RenderStates(sf::BlendMode(sf::BlendMode::SrcAlpha, sf::BlendMode::DstAlpha, sf::BlendMode::ReverseSubtract)));
}

void Lobby::draw_players_info()
{
    std::string name, ip, ping, max_ping;

    //// P1
    {
        if(listener) {

            name     = text_edits[0].get_text_str();
            ip       = MinesweeperGame::peer_info.public_ip_address + ':' + text_edits[1].get_text_str();
            ping     = (connection_status == sf::Socket::Done ? std::to_string(MinesweeperGame::peer_info.ping) : "???") + "ms";
            max_ping = (connection_status == sf::Socket::Done ? std::to_string(MinesweeperGame::peer_info.max_ping) : "???") + "ms";

        }else {

            name     = MinesweeperGame::new_peer_info.name;
            ip       = MinesweeperGame::new_peer_info.public_ip_address + ':' + MinesweeperGame::new_peer_info.port;
            ping     = std::to_string(MinesweeperGame::new_peer_info.ping) + "ms";
            max_ping = std::to_string(MinesweeperGame::new_peer_info.max_ping) + "ms";

        }

        draw_player_info_text(

            {name    , sf::Vector2f(240.f, 194.f)},
            {ip      , sf::Vector2f(240.f, 234.f)},
            {ping    , sf::Vector2f(240.f, 274.f)},
            {max_ping, sf::Vector2f(240.f, 314.f)}

        );
    }
    //// P1

    //// P2
    if(connection_status != sf::Socket::Done) {

        players_info_text.setString("Waiting...");
        players_info_text.setPosition(sf::Vector2f(531.f, 246.f));
        MinesweeperGame::window->draw(players_info_text);

    }else {

        if(listener) {

            name     = MinesweeperGame::new_peer_info.name;
            ip       = MinesweeperGame::new_peer_info.public_ip_address + ':' + MinesweeperGame::new_peer_info.port;
            ping     = std::to_string(MinesweeperGame::new_peer_info.ping) + "ms";
            max_ping = std::to_string(MinesweeperGame::new_peer_info.max_ping) + "ms";

        }else {

            name     = text_edits[0].get_text_str();
            ip       = MinesweeperGame::peer_info.public_ip_address + ':' + MinesweeperGame::peer_info.port;
            ping     = (connection_status == sf::Socket::Done ? std::to_string(MinesweeperGame::peer_info.ping) : "???") + "ms";
            max_ping = (connection_status == sf::Socket::Done ? std::to_string(MinesweeperGame::peer_info.max_ping) : "???") + "ms";

        }

        draw_player_info_text(

            {name    , sf::Vector2f(572.f, 202.f)},
            {ip      , sf::Vector2f(572.f, 242.f)},
            {ping    , sf::Vector2f(572.f, 282.f)},
            {max_ping, sf::Vector2f(572.f, 322.f)}

        );

    }
    //// P2
}

void Lobby::draw_player_info_text(const std::pair<std::string, sf::Vector2f>& name, const std::pair<std::string, sf::Vector2f>& ip, const std::pair<std::string, sf::Vector2f>& ping, const std::pair<std::string, sf::Vector2f>& max_ping)
{
    {
        players_info_text.setString("Name: " + name.first);
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(name.second.x - bounds.width / 2.f), name.second.y));
        MinesweeperGame::window->draw(players_info_text);
    }

    {
        players_info_text.setString("IP: " + ip.first);
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(ip.second.x - bounds.width / 2.f), ip.second.y));
        MinesweeperGame::window->draw(players_info_text);
    }

    {
        players_info_text.setString("Ping: " + ping.first);
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(ping.second.x - bounds.width / 2.f), ping.second.y));
        MinesweeperGame::window->draw(players_info_text);
    }

    {
        players_info_text.setString("Max Ping: " + max_ping.first);
        sf::FloatRect bounds = players_info_text.getLocalBounds();
        players_info_text.setPosition(sf::Vector2f(std::round(max_ping.second.x - bounds.width / 2.f), max_ping.second.y));
        MinesweeperGame::window->draw(players_info_text);
    }
}

void Lobby::draw_inactivation_rects()
{
    sf::RectangleShape shape(sf::Vector2f(338.f, 62.f));
    shape.setFillColor(sf::Color(0, 0, 0, 120));

    shape.setPosition(sf::Vector2f(61.f, 98.f));
    MinesweeperGame::window->draw(shape);

    shape.setPosition(sf::Vector2f(402.f, 98.f));
    MinesweeperGame::window->draw(shape);

    shape.setPosition(sf::Vector2f(61.f, 372.f));
    shape.setSize(sf::Vector2f(679.f, 57.f));
    MinesweeperGame::window->draw(shape);
}

void Lobby::draw_panel()
{
    for(auto& panel : panels) {

        panel.second.draw();

    }
}
