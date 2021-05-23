/****************************************************************************************/
/* GameOverDurationBButton.cpp                                                          */
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

#include "components/buttons/GameOverDurationBButton.h"

#include "components/panels/GameOverPanel.h"
#include "scene/SceneManager.h"
#include "scene/scenes/Game.h"

using namespace Minesweeper;

GameOverDurationBButton::GameOverDurationBButton(GameOverPanel& go_panel_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    go_panel_ref(go_panel_ref_)
{
    //
}

void GameOverDurationBButton::process_inputs()
{
    const bool is_host = go_panel_ref.get().game_ref.get().conn_info.is_host;

    if(is_host && !go_panel_ref.get().should_block_inputs) Button::process_inputs();
}

void GameOverDurationBButton::update(float delta)
{
    const bool is_host             = go_panel_ref.get().game_ref.get().conn_info.is_host;
    const bool should_block_inputs = go_panel_ref.get().should_block_inputs;

    const bool n_blocked = is_host && !should_block_inputs;

    if(SceneManager::shared_data["DURATION"] == "N") sprite.setColor(sf::Color(0, n_blocked ? 255 : 120, 0));
    else                                             sprite.setColor(n_blocked ? sf::Color::White : sf::Color(120, 120, 120));

    Button::update(delta);
}

void GameOverDurationBButton::on_button_up()
{
    //
}

void GameOverDurationBButton::on_button_down()
{
    //
}

void GameOverDurationBButton::on_button_pressed()
{
    evaluate_button();

    go_panel_ref.get().game_ref.get().send(true, 'H', "dur1");
}

void GameOverDurationBButton::evaluate_button()
{
    const bool is_host = go_panel_ref.get().game_ref.get().conn_info.is_host;

    sprite.setColor(sf::Color(0, is_host ? 255 : 120, 0));

    SceneManager::shared_data["DURATION"] = 'N';
}
