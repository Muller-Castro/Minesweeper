/****************************************************************************************/
/* GameOverPanel.cpp                                                                    */
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

#include "components/panels/GameOverPanel.h"

#include <sstream>
#include <cmath>

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#ifdef __S_RELEASE__
#include "assets/Arial.h"
#include "assets/GameOverPanelBG.h"
#include "assets/BeginnerButtonNHovered.h"
#include "assets/BeginnerButtonHovered.h"
#include "assets/BeginnerButtonDown.h"
#include "assets/AverageButtonNHovered.h"
#include "assets/AverageButtonHovered.h"
#include "assets/AverageButtonDown.h"
#include "assets/ExpertButtonNHovered.h"
#include "assets/ExpertButtonHovered.h"
#include "assets/ExpertButtonDown.h"
#include "assets/DurationAButtonNHovered.h"
#include "assets/DurationAButtonHovered.h"
#include "assets/DurationAButtonDown.h"
#include "assets/DurationBButtonNHovered.h"
#include "assets/DurationBButtonHovered.h"
#include "assets/DurationBButtonDown.h"
#include "assets/DurationCButtonNHovered.h"
#include "assets/DurationCButtonHovered.h"
#include "assets/DurationCButtonDown.h"
#include "assets/RetryButtonNHovered.h"
#include "assets/RetryButtonHovered.h"
#include "assets/RetryButtonDown.h"
#include "assets/OnlineQuitButtonNHovered.h"
#include "assets/OnlineQuitButtonHovered.h"
#include "assets/OnlineQuitButtonDown.h"
#include "assets/MainMenuButtonHovered.h"
#include "assets/MainMenuButtonPressed.h"
#endif // __S_RELEASE__
#include "MinesweeperGame.h"
#include "io/ResourceLoader.h"
#include "components/buttons/GameOverBeginnerButton.h"
#include "components/buttons/GameOverAverageButton.h"
#include "components/buttons/GameOverExpertButton.h"
#include "components/buttons/GameOverDurationAButton.h"
#include "components/buttons/GameOverDurationBButton.h"
#include "components/buttons/GameOverDurationCButton.h"
#include "components/buttons/RetryButton.h"
#include "components/buttons/OnlineQuitButton.h"

using namespace Minesweeper;

GameOverPanel::GameOverPanel(Game& game) :
    Panel(
        sf::Vector2f(177.f, 49.f),
        sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
        ResourceLoader::load<sf::Texture>("assets/textures/GameOverPanel.png"),
#else
        ResourceLoader::load<sf::Texture>(get_raw_game_over_panel_bg()),
#endif // __S_RELEASE__
        {
            std::make_shared<GameOverBeginnerButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(280.f, 389.f),
                sf::Vector2f(.8f, .7f),
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

            ),

            std::make_shared<GameOverAverageButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(280.f, 429.f),
                sf::Vector2f(.8f, .7f),
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

            ),

            std::make_shared<GameOverExpertButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(280.f, 469.f),
                sf::Vector2f(.8f, .7f),
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

            ),

            std::make_shared<GameOverDurationAButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(551.f, 398.f),
                sf::Vector2f(1.6f, 1.3f),
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

            ),

            std::make_shared<GameOverDurationBButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(551.f, 438.f),
                sf::Vector2f(1.6f, 1.3f),
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

            ),

            std::make_shared<GameOverDurationCButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(551.f, 478.f),
                sf::Vector2f(1.6f, 1.3f),
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

            ),

            std::make_shared<RetryButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(296.f, 524.f),
                sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                ResourceLoader::load<sf::Texture>("assets/textures/RetryButtonHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/RetryButtonNHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/RetryButtonDown.png"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
                ResourceLoader::load<sf::Texture>(get_raw_retry_button_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_retry_button_n_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_retry_button_down()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

            ),

            std::make_shared<OnlineQuitButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(502.f, 524.f),
                sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                ResourceLoader::load<sf::Texture>("assets/textures/OnlineQuitButtonHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/OnlineQuitButtonNHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/OnlineQuitButtonDown.png"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
                ResourceLoader::load<sf::Texture>(get_raw_online_quit_button_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_online_quit_button_n_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_online_quit_button_down()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

            )

        }
    ),
    should_block_inputs(),
    timer(),
    game_ref(game),
    s_parameters_buff(),
#ifdef __S_RELEASE__
    calculations_font_data(get_raw_arial()),
#endif // __S_RELEASE__
    calculations_font(),
    calculations_text()
{
#ifndef __S_RELEASE__
    calculations_font = ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf");
#else
    calculations_font = ResourceLoader::load<sf::Font>(calculations_font_data);
#endif // __S_RELEASE__

    calculations_text.setFont(*calculations_font);
    calculations_text.setCharacterSize(20);
    calculations_text.setOutlineThickness(3);
    calculations_text.setOutlineColor(sf::Color::Black);
}

void GameOverPanel::process_inputs()
{
    if(is_active && !game_ref.get().panels["C_OUT"]->activated()) {

        for(auto& button : buttons) {

            button->process_inputs();

//            if(button->get_state() == Button::States::RELEASED) is_active = false;

        }

    }
}

void GameOverPanel::update(float delta)
{
    //

    Panel::update(delta);
}

void GameOverPanel::draw()
{
    if(is_active) {

        sf::RectangleShape shape(sf::Vector2f(800.f, 600.f));

        shape.setFillColor(sf::Color(0, 0, 0, 200));

        MinesweeperGame::window->draw(shape);

        MinesweeperGame::window->draw(background_sprite);

        draw_calculations();

        for(auto& button : buttons) MinesweeperGame::window->draw(*button);

    }
}

void GameOverPanel::set_active(bool b) noexcept
{
    is_active = b;

    timer.restart();
}

void GameOverPanel::draw_calculations()
{
    std::ostringstream oss;

    // FLAGGED BOMBS
    {
        calculations_text.setFillColor(sf::Color(119, 255, 0));

        // P1
        oss << '+' << game_ref.get().score_parameters.first.flagged_bombs;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(449.f - calculations_text.getLocalBounds().width / 2.f), 122.f));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << '+' << game_ref.get().score_parameters.second.flagged_bombs;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(567.f - calculations_text.getLocalBounds().width / 2.f), 122.f));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // LAST SQUARE
    {
        calculations_text.setFillColor(sf::Color(119, 255, 0));

        // P1
        oss << '+' << game_ref.get().score_parameters.first.last_square;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(449.f - calculations_text.getLocalBounds().width / 2.f), 171.f));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << '+' << game_ref.get().score_parameters.second.last_square;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(567.f - calculations_text.getLocalBounds().width / 2.f), 171.f));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // MISSED FLAGS
    {
        calculations_text.setFillColor(sf::Color(255, 149, 0));

        // P1
        oss << (game_ref.get().score_parameters.first.missed_flags == 0 ? "-" : "") << game_ref.get().score_parameters.first.missed_flags;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(451.f - calculations_text.getLocalBounds().width / 2.f), 221.f));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << (game_ref.get().score_parameters.second.missed_flags == 0 ? "-" : "") << game_ref.get().score_parameters.second.missed_flags;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(569.f - calculations_text.getLocalBounds().width / 2.f), 221.f));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // EXPLODED
    {
        calculations_text.setFillColor(sf::Color(255, 149, 0));

        // P1
        oss << (game_ref.get().score_parameters.first.exploded == 0 ? "-" : "") << game_ref.get().score_parameters.first.exploded;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(451.f - calculations_text.getLocalBounds().width / 2.f), 271.f));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << (game_ref.get().score_parameters.second.exploded == 0 ? "-" : "") << game_ref.get().score_parameters.second.exploded;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(569.f - calculations_text.getLocalBounds().width / 2.f), 271.f));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // TOTAL
    {
        calculations_text.setFillColor(sf::Color(123, 0, 255));

        // P1
        oss << game_ref.get().score_parameters.first.total;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(451.f - calculations_text.getLocalBounds().width / 2.f), 321.f));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << game_ref.get().score_parameters.second.total;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(569.f - calculations_text.getLocalBounds().width / 2.f), 321.f));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }
}
