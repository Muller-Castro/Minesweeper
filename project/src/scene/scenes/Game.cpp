/****************************************************************************************/
/* Game.cpp                                                                             */
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

#include "scene/scenes/Game.h"

#include <fstream>
#include <sstream>
#include <chrono>
#include <random>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <array>

#include <SFML/Graphics/RenderWindow.hpp>

#include "tools/EncryptionKey.h"
#include "Encryptions/AES.h"
#include "io/ResourceLoader.h"
#include "tools/Vector2Hash.h"
#include "scene/SceneManager.h"
#include "MinesweeperGame.h"
#ifdef __S_RELEASE__
#include "assets/MainMenuButtonHovered.h"
#include "assets/MainMenuButtonPressed.h"
#include "assets/BombExplosion.h"
#include "assets/FlagSet.h"
#include "assets/EmptyCell.h"
#include "assets/GridButtonPressed.h"
#include "assets/GridButtonUp.h"
#include "assets/GamePanel.h"
#include "assets/CounterPanel.h"
#include "assets/Clapping.h"
#include "assets/Oooh.h"
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
#include "assets/RestartButtonNHovered.h"
#include "assets/RestartButtonHovered.h"
#include "assets/RestartButtonDown.h"
#include "assets/MainMenuButtonNHoveredT.h"
#include "assets/MainMenuButtonHoveredT.h"
#include "assets/MainMenuButtonDownT.h"
#endif // __S_RELEASE__
#include "components/buttons/RestartButton.h"
#include "components/buttons/MainMenuButton.h"

using namespace Minesweeper;

Game::Game() :
    is_first_click(true),
    finished(),
    grid_width(),
    grid_height(),
    max_bombs(),
    flag_counter(),
#ifdef __S_RELEASE__
    counter_font_data(get_raw_digital7_mono()),
#endif // __S_RELEASE__
    buttons(),
    grid(),
    cached_grid_button_textures(),
    cached_grid_button_sounds(),
    panel_texture(),
    counter_panel_texture(),
    clapping_sound(),
    oooh_sound(),
    counter_font(),
    soundtrack(),
    timer(),
    panel_sprite(),
    counter_panel_sprite(),
    sound(),
    counter_text(),
    grid_outline()
{
#ifndef __S_RELEASE__
    panel_texture         = ResourceLoader::load<sf::Texture>("assets/textures/GamePanel.png");

    counter_panel_texture = ResourceLoader::load<sf::Texture>("assets/textures/CounterPanel.png");

    clapping_sound        = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Clapping.wav");

    oooh_sound            = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Oooh.wav");

    counter_font          = ResourceLoader::load<sf::Font>("assets/fonts/Digital7Mono.ttf");

    soundtrack            = ResourceLoader::load<MusicStream>("assets/musics/GameSoundtrack.ogg");

    cached_grid_button_textures["GB_UP"]     = ResourceLoader::load<sf::Texture>("assets/textures/GridButtonUp.png");
    cached_grid_button_textures["EMP_CELL"]  = ResourceLoader::load<sf::Texture>("assets/textures/EmptyCell.png");

    cached_grid_button_textures["P1_FLAG"]   = ResourceLoader::load<sf::Texture>("assets/textures/MiniP1Flag.png");
    cached_grid_button_textures["P2_FLAG"]   = ResourceLoader::load<sf::Texture>("assets/textures/MiniP2Flag.png");
    cached_grid_button_textures["N_A_BOMB"]  = ResourceLoader::load<sf::Texture>("assets/textures/NotABomb.png");

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
    panel_texture         = ResourceLoader::load<sf::Texture>(get_raw_game_panel());

    counter_panel_texture = ResourceLoader::load<sf::Texture>(get_raw_counter_panel());

    clapping_sound        = ResourceLoader::load<sf::SoundBuffer>(get_raw_clapping());

    oooh_sound            = ResourceLoader::load<sf::SoundBuffer>(get_raw_oooh());

    counter_font          = ResourceLoader::load<sf::Font>(counter_font_data);

    soundtrack            = ResourceLoader::load<MusicStream>(get_raw_game_soundtrack());

    cached_grid_button_textures["GB_UP"]     = ResourceLoader::load<sf::Texture>(get_raw_grid_button_up());
    cached_grid_button_textures["EMP_CELL"]  = ResourceLoader::load<sf::Texture>(get_raw_empty_cell());

    cached_grid_button_textures["P1_FLAG"]   = ResourceLoader::load<sf::Texture>(get_raw_mini_p1_flag());
    cached_grid_button_textures["P2_FLAG"]   = ResourceLoader::load<sf::Texture>(get_raw_mini_p2_flag());
    cached_grid_button_textures["N_A_BOMB"]  = ResourceLoader::load<sf::Texture>(get_raw_not_a_bomb());

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
    counter_panel_sprite.setTexture(*counter_panel_texture);

    counter_text.setFont(*counter_font);
//    counter_text.setOutlineColor(sf::Color::Black);
//    counter_text.setOutlineThickness(3.f);
    counter_text.setCharacterSize(48);
    counter_text.setFillColor(sf::Color::Red);
    counter_text.setPosition(sf::Vector2f(0.f, 27.f));

    soundtrack->music.setLoop(true);
    soundtrack->music.play();
    soundtrack->music.setVolume(20.f);

    buttons.push_back(std::unique_ptr<Button>(new RestartButton(
        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(279.f, 60.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/RestartButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/RestartButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/RestartButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_restart_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_restart_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_restart_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__
    )));

    buttons.push_back(std::unique_ptr<Button>(new MainMenuButton(
        Button::Enabled::LEFT,
        sf::Vector2f(522.f, 60.f),
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
    )));

    build_initial_grid();
}

Game::~Game() noexcept
{
    //
}

void Game::process_inputs()
{
    for(auto& button : buttons) button->process_inputs();

    if(!finished) {

        for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

            for(auto& grid_button : row) grid_button->process_inputs();

        }

    }
}

void Game::update(float delta)
{
    for(auto& button : buttons) button->update(delta);

    bool all_non_bombs_disabled = true;

    for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

        for(auto& grid_button : row) {

            grid_button->update(delta);

            if(finished) continue;

            if((grid_button->type != GridButton::Types::BOMB) && (!grid_button->disabled)) all_non_bombs_disabled = false;

        }

    }

    if(all_non_bombs_disabled && !finished) {

        save_record();

        for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

            for(auto& grid_button : row) {

                if(grid_button->type == GridButton::Types::BOMB) grid_button->set_flag(true);

            }

        }

        sound.stop();
        sound.setBuffer(*clapping_sound);
        sound.setVolume(100.f);
        sound.play();

        finished = true;

    }
}

void Game::draw()
{
    MinesweeperGame::window->draw(panel_sprite);

    draw_counters();

    for(auto& button : buttons) MinesweeperGame::window->draw(*button);

    MinesweeperGame::window->draw(grid_outline);

    for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

        for(auto& grid_button : row) MinesweeperGame::window->draw(*grid_button);

    }
}

void Game::restart()
{
    is_first_click = true;
    finished       = false;
    flag_counter   = 0;
    grid.clear();

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

void Game::draw_counters()
{
    counter_panel_sprite.setPosition(sf::Vector2f(52.f, 34.f));
    MinesweeperGame::window->draw(counter_panel_sprite);
    counter_panel_sprite.setPosition(sf::Vector2f(656.f, 34.f));
    MinesweeperGame::window->draw(counter_panel_sprite);

    float last_timer_x_position = counter_text.getPosition().x;
    std::string last_timer_str  = counter_text.getString();

    // Flags
    {
        std::string flag_counter_str = std::to_string(flag_counter);
        size_t flag_counter_length   = flag_counter_str.length();

        float x_pos = flag_counter_length == 3 ? 66.f : (flag_counter_length == 2) ? 88.f : 110.f;

        counter_text.setPosition(x_pos, counter_text.getPosition().y);
        counter_text.setString(flag_counter_str);
        MinesweeperGame::window->draw(counter_text);
    }
    // Flags

    // Timer
    if(!is_first_click) {

        int timer_as_seconds = static_cast<int>(timer.getElapsedTime().asSeconds());

        if(!finished && timer_as_seconds <= 999) {

            std::string timer_str = std::to_string(timer_as_seconds);
            size_t timer_length   = timer_str.length();

            float x_pos = timer_length == 3 ? 670.f : (timer_length == 2) ? 692.f : 714.f;

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

    grid.resize(grid_height);

    for(int y = 0; y < grid_height; ++y) {

        grid[y].resize(grid_width);

        for(int x = 0; x < grid_width; ++x) {

            grid[y][x] = std::unique_ptr<GridButton>(new GridButton(
                *this,
                GridButton::Types::NEUTRAL,
                false,
                false,
                sf::Vector2i(x, y),
                Button::Enabled::LEFT,
                sf::Vector2f(x * 20.f + grid_x, y * 20.f + grid_y),
                sf::Vector2f(1.f, 1.f),
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["EMP_CELL"],
                {},
                cached_grid_button_textures["P1_FLAG"],
                cached_grid_button_textures["P2_FLAG"],
                cached_grid_button_textures["N_A_BOMB"],
                cached_grid_button_sounds["FLAG_S"],
                {},
                cached_grid_button_sounds["GB_PR"]
            ));

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

    for(int y = 0; y < grid_height; ++y) {

        for(int x = 0; x < grid_width; ++x) {

            bool is_bomb = bomb_positions.find(sf::Vector2i(x, y)) != bomb_positions.end();

            GridButton::Types button_type = GridButton::Types::BOMB;

            std::shared_ptr<sf::Texture> icon_texture;

            if(!is_bomb) {

                unsigned adjacent_bomb_count = parse_adjacent_cells(x, y, bomb_positions);

                if(!adjacent_bomb_count) {

                    button_type  = GridButton::Types::NEUTRAL;

                }else {

                    button_type  = GridButton::Types::NUMBER;

                    switch(adjacent_bomb_count) {

                        case 1: { icon_texture = cached_grid_button_textures["ICON_1"]; } break;
                        case 2: { icon_texture = cached_grid_button_textures["ICON_2"]; } break;
                        case 3: { icon_texture = cached_grid_button_textures["ICON_3"]; } break;
                        case 4: { icon_texture = cached_grid_button_textures["ICON_4"]; } break;
                        case 5: { icon_texture = cached_grid_button_textures["ICON_5"]; } break;
                        case 6: { icon_texture = cached_grid_button_textures["ICON_6"]; } break;
                        case 7: { icon_texture = cached_grid_button_textures["ICON_7"]; } break;
                        case 8: { icon_texture = cached_grid_button_textures["ICON_8"]; } break;

                        default: { throw std::runtime_error("Adjacent bombs > 8 ... This shouldn't be possible..."); };

                    }

                }

            }else {

                icon_texture = cached_grid_button_textures["M_BOMB_SS"];

            }

            grid[y][x] = std::unique_ptr<GridButton>(new GridButton(
                *this,
                button_type,
                (sf::Vector2i(x, y) == first_disabled_cell_position),
                grid[y][x]->flagged,
                sf::Vector2i(x, y),
                Button::Enabled::LEFT,
                sf::Vector2f(x * 20.f + grid_x, y * 20.f + grid_y),
                sf::Vector2f(1.f, 1.f),
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["GB_UP"],
                cached_grid_button_textures["EMP_CELL"],
                icon_texture,
                cached_grid_button_textures["P1_FLAG"],
                cached_grid_button_textures["P2_FLAG"],
                cached_grid_button_textures["N_A_BOMB"],
                cached_grid_button_sounds["FLAG_S"],
                {},
                is_bomb ? cached_grid_button_sounds["BOMB_E"] : cached_grid_button_sounds["GB_PR"]
            ));

        }

    }

    timer.restart();
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
