/****************************************************************************************/
/* MainMenu.cpp                                                                         */
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

#include "scene/scenes/MainMenu.h"

#include <fstream>
#include <algorithm>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#include "Encryptions/AES.h"

#include "MinesweeperGame.h"
#include "tools/EncryptionKey.h"
#include "components/buttons/PlayOfflineButton.h"
#include "components/buttons/PlayOnlineButton.h"
#include "components/buttons/CreditsButton.h"
#include "components/buttons/QuitButton.h"
#include "components/buttons/CreditsReturnButton.h"
#include "components/buttons/BeginnerButton.h"
#include "components/buttons/AverageButton.h"
#include "components/buttons/ExpertButton.h"
#include "components/buttons/PlayOfflineReturnButton.h"
#include "io/ResourceLoader.h"
#include "Input.h"
#include "scene/SceneManager.h"
#ifdef __S_RELEASE__
#include "assets/MainMenuBG.h"
#include "assets/Title.h"
#include "assets/P1Flag.h"
#include "assets/P2Flag.h"
#include "assets/RecordGrid.h"
#include "assets/BombSpriteSheet.h"
#include "assets/CreditsPanelFRG.h"
#include "assets/RecordGridFRG.h"
#include "assets/MainMenuSoundtrack.h"
#include "assets/INET.h"
#include "assets/Digital7Mono.h"
#include "assets/AverageButtonNHovered.h"
#include "assets/AverageButtonHovered.h"
#include "assets/AverageButtonDown.h"
#include "assets/BeginnerButtonNHovered.h"
#include "assets/BeginnerButtonHovered.h"
#include "assets/BeginnerButtonDown.h"
#include "assets/ExpertButtonNHovered.h"
#include "assets/ExpertButtonHovered.h"
#include "assets/ExpertButtonDown.h"
#include "assets/MainMenuButtonHovered.h"
#include "assets/MainMenuButtonPressed.h"
#include "assets/PlayOfflineNHovered.h"
#include "assets/PlayOfflineHovered.h"
#include "assets/PlayOfflineDown.h"
#include "assets/PlayOnlineNHovered.h"
#include "assets/PlayOnlineHovered.h"
#include "assets/PlayOnlineDown.h"
#include "assets/CreditsNHovered.h"
#include "assets/CreditsHovered.h"
#include "assets/CreditsDown.h"
#include "assets/QuitNHovered.h"
#include "assets/QuitHovered.h"
#include "assets/QuitDown.h"
#include "assets/ReturnNHovered.h"
#include "assets/ReturnHovered.h"
#include "assets/ReturnDown.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

MainMenu::MainMenu() :
    show_credits(),
    show_difficulty_levels(),
    in_time(),

    animations(

        {
            Animation("WAVING_FLAGS", 0.25f, {

                KeyFrame(0.f, [&]() {

                    p1_flag_sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
                    p2_flag_sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));

                }),
                KeyFrame(0.125f, [&]() {

                    p1_flag_sprite.setTextureRect(sf::IntRect(0, 32, 32, 32));
                    p2_flag_sprite.setTextureRect(sf::IntRect(0, 32, 32, 32));

                })

            }),

            Animation("IGNITED_BOMB", 0.75f, {

                KeyFrame(0.f, [&]() {

                    bomb_sprite.setTextureRect(sf::IntRect(0, 0, 64, 64));

                }),

                KeyFrame(0.25f, [&]() {

                    bomb_sprite.setTextureRect(sf::IntRect(64, 0, 64, 64));

                }),

                KeyFrame(0.5f, [&]() {

                    bomb_sprite.setTextureRect(sf::IntRect(128, 0, 64, 64));

                }),

            })
        },

        "WAVING_FLAGS"

    ),

#ifdef __S_RELEASE__
    credits_font_data(get_raw_inet()),
    record_font_data(get_raw_digital7_mono()),
#endif // __S_RELEASE__
    background_texture(),
    title_texture(),
    p1_flag_texture(),
    p2_flag_texture(),
    record_grid_texture(),
    bomb_texture(),
    credits_font(),
    record_font(),
    soundtrack(),
    background_sprite(),
    title_sprite(),
    p1_flag_sprite(),
    p2_flag_sprite(),
    record_grid_sprite(),
    bomb_sprite(),
    credits_panel_shader(),
    record_grid_shader(),
    credits_panel_shape(),
    record_texts(),
    record_values(),
    credits_texts{

        {"ROLES"  , sf::Text()},
        {"NAMES"  , sf::Text()},
        {"LICENSE", sf::Text()}

    },
    buttons()
{
    record_values.fill("   "); // just to remove leading zeros and pre-allocate 3 chars for each string to receive the record values

    animations.play();

#ifndef __S_RELEASE__
    background_texture   = ResourceLoader::load<sf::Texture>("assets/textures/MainMenuBG.png");
    title_texture        = ResourceLoader::load<sf::Texture>("assets/textures/Title.png");
    p1_flag_texture      = ResourceLoader::load<sf::Texture>("assets/textures/P1Flag.png");
    p2_flag_texture      = ResourceLoader::load<sf::Texture>("assets/textures/P2Flag.png");
    record_grid_texture  = ResourceLoader::load<sf::Texture>("assets/textures/RecordGrid.png");
    bomb_texture         = ResourceLoader::load<sf::Texture>("assets/textures/BombSpriteSheet.png");
    credits_panel_shader = ResourceLoader::load<sf::Shader>("assets/shaders/CreditsPanel.frg");
    record_grid_shader   = ResourceLoader::load<sf::Shader>("assets/shaders/RecordGrid.frg");
    soundtrack           = ResourceLoader::load<MusicStream>("assets/musics/MainMenuSoundtrack.ogg");
#else
    background_texture   = ResourceLoader::load<sf::Texture>(get_raw_main_menu_bg());
    title_texture        = ResourceLoader::load<sf::Texture>(get_raw_title());
    p1_flag_texture      = ResourceLoader::load<sf::Texture>(get_raw_p1_flag());
    p2_flag_texture      = ResourceLoader::load<sf::Texture>(get_raw_p2_flag());
    record_grid_texture  = ResourceLoader::load<sf::Texture>(get_raw_record_grid());
    bomb_texture         = ResourceLoader::load<sf::Texture>(get_raw_bomb_sprite_sheet());
    credits_panel_shader = ResourceLoader::load<sf::Shader>({"CreditsPanelFRG", ""});
    record_grid_shader   = ResourceLoader::load<sf::Shader>({"RecordGridFRG"  , ""});
    soundtrack           = ResourceLoader::load<MusicStream>(get_raw_main_menu_soundtrack());

    credits_panel_shader->loadFromMemory(get_raw_credits_panel_frg().second, sf::Shader::Fragment);
    record_grid_shader->loadFromMemory(get_raw_record_grid_frg().second, sf::Shader::Fragment);
#endif // __S_RELEASE__

    background_sprite.setTexture(*background_texture);
    title_sprite.setTexture(*title_texture);
    p1_flag_sprite.setTexture(*p1_flag_texture);
    p2_flag_sprite.setTexture(*p2_flag_texture);
    bomb_sprite.setTexture(*bomb_texture);

    record_grid_shader->setUniform("in_texture", sf::Shader::CurrentTexture);

    soundtrack->music.setLoop(true);
    soundtrack->music.play();
    soundtrack->music.setVolume(40.f);

    title_sprite.setPosition(117.f, 18.f);

    p2_flag_sprite.setScale(-1.f, 1.f);
    bomb_sprite.setScale(0.25f, 0.25f);

    credits_panel_shape.setSize(sf::Vector2f(800.f, 43.f));

#ifndef __S_RELEASE__
    credits_font = ResourceLoader::load<sf::Font>("assets/fonts/INET.ttf");
    record_font  = ResourceLoader::load<sf::Font>("assets/fonts/Digital7Mono.ttf");
#else
    credits_font = ResourceLoader::load<sf::Font>(credits_font_data);
    record_font  = ResourceLoader::load<sf::Font>(record_font_data);
#endif // __S_RELEASE__

    load_records();

    record_grid_sprite.setTexture(*record_grid_texture);
    record_grid_sprite.setPosition(sf::Vector2f(295.f, 145.f));

    record_texts.setFont(*record_font);

    for(auto& credits_pair : credits_texts) {

        credits_pair.second.setFont(*credits_font);
        credits_pair.second.setOutlineColor(sf::Color::Black);
        credits_pair.second.setOutlineThickness(3.f);

    }

    credits_texts["ROLES"].setPosition(35.f, 35.f);
    credits_texts["ROLES"].setString(

        "Project Management, Design and Programming:\n\n\n"
        "Art and soundtracks:"

    );
    credits_texts["ROLES"].setCharacterSize(24);
    credits_texts["ROLES"].setFillColor(sf::Color(153, 153, 153));

    credits_texts["NAMES"].setPosition(260.f, 30.f);
    credits_texts["NAMES"].setString(

        "                              Muller Castro\n\n\n"
        "Muller Castro and Matheus Aguilera"
    );
    credits_texts["NAMES"].setCharacterSize(26);
    credits_texts["NAMES"].setFillColor(sf::Color(255, 204, 0));

    credits_texts["LICENSE"].setCharacterSize(21);
    credits_texts["LICENSE"].setFillColor(sf::Color(255, 255, 255));
    credits_texts["LICENSE"].setPosition(35.f, 175.f);
    credits_texts["LICENSE"].setString(

        "Copyright (c) 2020-2021 Muller Castro\n\n"

        "Permission is hereby granted, free of charge, to any person obtaining a copy\n"
        "of this software and associated documentation files (the \"Software\"), to\n"
        "deal in the Software without restriction, including without limitation the\n"
        "rights to use, copy, modify, merge, publish, distribute, sublicense, and/or\n"
        "sell copies of the Software, and to permit persons to whom the Software is\n"
        "furnished to do so, subject to the following conditions:\n\n"

        "The above copyright notice and this permission notice shall be included in all\n"
        "copies or substantial portions of the Software.\n\n"

        "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
        "IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
        "FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
        "AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
        "LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
        "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\n"
        "THE SOFTWARE."

    );
    credits_texts["LICENSE"].setOutlineColor(sf::Color::Black);

    buttons.push_back(std::make_unique<PlayOnlineButton>(
        Button::Enabled::LEFT,
        sf::Vector2f(397.f, 222.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOnlineHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOnlineNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOnlineDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_play_online_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_play_online_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_play_online_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__
    ));

    buttons.push_back(std::make_unique<PlayOfflineButton>(
        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(397.f, 322.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOfflineHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOfflineNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOfflineDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_play_offline_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_play_offline_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_play_offline_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__
    ));

    buttons.push_back(std::make_unique<CreditsButton>(
        *this,
        Button::Enabled::LEFT,
        sf::Vector2f(397.f, 422.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/CreditsHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/CreditsNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/CreditsDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_credits_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_credits_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_credits_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__
    ));

    buttons.push_back(std::make_unique<QuitButton>(
        Button::Enabled::LEFT,
        sf::Vector2f(397.f, 522.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/QuitHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/QuitNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/QuitDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_quit_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_quit_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_quit_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__
    ));

    buttons.push_back(std::make_unique<CreditsReturnButton>(
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
    ));

    ////////////
    buttons.push_back(std::make_unique<BeginnerButton>(
        Button::Enabled::LEFT,
        sf::Vector2f(397.f, 322.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/BeginnerButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/BeginnerButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/BeginnerButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_beginner_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_beginner_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_beginner_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__
    ));

    buttons.push_back(std::make_unique<AverageButton>(
        Button::Enabled::LEFT,
        sf::Vector2f(397.f, 422.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/AverageButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/AverageButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/AverageButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_average_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_average_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_average_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__
    ));

    buttons.push_back(std::make_unique<ExpertButton>(
        Button::Enabled::LEFT,
        sf::Vector2f(397.f, 522.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/ExpertButtonHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ExpertButtonNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/ExpertButtonDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_expert_button_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_expert_button_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_expert_button_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered())
#endif // __S_RELEASE__
    ));

    buttons.push_back(std::make_unique<PlayOfflineReturnButton>(
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
    ));
    ////////////
}

MainMenu::~MainMenu() noexcept
{
    //
}

void MainMenu::process_inputs()
{
#ifndef __S_RELEASE__
    if(Input::is_just_pressed<Input::Key>(sf::Keyboard::Enter)) SceneManager::change_scene_to(SceneManager::Scenes::SPLASH_SCREEN);
#endif // __S_RELEASE__

    for(size_t i = 0; i < buttons.size(); ++i) {

        CreditsReturnButton* crb = dynamic_cast<CreditsReturnButton*>(buttons[i].get());

        BeginnerButton*          bb   = dynamic_cast<BeginnerButton*>(buttons[i].get());
        AverageButton*           ab   = dynamic_cast<AverageButton*>(buttons[i].get());
        ExpertButton*            eb   = dynamic_cast<ExpertButton*>(buttons[i].get());
        PlayOfflineReturnButton* porb = dynamic_cast<PlayOfflineReturnButton*>(buttons[i].get());

        if(show_credits) {

            if(crb) buttons[i]->process_inputs();

        }else if(show_difficulty_levels) {

            if(bb || ab || eb || porb) buttons[i]->process_inputs();

        }else {

            if(!crb && !bb && !ab && !eb && !porb) buttons[i]->process_inputs();

        }

    }
}

void MainMenu::update(float delta)
{
    for(size_t i = 0; i < buttons.size(); ++i) {

        CreditsReturnButton* crb = dynamic_cast<CreditsReturnButton*>(buttons[i].get());

        BeginnerButton*          bb   = dynamic_cast<BeginnerButton*>(buttons[i].get());
        AverageButton*           ab   = dynamic_cast<AverageButton*>(buttons[i].get());
        ExpertButton*            eb   = dynamic_cast<ExpertButton*>(buttons[i].get());
        PlayOfflineReturnButton* porb = dynamic_cast<PlayOfflineReturnButton*>(buttons[i].get());

        if(show_credits) {

            if(crb) buttons[i]->update(delta);

        }else if(show_difficulty_levels) {

            if(bb || ab || eb || porb) buttons[i]->update(delta);

        }else {

            if(!crb && !bb && !ab && !eb && !porb) buttons[i]->update(delta);

        }

    }

    animations.update(delta);
}

void MainMenu::draw()
{
    MinesweeperGame::window->draw(background_sprite);

    if(show_credits) {

        // Panels
        sf::RectangleShape outline_rect(credits_panel_shape.getSize());

        outline_rect.setFillColor(sf::Color(0, 0, 0, 0));
        outline_rect.setOutlineColor(sf::Color::Black);
        outline_rect.setOutlineThickness(2.f);

        credits_panel_shader->setUniform("in_time", in_time.getElapsedTime().asSeconds() + 5.f);
        credits_panel_shape.setPosition(0.f, 30.f);

        outline_rect.setPosition(0.f, 30.f);
        MinesweeperGame::window->draw(outline_rect);
        MinesweeperGame::window->draw(credits_panel_shape, credits_panel_shader.get());

        credits_panel_shader->setUniform("in_time", in_time.getElapsedTime().asSeconds());
        credits_panel_shape.setPosition(0.f, 105.f);

        outline_rect.setPosition(0.f, 105.f);
        MinesweeperGame::window->draw(outline_rect);
        MinesweeperGame::window->draw(credits_panel_shape, credits_panel_shader.get());
        // Panels

        for(int i = 0; i < 40; ++i) {

            bomb_sprite.setPosition(20.f * i + 2.f, 157.f);
            MinesweeperGame::window->draw(bomb_sprite);

        }

        for(auto& credits_pair : credits_texts) MinesweeperGame::window->draw(credits_pair.second);

    }else {

        MinesweeperGame::window->draw(title_sprite);

        draw_flags();

        if(show_difficulty_levels) draw_records();

    }

    for(size_t i = 0; i < buttons.size(); ++i) {

        CreditsReturnButton* crb = dynamic_cast<CreditsReturnButton*>(buttons[i].get());

        BeginnerButton*          bb   = dynamic_cast<BeginnerButton*>(buttons[i].get());
        AverageButton*           ab   = dynamic_cast<AverageButton*>(buttons[i].get());
        ExpertButton*            eb   = dynamic_cast<ExpertButton*>(buttons[i].get());
        PlayOfflineReturnButton* porb = dynamic_cast<PlayOfflineReturnButton*>(buttons[i].get());

        if(show_credits) {

            if(crb) MinesweeperGame::window->draw(*buttons[i]);

        }else if(show_difficulty_levels) {

            if(bb || ab || eb || porb) MinesweeperGame::window->draw(*buttons[i]);

        }else {

            if(!crb && !bb && !ab && !eb && !porb) MinesweeperGame::window->draw(*buttons[i]);

        }

    }
}

void MainMenu::load_records()
{
    std::ifstream save_file(
#ifdef __DEBUG__
        std::string("bin/Debug/") + SAVE_FILE_NAME,
#else
        SAVE_FILE_NAME,
#endif // __DEBUG__
        std::ios_base::in | std::ios_base::binary
    );

    if(save_file.is_open()) {

        std::string encrypted_content;

        {
            std::string line;

            while(std::getline(save_file, line)) encrypted_content += (line + '\n');
        }

        save_file.close();

        AES aes(SAVE_FILE_KEY);

        std::string records_str = aes.decrypt(encrypted_content.substr(912, 16));

        std::string value = records_str.substr(records_str.find('B', 3) + 1, 3);
        std::copy(value.rbegin(), value.rend(), record_values[0].rbegin());

        value = records_str.substr(records_str.find('A', 3) + 1, 3);
        std::copy(value.rbegin(), value.rend(), record_values[1].rbegin());

        value = records_str.substr(records_str.find('E', 3) + 1, 3);
        std::copy(value.rbegin(), value.rend(), record_values[2].rbegin());

        for(std::string& s : record_values) {

            size_t pos = s.find_first_not_of('0');

            if(pos != 0) {

                std::string blank_spaces;

                for(size_t i = 0; i < pos; ++i) blank_spaces += ' ';

                s.replace(0, pos, blank_spaces);

            }

        }

    }else {

        record_values.fill("NaN");

    }

    SceneManager::shared_data["BEG_R"] = record_values[0];
    SceneManager::shared_data["AVE_R"] = record_values[1];
    SceneManager::shared_data["EXP_R"] = record_values[2];
}

void MainMenu::draw_flags()
{
    //// Blue
    p1_flag_sprite.setPosition(157.f, 107.f);
    MinesweeperGame::window->draw(p1_flag_sprite);

    p1_flag_sprite.setPosition(207.f, 157.f);
    MinesweeperGame::window->draw(p1_flag_sprite);

    p1_flag_sprite.setPosition(257.f, 207.f);
    MinesweeperGame::window->draw(p1_flag_sprite);
    //// Blue

    //// Red
    p2_flag_sprite.setPosition(639.f, 107.f);
    MinesweeperGame::window->draw(p2_flag_sprite);

    p2_flag_sprite.setPosition(589.f, 157.f);
    MinesweeperGame::window->draw(p2_flag_sprite);

    p2_flag_sprite.setPosition(539.f, 207.f);
    MinesweeperGame::window->draw(p2_flag_sprite);
    //// Red
}

void MainMenu::draw_records()
{
    //// Grid
    record_grid_shader->setUniform("in_time", in_time.getElapsedTime().asSeconds());
    MinesweeperGame::window->draw(record_grid_sprite, record_grid_shader.get());
    //// Grid

    //// Letters
    record_texts.setOutlineColor(sf::Color::Black);
    record_texts.setOutlineThickness(2.f);
    record_texts.setCharacterSize(36);

    record_texts.setFillColor(sf::Color(132, 0, 255));
    record_texts.setString('D');
    record_texts.setPosition(315.f, 150.f);
    MinesweeperGame::window->draw(record_texts);

    record_texts.setString('R');
    record_texts.setPosition(315.f, 200.f);
    MinesweeperGame::window->draw(record_texts);

    record_texts.setFillColor(sf::Color(12, 255, 0));
    record_texts.setString('B');
    record_texts.setPosition(365.f, 150.f);
    MinesweeperGame::window->draw(record_texts);

    record_texts.setFillColor(sf::Color(255, 240, 0));
    record_texts.setString('A');
    record_texts.setPosition(415.f, 150.f);
    MinesweeperGame::window->draw(record_texts);

    record_texts.setFillColor(sf::Color(255, 0, 0));
    record_texts.setString('E');
    record_texts.setPosition(465.f, 150.f);
    MinesweeperGame::window->draw(record_texts);
    //// Letters

    //// Squares
    {
        sf::RectangleShape shape(sf::Vector2f(45.f, 45.f));

        shape.setFillColor(sf::Color::Black);

        shape.setPosition(350.f, 200.f);
        MinesweeperGame::window->draw(shape);

        shape.setPosition(400.f, 200.f);
        MinesweeperGame::window->draw(shape);

        shape.setPosition(450.f, 200.f);
        MinesweeperGame::window->draw(shape);
    }
    //// Squares

    //// Values
    record_texts.setOutlineThickness(0.f);
    record_texts.setCharacterSize(30);

    record_texts.setFillColor(sf::Color(255, 0, 0, 80));
    record_texts.setString("000");

    record_texts.setPosition(352.f, 203.f);
    MinesweeperGame::window->draw(record_texts);

    record_texts.setPosition(402.f, 203.f);
    MinesweeperGame::window->draw(record_texts);

    record_texts.setPosition(452.f, 203.f);
    MinesweeperGame::window->draw(record_texts);

    record_texts.setFillColor(sf::Color::Red);

    if(record_values[0] != "NaN") {

        record_texts.setString(record_values[0]);
        record_texts.setPosition(352.f, 203.f);
        MinesweeperGame::window->draw(record_texts);

    }

    if(record_values[1] != "NaN") {

        record_texts.setString(record_values[1]);
        record_texts.setPosition(402.f, 203.f);
        MinesweeperGame::window->draw(record_texts);

    }

    if(record_values[2] != "NaN") {

        record_texts.setString(record_values[2]);
        record_texts.setPosition(452.f, 203.f);
        MinesweeperGame::window->draw(record_texts);

    }
    //// Values
}
