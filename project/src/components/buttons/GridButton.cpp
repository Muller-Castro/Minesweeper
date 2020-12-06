/****************************************************************************************/
/* GridButton.cpp                                                                       */
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

#include "components/buttons/GridButton.h"

#include <SFML/Graphics/RenderWindow.hpp>

#include "scene/SceneManager.h"

using namespace Minesweeper;

GridButton::GridButton(Types type_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::Texture>& icon, const std::shared_ptr<sf::Texture>& p1_flag, const std::shared_ptr<sf::Texture>& p2_flag, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    disabled(),
    type(type_),
    icon_texture(icon),
    p1_flag_texture(p1_flag),
    p2_flag_texture(p2_flag),
    icon_sprite(),
    p1_flag_sprite(*p1_flag_texture),
    p2_flag_sprite(*p2_flag_texture),
    animations({}, "IGNITED_BOMB")
{
    if(icon_texture) {

        icon_sprite.setTexture(*icon_texture);

        if(type == Types::BOMB) {

            animations.add_animations(

                {
                    Animation("IGNITED_BOMB", 0.75f, {

                        KeyFrame(0.f, [&]() {

                            icon_sprite.setTextureRect(sf::IntRect(0, 0, 16, 16));

                        }),

                        KeyFrame(0.25f, [&]() {

                            icon_sprite.setTextureRect(sf::IntRect(16, 0, 16, 16));

                        }),

                        KeyFrame(0.5f, [&]() {

                            icon_sprite.setTextureRect(sf::IntRect(32, 0, 16, 16));

                        }),

                    })
                }

            );

            icon_sprite.setOrigin(8.f, 8.f);

#ifdef __DEBUG__
            animations.play("IGNITED_BOMB");
#endif // __DEBUG__

        }else {

            icon_sprite.setOrigin((icon_texture->getSize().x * scale.x) / 2, (icon_texture->getSize().y * scale.y) / 2);

        }

    }
}

void GridButton::process_inputs()
{
    if(!disabled) Button::process_inputs();
}

void GridButton::update(float delta)
{
    if(!disabled) {

        Button::update(delta);

        if(state != States::PRESSED) {

            bounding_box.top    += 1.f;
            bounding_box.left   += 1.f;
            bounding_box.width  -= 1.f;
            bounding_box.height -= 1.f;

        }

    }
#ifndef __DEBUG__
    else {
#endif // __DEBUG__

        animations.update(delta);

#ifndef __DEBUG__
    }
#endif // __DEBUG__

    icon_sprite.setPosition(position);
}

void GridButton::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    Button::draw(target, states);

#ifndef __DEBUG__
    if(disabled) {
#endif // __DEBUG__

        target.draw(icon_sprite, states);

#ifndef __DEBUG__
    }
#endif // __DEBUG__
}

void GridButton::on_button_up()
{
    //
}

void GridButton::on_button_down()
{
    //
}

void GridButton::on_button_pressed()
{
    set_current_texture(DOWN);
    sprite.setColor(sf::Color(200, 200, 200));
//    sprite.setColor(sf::Color(255, 255, 255));

    SceneManager::call_deferred([&]() {

        disabled = true;

        if(type == Types::BOMB) animations.play("IGNITED_BOMB");

    });
}
