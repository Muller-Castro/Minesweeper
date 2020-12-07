/****************************************************************************************/
/* MainMenu.cpp                                                                         */
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

#include "scene/scenes/MainMenu.h"

#include <SFML/Graphics/RenderWindow.hpp>

#include "MinesweeperGame.h"
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
#include "assets/BombSpriteSheet.h"
#include "assets/MainMenuSoundtrack.h"
#include "assets/INET.h"
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
    font_data(get_raw_inet()),
#endif // __S_RELEASE__
    background_texture(),
    title_texture(),
    p1_flag_texture(),
    p2_flag_texture(),
    bomb_texture(),
    font(),
    soundtrack(),
    background_sprite(),
    title_sprite(),
    p1_flag_sprite(),
    p2_flag_sprite(),
    bomb_sprite(),
    credits_texts{

        {"ROLES"  , sf::Text()},
        {"NAMES"  , sf::Text()},
        {"LICENSE", sf::Text()}

    },
    buttons()
{
    animations.play();

#ifndef __S_RELEASE__
    background_texture = ResourceLoader::load<sf::Texture>("assets/textures/MainMenuBG.png");
    title_texture      = ResourceLoader::load<sf::Texture>("assets/textures/Title.png");
    p1_flag_texture    = ResourceLoader::load<sf::Texture>("assets/textures/P1Flag.png");
    p2_flag_texture    = ResourceLoader::load<sf::Texture>("assets/textures/P2Flag.png");
    bomb_texture       = ResourceLoader::load<sf::Texture>("assets/textures/BombSpriteSheet.png");
    soundtrack         = ResourceLoader::load<MusicStream>("assets/musics/MainMenuSoundtrack.ogg");
#else
    background_texture = ResourceLoader::load<sf::Texture>(get_raw_main_menu_bg());
    title_texture      = ResourceLoader::load<sf::Texture>(get_raw_title());
    p1_flag_texture    = ResourceLoader::load<sf::Texture>(get_raw_p1_flag());
    p2_flag_texture    = ResourceLoader::load<sf::Texture>(get_raw_p2_flag());
    bomb_texture       = ResourceLoader::load<sf::Texture>(get_raw_bomb_sprite_sheet());
    soundtrack         = ResourceLoader::load<MusicStream>(get_raw_main_menu_soundtrack());
#endif // __S_RELEASE__

    background_sprite.setTexture(*background_texture);
    title_sprite.setTexture(*title_texture);
    p1_flag_sprite.setTexture(*p1_flag_texture);
    p2_flag_sprite.setTexture(*p2_flag_texture);
    bomb_sprite.setTexture(*bomb_texture);

    soundtrack->music.setLoop(true);
    soundtrack->music.play();
    soundtrack->music.setVolume(40.f);

    title_sprite.setPosition(117.f, 18.f);

    p2_flag_sprite.setScale(-1.f, 1.f);
    bomb_sprite.setScale(0.5f, 0.5f);

#ifndef __S_RELEASE__
    font = ResourceLoader::load<sf::Font>("assets/fonts/INET.ttf");
#else
    font = ResourceLoader::load<sf::Font>(font_data);
#endif // __S_RELEASE__

    for(auto& credits_pair : credits_texts) {

        credits_pair.second.setFont(*font);
        credits_pair.second.setOutlineColor(sf::Color::Black);
        credits_pair.second.setOutlineThickness(3.f);

    }

    credits_texts["ROLES"].setPosition(35.f, 15.f);
    credits_texts["ROLES"].setString(

        "Project Management, Programming and Idealization:\n\n"
        "Art and soundtracks:"

    );
    credits_texts["ROLES"].setCharacterSize(24);
    credits_texts["ROLES"].setFillColor(sf::Color(153, 153, 153));

    credits_texts["NAMES"].setPosition(260.f, 12.f);
    credits_texts["NAMES"].setString(

        "                                    Muller Castro\n\n"
        "Matheus Aguilera"
    );
    credits_texts["NAMES"].setCharacterSize(26);
    credits_texts["NAMES"].setFillColor(sf::Color(255, 204, 0));

    credits_texts["LICENSE"].setCharacterSize(21);
    credits_texts["LICENSE"].setFillColor(sf::Color(255, 255, 255));
    credits_texts["LICENSE"].setPosition(35.f, 140.f);
    credits_texts["LICENSE"].setString(

        "Copyright (c) 2020 Muller Castro\n\n"

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

    buttons.push_back(std::unique_ptr<Button>(new PlayOnlineButton(
        sf::Vector2f(397.f, 222.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOnlineHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOnlineNHovered.png"),
        ResourceLoader::load<sf::Texture>("assets/textures/PlayOnlineDown.png"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
        ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
        ResourceLoader::load<sf::Texture>(get_raw_play_online_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_play_online_n_hovered()),
        ResourceLoader::load<sf::Texture>(get_raw_play_online_down()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
        ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__
    )));

    buttons.push_back(std::unique_ptr<Button>(new PlayOfflineButton(
        *this,
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
    )));

    buttons.push_back(std::unique_ptr<Button>(new CreditsButton(
        *this,
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
    )));

    buttons.push_back(std::unique_ptr<Button>(new QuitButton(
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
    )));

    buttons.push_back(std::unique_ptr<Button>(new CreditsReturnButton(
        *this,
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
    )));

    ////////////
    buttons.push_back(std::unique_ptr<Button>(new BeginnerButton(
        sf::Vector2f(397.f, 222.f),
        sf::Vector2f(1.f, 1.f),
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

    buttons.push_back(std::unique_ptr<Button>(new AverageButton(
        sf::Vector2f(397.f, 322.f),
        sf::Vector2f(1.f, 1.f),
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

    buttons.push_back(std::unique_ptr<Button>(new ExpertButton(
        sf::Vector2f(397.f, 422.f),
        sf::Vector2f(1.f, 1.f),
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

    buttons.push_back(std::unique_ptr<Button>(new PlayOfflineReturnButton(
        *this,
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
    )));
    ////////////
}

MainMenu::~MainMenu()
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

    if(!show_credits) {

        MinesweeperGame::window->draw(title_sprite);

        draw_flags();

    }else {

        for(int i = 0; i < 20; ++i) {

            bomb_sprite.setPosition(40.f * i + 4.f, 105.f);
            MinesweeperGame::window->draw(bomb_sprite);

        }

        for(auto& credits_pair : credits_texts) MinesweeperGame::window->draw(credits_pair.second);

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
