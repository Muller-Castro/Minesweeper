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

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

#ifdef __S_RELEASE__
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
#include "scene/scenes/Game.h"

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
                sf::Vector2f(295.f, 524.f),
                sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                ResourceLoader::load<sf::Texture>("assets/textures/RetryButtonHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/RetryButtonNHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/RetryButtonDown.png"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
                ResourceLoader::load<sf::Texture>(get_raw_?_button_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_?_button_n_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_?_button_down()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

            ),

            std::make_shared<OnlineQuitButton>(

                *this,
                Button::Enabled::LEFT,
                sf::Vector2f(505.f, 524.f),
                sf::Vector2f(1.f, 1.f),
#ifndef __S_RELEASE__
                ResourceLoader::load<sf::Texture>("assets/textures/OnlineQuitButtonHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/OnlineQuitButtonNHovered.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/OnlineQuitButtonDown.png"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonHovered.wav"),
                ResourceLoader::load<sf::SoundBuffer>("assets/sounds/MainMenuButtonPressed.wav")
#else
                ResourceLoader::load<sf::Texture>(get_raw_?_button_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_?_button_n_hovered()),
                ResourceLoader::load<sf::Texture>(get_raw_?_button_down()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_hovered()),
                ResourceLoader::load<sf::SoundBuffer>(get_raw_main_menu_button_pressed())
#endif // __S_RELEASE__

            )

        }
    ),
    should_block_inputs(),
    timer(),
    game_ref(game)
{
    //
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

        for(auto& button : buttons) MinesweeperGame::window->draw(*button);

    }
}

void GameOverPanel::set_active(bool b) noexcept
{
    is_active = b;

    timer.restart();
}
