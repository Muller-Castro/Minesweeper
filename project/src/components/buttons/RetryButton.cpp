/****************************************************************************************/
/* RetryButton.cpp                                                                      */
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

#include "components/buttons/RetryButton.h"

#include "components/panels/GameOverPanel.h"
#include "scene/scenes/Game.h"
#include "io/ResourceLoader.h"

using namespace Minesweeper;

RetryButton::RetryButton(GameOverPanel& go_panel_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    go_panel_ref(go_panel_ref_),
    waiting_for_opponent_tex()
{
    waiting_for_opponent_tex = ResourceLoader::load<sf::Texture>("assets/textures/WaitingForOpponent.png");
}

void RetryButton::process_inputs()
{
    if(!go_panel_ref.get().should_block_inputs) Button::process_inputs();
}

void RetryButton::on_button_up()
{
    //
}

void RetryButton::on_button_down()
{
    //
}

void RetryButton::on_button_pressed()
{
    go_panel_ref.get().should_block_inputs = true;

    sprite.setTexture(*waiting_for_opponent_tex);

    sprite.setColor(sf::Color(102, 255, 102));

    go_panel_ref.get().game_ref.get().send(true, 'I', "a2retry");
}
