/****************************************************************************************/
/* CreditsButton.cpp                                                                    */
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

#include "components/buttons/CreditsButton.h"

#include "scene/scenes/MainMenu.h"
#include "scene/SceneManager.h"

using namespace Minesweeper;

CreditsButton::CreditsButton(MainMenu& mm_ref_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down) :
    Button(position_, scale_, hovered, non_hovered, down),
    mm_ref(std::ref(mm_ref_))
{
    //
}

void CreditsButton::on_button_up()
{
    //
}

void CreditsButton::on_button_down()
{
    //
}

void CreditsButton::on_button_pressed()
{
    SceneManager::call_deferred([&]() {

        mm_ref.get().show_credits = true;
        mm_ref.get().animations.stop();
        mm_ref.get().animations.play("IGNITED_BOMB");

    });
}
