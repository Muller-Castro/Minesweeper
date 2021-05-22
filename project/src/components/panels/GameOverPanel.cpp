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
#include "assets/WinnerRectFRG.h"
#include "assets/Whoosh.h"
#include "assets/EarnedScore.h"
#include "assets/HandIcon.h"
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
        sf::Vector2f(177.f, -520.f),
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
                sf::Vector2f(280.f, 389.f - 569.f),
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
                sf::Vector2f(280.f, 429.f - 569.f),
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
                sf::Vector2f(280.f, 469.f - 569.f),
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
                sf::Vector2f(551.f, 398.f - 569.f),
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
                sf::Vector2f(551.f, 438.f - 569.f),
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
                sf::Vector2f(551.f, 478.f - 569.f),
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
                sf::Vector2f(296.f, 524.f - 569.f),
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
                sf::Vector2f(502.f, 524.f - 569.f),
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
    curr_step(Steps::WAIT),
    curr_score_param_step(ScoreParameterStep::FLAGGED_BOMBS),
    click_circles_alpha(),
    background_rect_alpha(),
    hand_icon_alpha(),
    click_circles_radius(),
    timer(),
    earned_score_timer(),
    hand_icon_timer(),
    game_ref(game),
    s_parameters_buff(),
    go_down_tween(tweeny::from(-520.f).to(49.f).during(GameOverPanel::GO_DOWN_DURATION).via(tweeny::easing::cubicOut)),
    hand_icon_tween(

        tweeny::from(1.f).to(0.6f).during(GameOverPanel::HAND_ICON_RESCALE_DURATION / 2.f).via(tweeny::easing::cubicOut)
               .to(1.f).during(GameOverPanel::HAND_ICON_RESCALE_DURATION).via(tweeny::easing::cubicOut)

    ),
    click_circles_tween(tweeny::from<float, unsigned char>(0.f, 255).to(50.f, 0).during(GameOverPanel::CLICK_CIRCLES_SCALE_S, GameOverPanel::CLICK_CIRCLES_FADE_S).via(tweeny::easing::backInOut, tweeny::easing::cubicOut)),
#ifdef __S_RELEASE__
    calculations_font_data(get_raw_arial()),
#endif // __S_RELEASE__
    calculations_font(),
    winner_rect_shader(),
    hand_icon_texture(),
    whoosh_sound(),
    earned_score(),
    click_circle(),
    calculations_text(),
    hand_icon_sprite()
{
#ifndef __S_RELEASE__
    calculations_font  = ResourceLoader::load<sf::Font>("assets/fonts/Arial.ttf");

    winner_rect_shader = ResourceLoader::load<sf::Shader>("assets/shaders/WinnerRect.frg");

    hand_icon_texture  = ResourceLoader::load<sf::Texture>("assets/textures/HandIcon.png");

    whoosh_sound       = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/Whoosh.wav");

    earned_score       = ResourceLoader::load<sf::SoundBuffer>("assets/sounds/EarnedScore.wav");
#else
    calculations_font  = ResourceLoader::load<sf::Font>(calculations_font_data);

    winner_rect_shader = ResourceLoader::load<sf::Shader>({"WinnerRectFRG", ""});

    winner_rect_shader->loadFromMemory(get_raw_winner_rect_frg().second, sf::Shader::Fragment);

    hand_icon_texture  = ResourceLoader::load<sf::Texture>(get_raw_hand_icon());

    whoosh_sound       = ResourceLoader::load<sf::SoundBuffer>(get_raw_whoosh());

    earned_score       = ResourceLoader::load<sf::SoundBuffer>(get_raw_earned_score());
#endif // __S_RELEASE__

    click_circle.setFillColor(sf::Color(0, 0, 0, 0));
    click_circle.setOutlineThickness(5.f);
    click_circle.setOutlineColor(sf::Color(51, 153, 255));
    click_circle.setPosition(sf::Vector2f(0.f, 269.f));

    calculations_text.setFont(*calculations_font);
    calculations_text.setCharacterSize(20);
    calculations_text.setOutlineThickness(3);
    calculations_text.setOutlineColor(sf::Color::Black);

    hand_icon_sprite.setTexture(*hand_icon_texture);
    hand_icon_sprite.setPosition(sf::Vector2f(0.f, 270.f));
    hand_icon_sprite.setColor(sf::Color(255, 255, 255, 0));
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
    if(is_active) {

        switch(curr_step) {

            case Steps::WAIT: {

                if(timer.getElapsedTime().asSeconds() > GameOverPanel::WAIT_DURATION) curr_step = Steps::FADE;

            } break;

            case Steps::FADE: {

                background_rect_alpha += delta * GameOverPanel::FADE_SPEED;

                if(static_cast<int>(background_rect_alpha) >= 200) {

                    background_rect_alpha = 200.f;

                    curr_step = Steps::GO_DOWN;

                    game_ref.get().play_sound(whoosh_sound);

                }

            } break;

            case Steps::GO_DOWN: {

                float new_y = go_down_tween.step(delta);

                float y_offset = 0.f;

                {
                    float curr_x = background_sprite.getPosition().x;

                    y_offset = background_sprite.getPosition().y;

                    background_sprite.setPosition(sf::Vector2f(curr_x, new_y));

                    y_offset = background_sprite.getPosition().y - y_offset;
                }

                for(auto& button : buttons) button->position.y += y_offset;

                if(go_down_tween.progress() >= 1.f) {

                    curr_step = Steps::CALCULATE;

                    timer.restart();

                    earned_score_timer.restart();

                }

            } break;

            case Steps::CALCULATE: {

                const bool finished_calculation_delay = timer.getElapsedTime().asSeconds() >= GameOverPanel::CALCULATION_DELAY;

                switch(curr_score_param_step) {

                    case ScoreParameterStep::FLAGGED_BOMBS: {

                        if(finished_calculation_delay) {

                            bool next = count_score_parameter(true, s_parameters_buff.first.flagged_bombs, game_ref.get().score_parameters.first.flagged_bombs);

                            next &= count_score_parameter(true, s_parameters_buff.second.flagged_bombs, game_ref.get().score_parameters.second.flagged_bombs);

                            if(next) curr_score_param_step = ScoreParameterStep::LAST_SQUARE;

                        }

                    } break;

                    case ScoreParameterStep::LAST_SQUARE: {

                        bool next = count_score_parameter(true, s_parameters_buff.first.last_square, game_ref.get().score_parameters.first.last_square);

                        next &= count_score_parameter(true, s_parameters_buff.second.last_square, game_ref.get().score_parameters.second.last_square);

                        if(next) curr_score_param_step = ScoreParameterStep::MISSED_FLAGS;

                    } break;

                    case ScoreParameterStep::MISSED_FLAGS: {

                        bool next = count_score_parameter(false, s_parameters_buff.first.missed_flags, game_ref.get().score_parameters.first.missed_flags);

                        next &= count_score_parameter(false, s_parameters_buff.second.missed_flags, game_ref.get().score_parameters.second.missed_flags);

                        if(next) curr_score_param_step = ScoreParameterStep::EXPLODED;

                    } break;

                    case ScoreParameterStep::EXPLODED: {

                        bool next = count_score_parameter(false, s_parameters_buff.first.exploded, game_ref.get().score_parameters.first.exploded);

                        next &= count_score_parameter(false, s_parameters_buff.second.exploded, game_ref.get().score_parameters.second.exploded);

                        if(next) curr_score_param_step = ScoreParameterStep::TOTAL;

                    } break;

                    case ScoreParameterStep::TOTAL: {

                        bool next = count_score_parameter(true, s_parameters_buff.first.total, game_ref.get().score_parameters.first.total);

                        next &= count_score_parameter(true, s_parameters_buff.second.total, game_ref.get().score_parameters.second.total);

                        if(next) {

                            curr_step = Steps::PLAY_RESULTS_SFX;

                            timer.restart();

                        }

                    } break;

                    default: break;

                }

                if(finished_calculation_delay) {

                    auto milli = earned_score_timer.getElapsedTime().asMilliseconds();

                    if(milli >= GameOverPanel::EARNED_SCORE_DELAY) {

                        game_ref.get().play_sound(earned_score, 15.f);

                        earned_score_timer.restart();

                    }

                }

            } break;

            case Steps::PLAY_RESULTS_SFX: {

                if(timer.getElapsedTime().asSeconds() >= GameOverPanel::WINNER_DELAY) {

                    const bool tied_game = s_parameters_buff.first.total == s_parameters_buff.second.total;

                    const std::shared_ptr<sf::SoundBuffer>* sfx = nullptr;

                    if(tied_game) {

                        sfx = &game_ref.get().oooh_sound;

                    }else {

                        if(game_ref.get().conn_info.is_host) {

                            if     (s_parameters_buff.first.total > s_parameters_buff.second.total) sfx = &game_ref.get().clapping_sound;
                            else if(s_parameters_buff.first.total < s_parameters_buff.second.total) sfx = &game_ref.get().oooh_sound;

                        }else {

                            if     (s_parameters_buff.second.total > s_parameters_buff.first.total) sfx = &game_ref.get().clapping_sound;
                            else if(s_parameters_buff.second.total < s_parameters_buff.first.total) sfx = &game_ref.get().oooh_sound;

                        }

                    }

                    if(sfx) game_ref.get().play_sound(*sfx);

                    curr_step = Steps::SHOW_WINNER;

                    timer.restart();

                }

            } break;

            case Steps::SHOW_WINNER: {

                const float timer_seconds = timer.getElapsedTime().asSeconds();

                winner_rect_shader->setUniform("in_time", timer_seconds);

                if(timer_seconds >= GameOverPanel::HAND_ICON_DELAY) {

                    if(hand_icon_sprite.getColor().a != 255) {

                        hand_icon_alpha += delta * HAND_ICON_FADE_S;

                        if(hand_icon_alpha >= 255.f) hand_icon_alpha = 255.f;

                        hand_icon_sprite.setColor(sf::Color(255, 255, 255, static_cast<unsigned char>(hand_icon_alpha)));

                    }else {

                        if(hand_icon_timer.getElapsedTime().asSeconds() >= GameOverPanel::HAND_ICON_RESCALE_INTERVAL) {

                            float new_scale = hand_icon_tween.step(delta);

                            hand_icon_sprite.setScale(new_scale, new_scale);

                        }

                        if(hand_icon_tween.progress() >= 1.f) {

                            hand_icon_tween.seek(0.f);

                            hand_icon_timer.restart();

                        }

                        if(hand_icon_sprite.getScale().x < 1.f) {

                            std::tie(click_circles_radius, click_circles_alpha) = click_circles_tween.step(delta);

                        }else {

                            click_circles_tween.seek(0.f);

                        }

                    }

                }

            } break;

            default: break;

        }

    }

    Panel::update(delta);
}

void GameOverPanel::draw()
{
    if(is_active) {

        sf::RectangleShape shape(sf::Vector2f(800.f, 600.f));

        shape.setFillColor(sf::Color(0, 0, 0, static_cast<unsigned char>(background_rect_alpha)));

        MinesweeperGame::window->draw(shape);

        if(curr_step == Steps::SHOW_WINNER) {

            // CLICK CIRCLES DRAW
            {
                float click_circle_y = click_circle.getPosition().y;

                sf::Color c_c_color  = click_circle.getOutlineColor();

                for(int i = 0; i < 3; ++i) {

                    int new_alpha = click_circles_alpha - (i * GameOverPanel::CLICK_CIRCLES_DIFFS);

                    click_circle.setOutlineColor(sf::Color(c_c_color.r, c_c_color.g, c_c_color.b, new_alpha < 0 ? 0 : new_alpha));

                    const float new_radius = click_circles_radius + (i * GameOverPanel::CLICK_CIRCLES_DIFFS);

                    click_circle.setOrigin(sf::Vector2f(0.f, 0.f));

                    click_circle.setPosition(sf::Vector2f(80.f, click_circle_y));
                    click_circle.setOrigin(sf::Vector2f(new_radius, new_radius));
                    click_circle.setRadius(new_radius);
                    MinesweeperGame::window->draw(click_circle);

                    click_circle.setOrigin(sf::Vector2f(0.f, 0.f));

                    click_circle.setPosition(sf::Vector2f(700.f, click_circle_y));
                    click_circle.setOrigin(sf::Vector2f(new_radius, new_radius));
                    click_circle.setRadius(new_radius);
                    MinesweeperGame::window->draw(click_circle);

                }
            }

            // HAND ICON DRAW
            {
                float hand_icon_y = hand_icon_sprite.getPosition().y;

                hand_icon_sprite.setPosition(sf::Vector2f(68.f, hand_icon_y));
                MinesweeperGame::window->draw(hand_icon_sprite);

                hand_icon_sprite.setPosition(sf::Vector2f(688.f, hand_icon_y));
                MinesweeperGame::window->draw(hand_icon_sprite);
            }

        }

        MinesweeperGame::window->draw(background_sprite);

        draw_calculations();

        if(curr_step == Steps::SHOW_WINNER) {

            const bool tied_game = s_parameters_buff.first.total == s_parameters_buff.second.total;

            sf::RectangleShape winner_rect(sf::Vector2f(tied_game ? 213.f : 97.f, 296.f));

            winner_rect.setFillColor(sf::Color(0, 0, 0, 0));

            winner_rect.setOutlineColor(sf::Color::Black);

            winner_rect.setOutlineThickness(10.f);

            if     ((s_parameters_buff.first.total > s_parameters_buff.second.total) || tied_game) winner_rect.setPosition(sf::Vector2f(401.f, 58.f));
            else if(s_parameters_buff.second.total > s_parameters_buff.first.total)                winner_rect.setPosition(sf::Vector2f(517.f, 58.f));

            MinesweeperGame::window->draw(winner_rect, winner_rect_shader.get());

        }

        for(auto& button : buttons) MinesweeperGame::window->draw(*button);

    }
}

void GameOverPanel::set_active(bool b) noexcept
{
    is_active = b;

    if(!is_active) {

        should_block_inputs = false;

        curr_step           = Steps::WAIT;

        hand_icon_sprite.setColor(sf::Color(255, 255, 255, 0));

        background_sprite.setPosition(background_sprite.getPosition().x, -520.f);

        buttons[0]->set_sprite_position({buttons[0]->position.x, 389.f - 569.f});
        buttons[1]->set_sprite_position({buttons[1]->position.x, 429.f - 569.f});
        buttons[2]->set_sprite_position({buttons[2]->position.x, 469.f - 569.f});
        buttons[3]->set_sprite_position({buttons[3]->position.x, 398.f - 569.f});
        buttons[4]->set_sprite_position({buttons[4]->position.x, 438.f - 569.f});
        buttons[5]->set_sprite_position({buttons[5]->position.x, 478.f - 569.f});
        buttons[6]->set_sprite_position({buttons[6]->position.x, 524.f - 569.f});
        buttons[7]->set_sprite_position({buttons[7]->position.x, 524.f - 569.f});

        click_circles_alpha   = 0;

        background_rect_alpha = 0.f;

        hand_icon_alpha       = 0.f;

        click_circles_radius  = 0.f;

        go_down_tween.seek(0.f);
        hand_icon_tween.seek(0.f);
        click_circles_tween.seek(0.f);

        click_circle.setRadius(0.f);

        hand_icon_sprite.setScale(1.f, 1.f);

        curr_score_param_step = ScoreParameterStep::FLAGGED_BOMBS;

        s_parameters_buff.first.reset();
        s_parameters_buff.second.reset();

    }

    timer.restart();
}

void GameOverPanel::draw_calculations()
{
    std::ostringstream oss;

    // FLAGGED BOMBS
    {
        calculations_text.setFillColor(sf::Color(119, 255, 0));

        // P1
        oss << '+' << s_parameters_buff.first.flagged_bombs;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(449.f - calculations_text.getLocalBounds().width / 2.f), (122.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << '+' << s_parameters_buff.second.flagged_bombs;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(567.f - calculations_text.getLocalBounds().width / 2.f), (122.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // LAST SQUARE
    {
        calculations_text.setFillColor(sf::Color(119, 255, 0));

        // P1
        oss << '+' << s_parameters_buff.first.last_square;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(449.f - calculations_text.getLocalBounds().width / 2.f), (171.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << '+' << s_parameters_buff.second.last_square;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(567.f - calculations_text.getLocalBounds().width / 2.f), (171.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // MISSED FLAGS
    {
        calculations_text.setFillColor(sf::Color(255, 149, 0));

        // P1
        oss << (s_parameters_buff.first.missed_flags == 0 ? "-" : "") << s_parameters_buff.first.missed_flags;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(451.f - calculations_text.getLocalBounds().width / 2.f), (221.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << (s_parameters_buff.second.missed_flags == 0 ? "-" : "") << s_parameters_buff.second.missed_flags;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(569.f - calculations_text.getLocalBounds().width / 2.f), (221.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // EXPLODED
    {
        calculations_text.setFillColor(sf::Color(255, 149, 0));

        // P1
        oss << (s_parameters_buff.first.exploded == 0 ? "-" : "") << s_parameters_buff.first.exploded;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(451.f - calculations_text.getLocalBounds().width / 2.f), (271.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << (s_parameters_buff.second.exploded == 0 ? "-" : "") << s_parameters_buff.second.exploded;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(569.f - calculations_text.getLocalBounds().width / 2.f), (271.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }

    // TOTAL
    {
        calculations_text.setFillColor(sf::Color(123, 0, 255));

        // P1
        oss << s_parameters_buff.first.total;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(451.f - calculations_text.getLocalBounds().width / 2.f), (321.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P1

        // P2
        oss << s_parameters_buff.second.total;
        calculations_text.setString(oss.str());
        oss.str("");

        calculations_text.setPosition(sf::Vector2f(std::round(569.f - calculations_text.getLocalBounds().width / 2.f), (321.f + (background_sprite.getPosition().y - 49.f))));

        MinesweeperGame::window->draw(calculations_text);
        // P2
    }
}

bool GameOverPanel::count_score_parameter(bool sum, short& value_a, short value_b) noexcept
{
    if(value_a != value_b) {

        value_a += sum ? 1 : -1;

        return false;

    }

    return true;
}
