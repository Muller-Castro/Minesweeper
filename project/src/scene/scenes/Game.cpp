/****************************************************************************************/
/* Game.cpp                                                                             */
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

#include "scene/scenes/Game.h"

#include <fstream>
#include <sstream>
#include <chrono>
#include <random>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <array>
#include <regex>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Network/Packet.hpp>

#include "../../../../thirdparty/json11/json11.hpp"
#include "tools/EncryptionKey.h"
#include "Encryptions/AES.h"
#include "io/ResourceLoader.h"
#include "tools/Vector2Hash.h"
#include "MinesweeperGame.h"
#ifdef __S_RELEASE__
#include "assets/GameBGFRG.h"
#include "assets/MainMenuButtonHovered.h"
#include "assets/MainMenuButtonPressed.h"
#include "assets/ChickenedOutPanel.h"
#include "assets/AllFieldsOKButtonNHovered.h"
#include "assets/AllFieldsOKButtonHovered.h"
#include "assets/AllFieldsOKButtonDown.h"
#include "assets/BombExplosion.h"
#include "assets/FlagSet.h"
#include "assets/EmptyCell.h"
#include "assets/GridButtonPressed.h"
#include "assets/GridButtonUp.h"
#include "assets/GamePanel.h"
#include "assets/CounterPanel.h"
#include "assets/Clapping.h"
#include "assets/Oooh.h"
#include "assets/Chicken.h"
#include "assets/YourTurn.h"
#include "assets/TurnTimeOut.h"
#include "assets/OnlineGameFinished.h"
#include "assets/Arial.h"
#include "assets/NeonNanoborg.h"
#include "assets/Digital7Mono.h"
#include "assets/GameSoundtrack.h"
#include "assets/Icon1.h"
#include "assets/Icon2.h"
#include "assets/Icon3.h"
#include "assets/Icon4.h"
#include "assets/Icon5.h"
#include "assets/Icon6.h"
#include "assets/Icon7.h"
#include "assets/Icon8.h"
#include "assets/MiniBombSpriteSheet.h"
#include "assets/MiniP1Flag.h"
#include "assets/MiniP2Flag.h"
#include "assets/NotABomb.h"
#include "assets/NotABombP1.h"
#include "assets/NotABombP2.h"
#include "assets/RestartButtonNHovered.h"
#include "assets/RestartButtonHovered.h"
#include "assets/RestartButtonDown.h"
#include "assets/MainMenuButtonNHoveredT.h"
#include "assets/MainMenuButtonHoveredT.h"
#include "assets/MainMenuButtonDownT.h"
#include "assets/OnlineGameMatchPanel.h"
#endif // __S_RELEASE__
#include "components/buttons/RestartButton.h"
#include "components/buttons/MainMenuButton.h"
#include "components/buttons/ChickenedOutOKButton.h"
#include "components/panels/GameOverPanel.h"
#include "components/buttons/GameOverBeginnerButton.h"
#include "components/buttons/GameOverAverageButton.h"
#include "components/buttons/GameOverExpertButton.h"
#include "components/buttons/GameOverDurationAButton.h"
#include "components/buttons/GameOverDurationBButton.h"
#include "components/buttons/GameOverDurationCButton.h"
#include "components/buttons/RetryButton.h"

using namespace Minesweeper;

Game::Game() :
    Network('A', 'B'),
    is_first_click(true),
    is_your_turn(),
    finished(),
    should_draw_tip_text(true),
    retry_counter(),
    duration(),
    grid_width(),
    grid_height(),
    max_bombs(),
    flag_counter(),
    conn_info(),
    score(std::make_pair(0, 0)),
    score_parameters(),
    panels(),
#ifdef __S_RELEASE__
    peer_info_font_data(conn_info.is_online ? get_raw_arial() : decltype(peer_info_font_data){}),
    counter_description_font_data(get_raw_neon_nanoborg()),
    counter_font_data(get_raw_digital7_mono()),
#endif // __S_RELEASE__
    emoji(),
    buttons(),
    grid(),
    cached_grid_button_textures(),
    cached_grid_button_sounds(),
    background_shader(),
    panel_texture(),
    counter_panel_texture(),
    online_match_panel_texture(),
    clapping_sound(),
    oooh_sound(),
    chicken_sound(),
    your_turn_sound(),
    turn_time_out_sound(),
    online_game_finished_sound(),
    mm_btn_pressed_sfx(),
    peer_info_font(),
    counter_description_font(),
    counter_font(),
    soundtrack(),
    timer(),
    bg_shader_timer(),
    flash_timer(),
    last_button_pressed(-1, 0),
    panel_sprite(),
    counter_panel_sprite(),
    online_match_panel_sprite(),
    sound(),
    peer_info_text(),
    counter_description_text(),
    counter_text(),
    tip_text(),
    grid_outline()
{
    is_your_turn = conn_info.is_online ? conn_info.is_host : true;

#ifndef __S_RELEASE__
    background_shader     = ResourceLoader::load<sf::Shader>("assets/shaders/GameBG.frg");

    panel_texture         = ResourceLoader::load<sf::Texture>("assets/textures/GamePanel.png");

    counter_panel_texture = ResourceLoader::load<sf::Texture>("assets/textures/CounterPanel.png");

    if(conn_info.is_online) online_match_panel_texture = ResourceLoader::load<sf::Texture>("assets/textures/OnlineGameMatchPanel.png");

    clapping_sound        = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Clapping.wav");

    oooh_sound            = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Oooh.wav");

    mm_btn_pressed_sfx    = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav");

    if(conn_info.is_online) {

        chicken_sound              = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Chicken.wav");

        your_turn_sound            = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/YourTurn.wav");

        turn_time_out_sound        = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/TurnTimeOut.wav");

        online_game_finished_sound = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/OnlineGameFinished.wav");

        peer_info_font             = ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf");

    }

    counter_description_font = ResourceLoader::load<sf::Font>("assets/fonts/NeonNanoborg.otf");

    counter_font             = ResourceLoader::load<sf::Font>("assets/fonts/Digital7Mono.ttf");

    soundtrack               = ResourceLoader::load<MusicStream>("assets/musics/GameSoundtrack.ogg");

    cached_grid_button_textures["GB_UP"]     = ResourceLoader::load<sf::Texture>("assets/textures/GridButtonUp.png");
    cached_grid_button_textures["EMP_CELL"]  = ResourceLoader::load<sf::Texture>("assets/textures/EmptyCell.png");

    cached_grid_button_textures["P1_FLAG"]   = ResourceLoader::load<sf::Texture>("assets/textures/MiniP1Flag.png");
    cached_grid_button_textures["P2_FLAG"]   = ResourceLoader::load<sf::Texture>("assets/textures/MiniP2Flag.png");
    cached_grid_button_textures["N_A_BOMB"]  = ResourceLoader::load<sf::Texture>("assets/textures/NotABomb.png");

    if(conn_info.is_online) {

        cached_grid_button_textures["N_A_BOMB_P1"] = ResourceLoader::load<sf::Texture>("assets/textures/NotABombP1.png");
        cached_grid_button_textures["N_A_BOMB_P2"] = ResourceLoader::load<sf::Texture>("assets/textures/NotABombP2.png");

    }

    cached_grid_button_textures["ICON_1"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon1.png");
    cached_grid_button_textures["ICON_2"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon2.png");
    cached_grid_button_textures["ICON_3"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon3.png");
    cached_grid_button_textures["ICON_4"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon4.png");
    cached_grid_button_textures["ICON_5"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon5.png");
    cached_grid_button_textures["ICON_6"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon6.png");
    cached_grid_button_textures["ICON_7"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon7.png");
    cached_grid_button_textures["ICON_8"]    = ResourceLoader::load<sf::Texture>("assets/textures/Icon8.png");

    cached_grid_button_textures["M_BOMB_SS"] = ResourceLoader::load<sf::Texture>("assets/textures/MiniBombSpriteSheet.png");

    cached_grid_button_sounds["GB_PR"]       = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/GridButtonPressed.wav");
    cached_grid_button_sounds["BOMB_E"]      = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/BombExplosion.wav");
    cached_grid_button_sounds["FLAG_S"]      = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/FlagSet.wav");
#else
    background_shader     = ResourceLoader::load<sf::Shader>({"GameBGFRG", ""});

    background_shader->loadFromMemory(get_raw_game_bg_frg().second, sf::Shader::Fragment);

    panel_texture         = ResourceLoader::load<sf::Texture>(get_raw_game_panel());

    counter_panel_texture = ResourceLoader::load<sf::Texture>(get_raw_counter_panel());

    if(conn_info.is_online) online_match_panel_texture = ResourceLoader::load<sf::Texture>(get_raw_online_game_match_panel());

    clapping_sound        = ResourceLoader::load<sf::SoundBuffer>(get_raw_clapping());

    oooh_sound            = ResourceLoader::load<sf::SoundBuffer>(get_raw_oooh());

    mm_btn_pressed_sfx    = ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed());

    if(conn_info.is_online) {

        chicken_sound              = ResourceLoader::load<sf::SoundBuffer>(get_raw_chicken());

        your_turn_sound            = ResourceLoader::load<sf::SoundBuffer>(get_raw_your_turn());

        turn_time_out_sound        = ResourceLoader::load<sf::SoundBuffer>(get_raw_turn_time_out());

        online_game_finished_sound = ResourceLoader::load<sf::SoundBuffer>(get_raw_online_game_finished());

        peer_info_font             = ResourceLoader::load<sf::Font>(peer_info_font_data);

    }

    counter_description_font = ResourceLoader::load<sf::Font>(counter_description_font_data);

    counter_font             = ResourceLoader::load<sf::Font>(counter_font_data);

    soundtrack               = ResourceLoader::load<MusicStream>(get_raw_game_soundtrack());

    cached_grid_button_textures["GB_UP"]     = ResourceLoader::load<sf::Texture>(get_raw_grid_button_up());
    cached_grid_button_textures["EMP_CELL"]  = ResourceLoader::load<sf::Texture>(get_raw_empty_cell());

    cached_grid_button_textures["P1_FLAG"]   = ResourceLoader::load<sf::Texture>(get_raw_mini_p1_flag());
    cached_grid_button_textures["P2_FLAG"]   = ResourceLoader::load<sf::Texture>(get_raw_mini_p2_flag());
    cached_grid_button_textures["N_A_BOMB"]  = ResourceLoader::load<sf::Texture>(get_raw_not_a_bomb());

    if(conn_info.is_online) {

        cached_grid_button_textures["N_A_BOMB_P1"] = ResourceLoader::load<sf::Texture>(get_raw_not_a_bomb_p1());
        cached_grid_button_textures["N_A_BOMB_P2"] = ResourceLoader::load<sf::Texture>(get_raw_not_a_bomb_p2());

    }

    cached_grid_button_textures["ICON_1"]    = ResourceLoader::load<sf::Texture>(get_raw_icon1());
    cached_grid_button_textures["ICON_2"]    = ResourceLoader::load<sf::Texture>(get_raw_icon2());
    cached_grid_button_textures["ICON_3"]    = ResourceLoader::load<sf::Texture>(get_raw_icon3());
    cached_grid_button_textures["ICON_4"]    = ResourceLoader::load<sf::Texture>(get_raw_icon4());
    cached_grid_button_textures["ICON_5"]    = ResourceLoader::load<sf::Texture>(get_raw_icon5());
    cached_grid_button_textures["ICON_6"]    = ResourceLoader::load<sf::Texture>(get_raw_icon6());
    cached_grid_button_textures["ICON_7"]    = ResourceLoader::load<sf::Texture>(get_raw_icon7());
    cached_grid_button_textures["ICON_8"]    = ResourceLoader::load<sf::Texture>(get_raw_icon8());

    cached_grid_button_textures["M_BOMB_SS"] = ResourceLoader::load<sf::Texture>(get_raw_mini_bomb_sprite_sheet());

    cached_grid_button_sounds["GB_PR"]       = ResourceLoader::load<sf::SoundBuffer>(get_raw_grid_button_pressed());
    cached_grid_button_sounds["BOMB_E"]      = ResourceLoader::load<sf::SoundBuffer>(get_raw_bomb_explosion());
    cached_grid_button_sounds["FLAG_S"]      = ResourceLoader::load<sf::SoundBuffer>(get_raw_flag_set());
#endif // __S_RELEASE__

    panel_sprite.setTexture(*panel_texture);
    panel_sprite.setPosition(sf::Vector2f(15.f, 19.f));
    counter_panel_sprite.setTexture(*counter_panel_texture);

    if(conn_info.is_online) {

        online_match_panel_sprite.setTexture(*online_match_panel_texture);
        online_match_panel_sprite.setPosition(sf::Vector2f(137.f, 24.f));

        peer_info_text.setFont(*peer_info_font);
        peer_info_text.setOutlineThickness(2.f);

        tip_text.setFont(*peer_info_font);
        tip_text.setFillColor(sf::Color::Yellow);
        tip_text.setCharacterSize(16);
        tip_text.setOutlineColor(sf::Color::Black);
        tip_text.setOutlineThickness(3.f);
        tip_text.setStyle(sf::Text::Bold);

    }

    counter_description_text.setFont(*counter_description_font);
    counter_description_text.setCharacterSize(29);
    counter_description_text.setFillColor(sf::Color(252, 234, 43));
    counter_description_text.setOutlineColor(sf::Color::Black);
    counter_description_text.setOutlineThickness(1.f);

    counter_text.setFont(*counter_font);
//    counter_text.setOutlineColor(sf::Color::Black);
//    counter_text.setOutlineThickness(3.f);
    counter_text.setCharacterSize(48);
    counter_text.setFillColor(sf::Color::Red);
    counter_text.setPosition(sf::Vector2f(0.f, 32.f));

    soundtrack->music.setLoop(true);
    soundtrack->music.play();
    soundtrack->music.setVolume(20.f);

    if(!conn_info.is_online) {

        emoji = std::make_unique<Emoji>(sf::Vector2f(375.f, 33.f));

        buttons.push_back(std::make_unique<RestartButton>(
            *this,
            Button::Enabled::LEFT,
            sf::Vector2f(259.f, 59.f),
            sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
            ResourceLoader::load<sf::Texture>("assets/textures/RestartButtonHovered.png"),
            ResourceLoader::load<sf::Texture>("assets/textures/RestartButtonNHovered.png"),
            ResourceLoader::load<sf::Texture>("assets/textures/RestartButtonDown.png"),
            ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
            mm_btn_pressed_sfx
#else
            ResourceLoader::load<sf::Texture>(get_raw_restart_button_hovered()),
            ResourceLoader::load<sf::Texture>(get_raw_restart_button_n_hovered()),
            ResourceLoader::load<sf::Texture>(get_raw_restart_button_down()),
            ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
            mm_btn_pressed_sfx
#endif // __S_RELEASE__
        ));

        buttons.push_back(std::make_unique<MainMenuButton>(
            Button::Enabled::LEFT,
            sf::Vector2f(543.f, 59.f),
            sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
            ResourceLoader::load<sf::Texture>("assets/textures/MainMenuButtonHovered.png"),
            ResourceLoader::load<sf::Texture>("assets/textures/MainMenuButtonNHovered.png"),
            ResourceLoader::load<sf::Texture>("assets/textures/MainMenuButtonDown.png"),
            ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
            ResourceLoader::load<sf::Texture>(get_raw_main_menu_button_hovered_t()),
            ResourceLoader::load<sf::Texture>(get_raw_main_menu_button_n_hovered_t()),
            ResourceLoader::load<sf::Texture>(get_raw_main_menu_button_down_t()),
            ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__
        ));

    }else {

        panels["$G_OVER"] = std::make_unique<GameOverPanel>(*this);

        panels["C_OUT"]   = std::make_unique<Panel>(

            sf::Vector2f(105.f, 189.f),
            sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
            ResourceLoader::load<sf::Texture>("assets/textures/ChickenedOutPanel.png"),
#else
            ResourceLoader::load<sf::Texture>(get_raw_chickened_out_panel()),
#endif // __S_RELEASE__
            std::vector<std::shared_ptr<Button>>{
                std::make_shared<ChickenedOutOKButton>(

                    Button::Enabled::LEFT,
                    sf::Vector2f(401.f, 312.f),
                    sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                    ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonHovered.png"),
                    ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonNHovered.png"),
                    ResourceLoader::load<sf::Texture>("assets/textures/AllFieldsOKButtonDown.png"),
                    ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
                    ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_hovered()),
                    ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_n_hovered()),
                    ResourceLoader::load<sf::Texture>(get_raw_all_fields_ok_button_down()),
                    ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__

                )
            }

        );

    }

    build_initial_grid();

    if(conn_info.is_online) {

        update_ping();

        if(connection_status != sf::Socket::Done) {

            if(!panels["C_OUT"]->activated()) play_sound(chicken_sound);

            panels["C_OUT"]->set_active(true);

        }

    }
}

Game::~Game() noexcept
{
    MinesweeperGame::tcp_socket.disconnect();

    SceneManager::shared_data["H"].clear();
}

void Game::process_inputs()
{
    if(conn_info.is_online) {

        bool should_return = false;

        for(auto& panel : panels) {

            panel.second->process_inputs();

            if(panel.second->activated()) should_return = true;

        }

        if(should_return || !is_your_turn) return;

    }

    if(emoji) emoji->process_inputs();

    for(auto& button : buttons) button->process_inputs();

    if(!finished) {

        for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

            for(auto& grid_button : row) grid_button->process_inputs();

        }

    }
}

void Game::update(float delta)
{
    background_shader->setUniform("in_time", bg_shader_timer.getElapsedTime().asSeconds());

    if(conn_info.is_online) {

        update_ping();

        if(connection_status != sf::Socket::Done) {

            if(!panels["C_OUT"]->activated()) play_sound(chicken_sound);

            panels["C_OUT"]->set_active(true);

        }

        bool should_return = false;

        for(auto& panel : panels) {

            panel.second->update(delta);

            if(panel.second->activated()) should_return = true;

        }

        // Just to keep animations playing while the panel is displayed
        for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

            for(auto& grid_button : row) {

                grid_button->animations.update(delta);

                if(grid_button->disabled) grid_button->sprite.setColor(grid_button->pressed_color);
                else                      grid_button->sprite.setColor(sf::Color::White);

                if(grid_button->flagged) {

                    grid_button->p1_flag_sprite.setPosition(grid_button->position);
                    grid_button->p2_flag_sprite.setPosition(grid_button->position);

                }

            }

        }
        // Just to keep animations playing while the panel is displayed

        receive_packages();

        if(should_return) return;

    }

    if(emoji) emoji->update(delta);

    for(auto& button : buttons) button->update(delta);

    if(conn_info.is_online && (last_button_pressed.x != -1)) {

        GridButton& last_button_pressed_ref = *grid[last_button_pressed.y][last_button_pressed.x];

        if(!(last_button_pressed_ref.disabled && (last_button_pressed_ref.type == GridButton::Types::BOMB))) last_button_pressed_ref.sprite.setColor(sf::Color(9, 255, 15));

    }

    bool all_non_bombs_disabled = true;
    bool only_flags_left        = conn_info.is_online;

    GridButton* pressed_button  = nullptr;

    for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

        for(auto& grid_button : row) {

            grid_button->update(delta);

            if(conn_info.is_online && (grid_button->state == Button::States::PRESSED)) pressed_button = &(*grid_button);

            if(conn_info.is_online && (grid_button->cell_position != last_button_pressed)) {

                if(grid_button->disabled) grid_button->sprite.setColor(grid_button->pressed_color);
                else                      grid_button->sprite.setColor(sf::Color::White);

            }

            if(finished) continue;

            if((grid_button->type != GridButton::Types::BOMB) && (!grid_button->disabled)) all_non_bombs_disabled = false;

            if(conn_info.is_online && !grid_button->disabled && !grid_button->flagged)     only_flags_left        = false;

        }

    }

    if((all_non_bombs_disabled || only_flags_left) && !finished) {

        if(!conn_info.is_online) save_record();

        for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

            for(auto& grid_button : row) {

                if(grid_button->type == GridButton::Types::BOMB) {

                    if(conn_info.is_online && !grid_button->flagged) {

                        sf::Sprite& flag_sprite = grid_button->is_blue_flag ? grid_button->p1_flag_sprite : grid_button->p2_flag_sprite;

                        flag_sprite.setColor(sf::Color(0, 0, 0));

                    }

                    grid_button->set_flag(true, grid_button->is_blue_flag);

                }

            }

        }

        play_sound(conn_info.is_online ? online_game_finished_sound : clapping_sound);

        if(emoji) emoji->set_face(Emoji::SUNGLASSES);

        if(conn_info.is_online) {

            if(all_non_bombs_disabled) {

                tip_text.setPosition(sf::Vector2f(290.f, 0.f)); // y position deferred to the drawing step

                std::string player;

                if(conn_info.is_host) {

                    // The player who made the last move has already passed the turn at this point, so look at the flipped turn
                    if(!is_your_turn) {

                        player = "P1";

                        score_parameters.first.add_l_s_value();

                        send(true, 'J', "ls");

                    }else {

                        player = "P2";

                    }

                }else {

                    // The player who made the last move has already passed the turn at this point, so look at the flipped turn
                    if(!is_your_turn) {

                        player = "P2";

                        score_parameters.second.add_l_s_value();

                        send(true, 'J', "ls");

                    }else {

                        player = "P1";

                    }

                }

                tip_text.setString(player + " revealed the last square!");

            }else if(only_flags_left) {

                tip_text.setPosition(sf::Vector2f(340.f, 0.f)); // y position deferred to the drawing step

                tip_text.setString("Only flags left!");

            }

        }

        finished = true;

        if(conn_info.is_online) {

            score_parameters.first.calculate();
            score_parameters.second.calculate();

            panels["$G_OVER"]->set_active(true);

        }

        flash_timer.restart();

    }

    if(conn_info.is_online) {

        if(is_your_turn && !finished) {

            std::string duration_str = SceneManager::shared_data["DURATION"];

            if     (duration_str == "S") duration = 5;
            else if(duration_str == "N") duration = 10;
            else if(duration_str == "L") duration = 15;

            duration -= static_cast<int>(timer.getElapsedTime().asSeconds());

            if(duration <= 0) {

                duration = 0;

                if(pressed_button) pressed_button->state = Button::States::NONE;

                is_your_turn = false;

                play_sound(turn_time_out_sound);

                send(true, 'F', "ttimeout");

            }

        }

        receive_packages();

    }
}

void Game::draw()
{
    {
        sf::RectangleShape background_shape(sf::Vector2f(800.f, 600.f));

        MinesweeperGame::window->draw(background_shape, background_shader.get());
    }

    MinesweeperGame::window->draw(panel_sprite);

    if(conn_info.is_online) MinesweeperGame::window->draw(online_match_panel_sprite);

    if(emoji) emoji->draw();

    if(conn_info.is_online) {

        draw_peer_infos();

        draw_score();

    }

    draw_counters();

    for(auto& button : buttons) MinesweeperGame::window->draw(*button);

    MinesweeperGame::window->draw(grid_outline);

    for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

        for(auto& grid_button : row) MinesweeperGame::window->draw(*grid_button);

    }

    if(conn_info.is_online && should_draw_tip_text) draw_tip_text();

    if(finished && (flash_timer.getElapsedTime().asSeconds() <= 1.f)) draw_flashing_rect();

    if(conn_info.is_online) draw_panel();
}

void Game::receive_packages()
{
    sf::Packet p;

    while(MinesweeperGame::tcp_socket.receive(p) == sf::Socket::Done) {

        std::string received_data;

        p >> received_data;

        //////////////////////////////////////////
        size_t idx;

        if((idx = received_data.find('A')) != std::string::npos) receive_ping(retrieve_data<'A'>(idx, received_data));
        if((idx = received_data.find('B')) != std::string::npos) receive_max_ping(retrieve_data<'B'>(idx, received_data));
        if((idx = received_data.find('C')) != std::string::npos) receive_flag(retrieve_data<'C'>(idx, received_data));
        if((idx = received_data.find('D')) != std::string::npos) setup_grid(retrieve_data<'D'>(idx, received_data));
        if((idx = received_data.find('E')) != std::string::npos) receive_grid_button_press(retrieve_data<'E'>(idx, received_data));
        if((idx = received_data.find('F')) != std::string::npos) receive_turn_time_out(retrieve_data<'F'>(idx, received_data));
        if((idx = received_data.find('G')) != std::string::npos) receive_new_difficulty(retrieve_data<'G'>(idx, received_data));
        if((idx = received_data.find('H')) != std::string::npos) receive_new_duration(retrieve_data<'H'>(idx, received_data));
        if((idx = received_data.find('I')) != std::string::npos) receive_request_to_retry(retrieve_data<'I'>(idx, received_data));
        if((idx = received_data.find('J')) != std::string::npos) receive_score_parameter(retrieve_data<'J'>(idx, received_data));
        //////////////////////////////////////////

        p.clear();

    }
}

void Game::receive_flag(const std::string& cell_pos)
{
//    std::cout << cell_pos << std::endl;

    if(!std::regex_match(cell_pos, std::regex("^[0-9]+_[0-9]+$"))) return;

    GridButton& button = get_grid_button(cell_pos);

    last_button_pressed = button.cell_position;

    bool flag_flip = !button.flagged;

    button.set_flag(flag_flip, flag_flip ? !conn_info.is_host : conn_info.is_host);

    SceneManager::call_deferred([&]() {

        is_your_turn = true;

        if(sound.getStatus() != sf::Sound::Playing) play_sound(your_turn_sound);

        timer.restart();

    });
}

void Game::setup_grid(const std::string& grid_data)
{
//    std::cout << grid_data << std::endl;

    if(grid_data.find('{') == std::string::npos) return;

    is_first_click = false;

    std::string err_msg;

    json11::Json json = json11::Json::parse(grid_data, err_msg);

    if(!err_msg.empty()) throw std::runtime_error(err_msg);

    const auto& items = json.object_items();

    for(const auto& item : items) {

        unsigned y = 0, x = 0;

        GridButton::Types button_type = GridButton::Types::NEUTRAL;

        std::shared_ptr<sf::Texture> icon_texture;

        const std::string         bty  = item.second["bty"].string_value();
        const bool                dis  = static_cast<bool>(item.second["dis"] .int_value());
        const bool                fl   = static_cast<bool>(item.second["fl"]  .int_value());
        const bool                b_fl = static_cast<bool>(item.second["b_fl"].int_value());
        const int                 itex = item.second["itex"].int_value();
        const json11::Json::array pos  = item.second["pos"].array_items();

        {
            size_t underscore_idx = item.first.find('_');

            if(underscore_idx == std::string::npos) throw std::runtime_error("Invalid JSON key");

            y = std::stoul(item.first.substr(0, underscore_idx));
            x = std::stoul(item.first.substr(underscore_idx + 1));
        }

        if(bty == "nr")      button_type = GridButton::Types::NUMBER;
        else if(bty == "bb") button_type = GridButton::Types::BOMB;

        if(dis) last_button_pressed = sf::Vector2i(x, y);

        switch(itex) {

            case 0: {} break;
            case 1: { icon_texture = cached_grid_button_textures["ICON_1"];    } break;
            case 2: { icon_texture = cached_grid_button_textures["ICON_2"];    } break;
            case 3: { icon_texture = cached_grid_button_textures["ICON_3"];    } break;
            case 4: { icon_texture = cached_grid_button_textures["ICON_4"];    } break;
            case 5: { icon_texture = cached_grid_button_textures["ICON_5"];    } break;
            case 6: { icon_texture = cached_grid_button_textures["ICON_6"];    } break;
            case 7: { icon_texture = cached_grid_button_textures["ICON_7"];    } break;
            case 8: { icon_texture = cached_grid_button_textures["ICON_8"];    } break;
            case 9: { icon_texture = cached_grid_button_textures["M_BOMB_SS"]; } break;

            default: { throw std::runtime_error("Invalid itex"); };

        }

        grid[y][x] = std::make_unique<GridButton>(
            *this,
            button_type,
            dis,
            fl,
            fl ? b_fl : conn_info.is_host,
            sf::Vector2i(x, y),
            Button::Enabled::LEFT,
            sf::Vector2f(pos[0].int_value(), pos[1].int_value()),
            sf::Vector2f(1.f, 1.f),
            cached_grid_button_textures["GB_UP"],
            cached_grid_button_textures["GB_UP"],
            cached_grid_button_textures["EMP_CELL"],
            icon_texture,
            cached_grid_button_textures["P1_FLAG"],
            cached_grid_button_textures["P2_FLAG"],
            cached_grid_button_textures["N_A_BOMB"],
            cached_grid_button_sounds["FLAG_S"],
            std::shared_ptr<sf::SoundBuffer>(),
            (itex == 9) ? cached_grid_button_sounds["BOMB_E"] : cached_grid_button_sounds["GB_PR"]
        );

    }

    SceneManager::call_deferred([&]() {

        is_your_turn = true;

        if(sound.getStatus() != sf::Sound::Playing) play_sound(your_turn_sound);

        timer.restart();

    });
}

void Game::receive_grid_button_press(const std::string& cell_pos)
{
//    std::cout << cell_pos << std::endl;

    if(!std::regex_match(cell_pos, std::regex("^[0-9]+_[0-9]+$"))) return;

    GridButton& button = get_grid_button(cell_pos);

    last_button_pressed = button.cell_position;

    button.evaluate_button();

    if(finished) play_sound(cached_grid_button_sounds["BOMB_E"], 20.f);

    SceneManager::call_deferred([&]() {

        is_your_turn = true;

        if(sound.getStatus() != sf::Sound::Playing) play_sound(your_turn_sound);

        timer.restart();

    });
}

void Game::receive_turn_time_out(const std::string& s)
{
    if(s != "ttimeout") return;

    SceneManager::call_deferred([&]() {

        is_your_turn = true;

        if(sound.getStatus() != sf::Sound::Playing) play_sound(your_turn_sound);

        timer.restart();

    });
}

void Game::receive_new_difficulty(const std::string& level)
{
    if(!std::regex_match(level, std::regex("^lvl[0-2]$"))) return;

    if(level == "lvl0")      dynamic_cast<GameOverBeginnerButton&>(*panels["$G_OVER"]->get_buttons()[0]).evaluate_button();
    else if(level == "lvl1") dynamic_cast<GameOverAverageButton&>(*panels["$G_OVER"]->get_buttons()[1]).evaluate_button();
    else if(level == "lvl2") dynamic_cast<GameOverExpertButton&>(*panels["$G_OVER"]->get_buttons()[2]).evaluate_button();

    play_sound(mm_btn_pressed_sfx);
}

void Game::receive_new_duration(const std::string& duration_str)
{
    if(!std::regex_match(duration_str, std::regex("^dur[0-2]$"))) return;

    if(duration_str == "dur0")      dynamic_cast<GameOverDurationAButton&>(*panels["$G_OVER"]->get_buttons()[3]).evaluate_button();
    else if(duration_str == "dur1") dynamic_cast<GameOverDurationBButton&>(*panels["$G_OVER"]->get_buttons()[4]).evaluate_button();
    else if(duration_str == "dur2") dynamic_cast<GameOverDurationCButton&>(*panels["$G_OVER"]->get_buttons()[5]).evaluate_button();

    play_sound(mm_btn_pressed_sfx);
}

void Game::receive_request_to_retry(const std::string& retry_str)
{
    if(retry_str != "r2retry") return;

    ++retry_counter;

    if(retry_counter == 2) {

        SceneManager::call_deferred([&]() {

            restart();

        });

    }

    play_sound(mm_btn_pressed_sfx);

    dynamic_cast<RetryButton&>(*panels["$G_OVER"]->get_buttons()[6]).sprite.setColor(sf::Color(153, 255, 153));
}

void Game::receive_score_parameter(const std::string& score_parameter)
{
    if(conn_info.is_host) {

        if     (score_parameter == "fb") score_parameters.second.add_f_b_value();
        else if(score_parameter == "ls") score_parameters.second.add_l_s_value();
        else if(score_parameter == "mf") score_parameters.second.sub_m_f_value();
        else if(score_parameter == "e")  score_parameters.second.sub_e_value();

    }else {

        if     (score_parameter == "fb") score_parameters.first.add_f_b_value();
        else if(score_parameter == "ls") score_parameters.first.add_l_s_value();
        else if(score_parameter == "mf") score_parameters.first.sub_m_f_value();
        else if(score_parameter == "e")  score_parameters.first.sub_e_value();

    }
}

GridButton& Game::get_grid_button(const std::string& cell_pos)
{
    size_t underscore_idx = cell_pos.find('_');

    if(underscore_idx == std::string::npos) throw std::runtime_error("Invalid cell position");

    unsigned y = std::stoul(cell_pos.substr(0, underscore_idx));
    unsigned x = std::stoul(cell_pos.substr(underscore_idx + 1));

    return *grid[y][x];
}

void Game::play_sound(const std::shared_ptr<sf::SoundBuffer>& sound_buffer, float volume)
{
    sound.stop();
    sound.setBuffer(*sound_buffer);
    sound.setVolume(volume);
    sound.play();
}

void Game::restart()
{
    if(emoji) emoji->restart();

    is_first_click       = true;
    finished             = false;
    should_draw_tip_text = true;
    flag_counter   = 0;
    grid.clear();
    flash_timer.restart();

    if(conn_info.is_online) {

        is_your_turn  = conn_info.is_host;

        retry_counter = 0;

        duration      = 0;

        if     (score_parameters.first.total  > score_parameters.second.total) ++score.first;
        else if(score_parameters.second.total > score_parameters.first.total)  ++score.second;

        score_parameters.first.reset();
        score_parameters.second.reset();

        {
            GameOverPanel& go_ref = dynamic_cast<GameOverPanel&>(*panels["$G_OVER"]);

            go_ref.set_active(false);

            RetryButton& retry_ref = dynamic_cast<RetryButton&>(*go_ref.get_buttons()[6]);

            retry_ref.set_current_texture(Button::N_HOVERED);

            retry_ref.sprite.setColor(sf::Color::White);
        }

        timer.restart();

        last_button_pressed = sf::Vector2i(-1, 0);

    }

    build_initial_grid();
}

void Game::save_record() const
{
    std::string difficulty_level = SceneManager::shared_data["DIFFICULTY"];

    int timer_as_seconds = static_cast<int>(timer.getElapsedTime().asSeconds());

    int beg_record_value = SceneManager::shared_data["BEG_R"] == "NaN" ? -1 : std::stoi(SceneManager::shared_data["BEG_R"]);
    int ave_record_value = SceneManager::shared_data["AVE_R"] == "NaN" ? -1 : std::stoi(SceneManager::shared_data["AVE_R"]);
    int exp_record_value = SceneManager::shared_data["EXP_R"] == "NaN" ? -1 : std::stoi(SceneManager::shared_data["EXP_R"]);

    int value = 0;

    if     (difficulty_level == "0") value = beg_record_value;
    else if(difficulty_level == "1") value = ave_record_value;
    else if(difficulty_level == "2") value = exp_record_value;

    if((timer_as_seconds < value) || (value == -1)) {

        beg_record_value = ((difficulty_level == "0") ? timer_as_seconds : beg_record_value);
        ave_record_value = ((difficulty_level == "1") ? timer_as_seconds : ave_record_value);
        exp_record_value = ((difficulty_level == "2") ? timer_as_seconds : exp_record_value);

        generate_encrypted_file({
            "B" + static_cast<std::ostringstream&>(std::ostringstream() << std::setw(3) << std::setfill('0') << ((beg_record_value) == -1 ? "NaN" : std::to_string(beg_record_value))).str(),
            "A" + static_cast<std::ostringstream&>(std::ostringstream() << std::setw(3) << std::setfill('0') << ((ave_record_value) == -1 ? "NaN" : std::to_string(ave_record_value))).str(),
            "E" + static_cast<std::ostringstream&>(std::ostringstream() << std::setw(3) << std::setfill('0') << ((exp_record_value) == -1 ? "NaN" : std::to_string(exp_record_value))).str()
        });

    }
}

void Game::generate_encrypted_file(std::array<std::string, 3>&& record_values) const
{
    std::string junk_data = "junkdata";
    std::string content;

    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());

    AES aes(SAVE_FILE_KEY);

    for(int l = 0; l < 30; ++l) {

        for(int c = 0; c < 4; ++c) {

            if((l == 14) && (c == 1)) {

                std::string records_string = "RCD:";

                std::shuffle(record_values.begin(), record_values.end(), generator);

                for(const std::string& value : record_values) records_string += value;

                content += aes.encrypt(records_string);

            }

            std::string buffer;

            for(int i = 0; i < 2; ++i) {

                std::shuffle(junk_data.begin(), junk_data.end(), generator);
                buffer += junk_data;

            }

            content += aes.encrypt(buffer);

        }

    }

    std::ofstream output_file(
#ifdef __DEBUG__
        std::string("bin/Debug/") + SAVE_FILE_NAME,
#else
        SAVE_FILE_NAME,
#endif // __DEBUG__
        std::ios_base::out | std::ios_base::trunc | std::ios_base::binary
    );

    output_file << content;
    output_file.close();
}

void Game::draw_peer_infos()
{
    peer_info_text.setOutlineColor(sf::Color::Black);
    peer_info_text.setCharacterSize(16);
    peer_info_text.setFillColor(sf::Color::White);

    // Left
    {
        const PeerInfo& peer_info = conn_info.is_host ? MinesweeperGame::peer_info : MinesweeperGame::new_peer_info;

        // Name
        {
            peer_info_text.setString(peer_info.name);
            peer_info_text.setPosition(sf::Vector2f(std::round(250.f - peer_info_text.getLocalBounds().width / 2.f), 32.f));

            MinesweeperGame::window->draw(peer_info_text);
        }

        // Ping
        {
            peer_info_text.setString("Ping: " + std::to_string(peer_info.ping > 999 ? 999 : peer_info.ping) + "ms");
            peer_info_text.setPosition(sf::Vector2f(144.f, 65.f));

            MinesweeperGame::window->draw(peer_info_text);
        }

        // Max Ping
        {
            peer_info_text.setString("Max: " + std::to_string(peer_info.max_ping > 999 ? 999 : peer_info.max_ping) + "ms");
            peer_info_text.setPosition(sf::Vector2f(266.f, 65.f));

            MinesweeperGame::window->draw(peer_info_text);
        }

    }

    // Right
    {
        const PeerInfo& peer_info = !conn_info.is_host ? MinesweeperGame::peer_info : MinesweeperGame::new_peer_info;

        // Name
        {
            peer_info_text.setString(peer_info.name);
            peer_info_text.setPosition(sf::Vector2f(std::round(554.f - peer_info_text.getLocalBounds().width / 2.f), 32.f));

            MinesweeperGame::window->draw(peer_info_text);
        }

        // Ping
        {
            peer_info_text.setString("Ping: " + std::to_string(peer_info.ping > 999 ? 999 : peer_info.ping) + "ms");
            peer_info_text.setPosition(sf::Vector2f(448.f, 65.f));

            MinesweeperGame::window->draw(peer_info_text);
        }

        // Max Ping
        {
            peer_info_text.setString("Max: " + std::to_string(peer_info.max_ping > 999 ? 999 : peer_info.max_ping) + "ms");
            peer_info_text.setPosition(sf::Vector2f(570.f, 65.f));

            MinesweeperGame::window->draw(peer_info_text);
        }

    }
}

void Game::draw_score()
{
    peer_info_text.setOutlineColor(sf::Color(255, 153, 255));
    peer_info_text.setCharacterSize(18);
    peer_info_text.setFillColor(sf::Color::Black);

    // Left
    {
        peer_info_text.setString(std::to_string(score.first));
        peer_info_text.setPosition(sf::Vector2f(std::round(380.f - peer_info_text.getLocalBounds().width / 2.f), 40.f));

        MinesweeperGame::window->draw(peer_info_text);
    }

    // Right
    {
        peer_info_text.setString(std::to_string(score.second));
        peer_info_text.setPosition(sf::Vector2f(std::round(423.f - peer_info_text.getLocalBounds().width / 2.f), 40.f));

        MinesweeperGame::window->draw(peer_info_text);
    }
}

void Game::draw_counters()
{
    counter_description_text.setString("FLAGS");
    counter_description_text.setPosition(sf::Vector2f(52.f, 9.f));
    MinesweeperGame::window->draw(counter_description_text);

    counter_description_text.setString("TIMER");
    counter_description_text.setPosition(sf::Vector2f(698.f, 9.f));
    MinesweeperGame::window->draw(counter_description_text);

    counter_panel_sprite.setPosition(sf::Vector2f(32.f, 39.f));
    MinesweeperGame::window->draw(counter_panel_sprite);
    counter_panel_sprite.setPosition(sf::Vector2f(676.f, 39.f));
    MinesweeperGame::window->draw(counter_panel_sprite);

    float last_timer_x_position = counter_text.getPosition().x;
    std::string last_timer_str  = counter_text.getString();

    // Flags
    {
        std::string flag_counter_str = std::to_string(flag_counter);
        size_t flag_counter_length   = flag_counter_str.length();

        float x_pos = flag_counter_length == 3 ? 46.f : (flag_counter_length == 2) ? 68.f : 90.f;

        counter_text.setPosition(x_pos, counter_text.getPosition().y);
        counter_text.setString(flag_counter_str);
        MinesweeperGame::window->draw(counter_text);
    }
    // Flags

    // Timer
    if((conn_info.is_online && is_your_turn) || (!conn_info.is_online && !is_first_click)) {

        int timer_as_seconds = conn_info.is_online ? duration : static_cast<int>(timer.getElapsedTime().asSeconds());

        if(!finished && timer_as_seconds <= 999) {

            std::string timer_str = std::to_string(timer_as_seconds);
            size_t timer_length   = timer_str.length();

            float x_pos = timer_length == 3 ? 690.f : (timer_length == 2) ? 712.f : 734.f;

            counter_text.setPosition(x_pos, counter_text.getPosition().y);
            counter_text.setString(timer_str);

        }else {

            counter_text.setPosition(last_timer_x_position, counter_text.getPosition().y);
            counter_text.setString(last_timer_str);

        }

        MinesweeperGame::window->draw(counter_text);

    }
    // Timer
}

void Game::draw_tip_text()
{
    std::string difficulty = SceneManager::shared_data["DIFFICULTY"];

    float text_y = 0.f;

    if(difficulty == "0") {

        text_y = 156.f;

    }else if((difficulty == "1") || (difficulty == "2")) {

        text_y = 105.f;

    }

    tip_text.setPosition(sf::Vector2f(tip_text.getPosition().x, text_y));

    if(!finished) {

        tip_text.setPosition(sf::Vector2f(is_your_turn ? 365.f : 300.f, tip_text.getPosition().y));

        tip_text.setString(is_your_turn ? "Your turn!" : "Your opponent is playing ...");

    }

    MinesweeperGame::window->draw(tip_text);

    if(is_your_turn || finished) return;

    sf::Vector2f dark_rect_pos;
    sf::Vector2f dark_rect_size;

    sf::RectangleShape dark_rect;

    dark_rect.setFillColor(sf::Color(0, 0, 0, 90));

    if(difficulty == "0") {

        dark_rect_pos  = sf::Vector2f(239.f, 185.f);
        dark_rect_size = sf::Vector2f(320.f, 320.f);

    }else if(difficulty == "1") {

        dark_rect_pos  = sf::Vector2f(240.f, 135.f);
        dark_rect_size = sf::Vector2f(320.f, 460.f);

    }else if(difficulty == "2") {

        dark_rect_pos  = sf::Vector2f(20.f, 135.f);
        dark_rect_size = sf::Vector2f(760.f, 460.f);

    }

    dark_rect.setPosition(dark_rect_pos);
    dark_rect.setSize(dark_rect_size);

    MinesweeperGame::window->draw(dark_rect);
}

void Game::draw_flashing_rect()
{
    std::string difficulty = SceneManager::shared_data["DIFFICULTY"];

    sf::Vector2f rect_pos;
    sf::Vector2f rect_size;

    sf::RectangleShape rect;

    rect.setFillColor((flash_timer.getElapsedTime().asMilliseconds() / 4) % 2 == 0 ? sf::Color(255, 255, 255, 0) : sf::Color(255, 255, 255, 64));

    if(difficulty == "0") {

        rect_pos  = sf::Vector2f(239.f, 185.f);
        rect_size = sf::Vector2f(320.f, 320.f);

    }else if(difficulty == "1") {

        rect_pos  = sf::Vector2f(240.f, conn_info.is_online ? 135.f : 116.f);
        rect_size = sf::Vector2f(320.f, 460.f);

    }else if(difficulty == "2") {

        rect_pos  = sf::Vector2f(20.f, conn_info.is_online ? 135.f : 116.f);
        rect_size = sf::Vector2f(760.f, 460.f);

    }

    rect.setPosition(rect_pos);
    rect.setSize(rect_size);

    MinesweeperGame::window->draw(rect);
}

void Game::draw_panel()
{
    for(auto& panel : panels) {

        panel.second->draw();

    }
}

void Game::build_initial_grid()
{
    std::string difficulty_level = SceneManager::shared_data["DIFFICULTY"];

    if(difficulty_level == "0") {

        grid_width = grid_height = 16;
        max_bombs = 31;

    }else if(difficulty_level == "1") {

        grid_width  = 16;
        grid_height = 23;
        max_bombs = 55;

    }else if(difficulty_level == "2") {

        grid_width  = 38;
        grid_height = 23;
        max_bombs = 175; // 186

    }

    flag_counter = max_bombs;

    // When you are done fixing the window resize, change these calculations from constant to dynamic
    float grid_x = 800 / 2 - grid_width * 10 + 10;
    float grid_y = (92 + 508 / 2) - grid_height * 10 + 10;

    if(conn_info.is_online && ((difficulty_level == "1") || (difficulty_level == "2"))) grid_y += 19.f;

    grid.resize(grid_height);

    for(int y = 0; y < grid_height; ++y) {

        grid[y].resize(grid_width);

        for(int x = 0; x < grid_width; ++x) {

            grid[y][x] = std::make_unique<GridButton>(
                *this,
                GridButton::Types::NEUTRAL,
                false,
                false,
                conn_info.is_online ? conn_info.is_host : true,
                sf::Vector2i(x, y),
                Button::Enabled::LEFT,
                sf::Vector2f(x * 20.f + grid_x, y * 20.f + grid_y),
                sf::Vector2f(1.f, 1.f),
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["EMP_CELL"],
                std::shared_ptr<sf::Texture>(),
                cached_grid_button_textures["P1_FLAG"],
                cached_grid_button_textures["P2_FLAG"],
                cached_grid_button_textures["N_A_BOMB"],
                cached_grid_button_sounds["FLAG_S"],
                std::shared_ptr<sf::SoundBuffer>(),
                cached_grid_button_sounds["GB_PR"]
            );

        }

    }

    grid_outline.setPosition(sf::Vector2f{grid_x - 15.f, grid_y - 15.f});
    grid_outline.setSize(sf::Vector2f{20.f * grid_width + 10.f, 20.f * grid_height + 10.f});
    grid_outline.setFillColor(sf::Color::Black);
}

void Game::build_grid(sf::Vector2i first_disabled_cell_position)
{
    std::unordered_set<sf::Vector2i> bomb_positions = create_bomb_positions(first_disabled_cell_position);

    // When you are done fixing the window resize, change these calculations from constant to dynamic
    float grid_x = 800 / 2 - grid_width * 10 + 10;
    float grid_y = (92 + 508 / 2) - grid_height * 10 + 10;

    std::string difficulty_level = SceneManager::shared_data["DIFFICULTY"];

    if(conn_info.is_online && ((difficulty_level == "1") || (difficulty_level == "2"))) grid_y += 19.f;

    json11::Json::object data;

    for(int y = 0; y < grid_height; ++y) {

        for(int x = 0; x < grid_width; ++x) {

            bool is_bomb = bomb_positions.find(sf::Vector2i(x, y)) != bomb_positions.end();

            GridButton::Types button_type = GridButton::Types::BOMB;

            std::pair<unsigned, std::shared_ptr<sf::Texture>> icon_data;

            icon_data.first = 9;

            if(!is_bomb) {

                unsigned adjacent_bomb_count = parse_adjacent_cells(x, y, bomb_positions);

                if(!adjacent_bomb_count) {

                    button_type     = GridButton::Types::NEUTRAL;

                    icon_data.first = 0;

                }else {

                    button_type     = GridButton::Types::NUMBER;

                    icon_data.first = adjacent_bomb_count;

                    switch(adjacent_bomb_count) {

                        case 1: { icon_data.second = cached_grid_button_textures["ICON_1"]; } break;
                        case 2: { icon_data.second = cached_grid_button_textures["ICON_2"]; } break;
                        case 3: { icon_data.second = cached_grid_button_textures["ICON_3"]; } break;
                        case 4: { icon_data.second = cached_grid_button_textures["ICON_4"]; } break;
                        case 5: { icon_data.second = cached_grid_button_textures["ICON_5"]; } break;
                        case 6: { icon_data.second = cached_grid_button_textures["ICON_6"]; } break;
                        case 7: { icon_data.second = cached_grid_button_textures["ICON_7"]; } break;
                        case 8: { icon_data.second = cached_grid_button_textures["ICON_8"]; } break;

                        default: { throw std::runtime_error("Adjacent bombs > 8 ... This shouldn't be possible..."); };

                    }

                }

            }else {

                icon_data.second = cached_grid_button_textures["M_BOMB_SS"];

            }

            const bool is_first_disabled_cell = (sf::Vector2i(x, y) == first_disabled_cell_position);

            const sf::Vector2f position(x * 20.f + grid_x, y * 20.f + grid_y);

            if(conn_info.is_online) {

                data.try_emplace(std::to_string(y) + "_" + std::to_string(x), json11::Json::object({

                        {"bty", [=](){

                            switch(button_type) {

                                case GridButton::Types::NEUTRAL: return "nt";
                                case GridButton::Types::NUMBER:  return "nr";
                                case GridButton::Types::BOMB:    return "bb";
                                default:                         throw std::runtime_error("Invalid button type");

                            }

                        }()},
                        {"dis" , static_cast<int>(is_first_disabled_cell)},
                        {"fl"  , static_cast<int>(grid[y][x]->flagged)},
                        {"b_fl", static_cast<int>(grid[y][x]->is_blue_flag)},
                        {"pos" , json11::Json::array{position.x, position.y}},
                        {"itex", static_cast<int>(icon_data.first)}

                   })
               );

            }

            grid[y][x] = std::make_unique<GridButton>(
                *this,
                button_type,
                is_first_disabled_cell,
                grid[y][x]->flagged,
                grid[y][x]->is_blue_flag,
                sf::Vector2i(x, y),
                Button::Enabled::LEFT,
                position,
                sf::Vector2f(1.f, 1.f),
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["EMP_CELL"],
                icon_data.second,
                cached_grid_button_textures["P1_FLAG"],
                cached_grid_button_textures["P2_FLAG"],
                cached_grid_button_textures["N_A_BOMB"],
                cached_grid_button_sounds["FLAG_S"],
                std::shared_ptr<sf::SoundBuffer>(),
                is_bomb ? cached_grid_button_sounds["BOMB_E"] : cached_grid_button_sounds["GB_PR"]
            );

        }

    }

    if(conn_info.is_online) {

        std::string j_dump = json11::Json(data).dump();

        j_dump.erase(std::remove(j_dump.begin(), j_dump.end(), ' '), j_dump.end());

//        std::cout << j_dump << std::endl;

        send(true, 'D', j_dump);

    }

    if(!conn_info.is_online) timer.restart();
}

std::unordered_set<sf::Vector2i> Game::create_bomb_positions(const sf::Vector2i& first_disabled_cell_position) const
{
    std::unordered_set<sf::Vector2i> result;

    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> x_distribution(0, grid_width - 1), y_distribution(0, grid_height - 1);

    for(int i = 0; i < max_bombs; ++i) {

        std::pair<std::unordered_set<sf::Vector2i>::iterator, bool> new_entry;

        int new_x = x_distribution(generator);
        int new_y = y_distribution(generator);

        while(!new_entry.second) {

            if(sf::Vector2i(new_x, new_y) != first_disabled_cell_position) new_entry = result.emplace(new_x, new_y);

            if(new_x >= (grid_width - 1)) {

                new_x = 0;
                ++new_y;

                if(new_y >= (grid_height - 1)) new_y = 0;

            }else {

                ++new_x;

            }

        }

    }

    return result;
}

unsigned Game::parse_adjacent_cells(int x, int y, const std::unordered_set<sf::Vector2i>& bomb_positions) const noexcept
{
    unsigned result = 0;

    for(int y_parse = y - 1; y_parse != (y + 2); ++y_parse) {

        for(int x_parse = x - 1; x_parse != (x + 2); ++x_parse) {

            if((x_parse == x) && (y_parse == y)) continue;

            if(bomb_positions.find(sf::Vector2i(x_parse, y_parse)) != bomb_positions.end()) ++result;

        }

    }

    return result;
}
