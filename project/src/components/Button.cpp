/****************************************************************************************/
/* Button.cpp                                                                           */
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

#include "components/Button.h"

#include <SFML/Graphics/RenderTarget.hpp>
#ifdef __DEBUG__
#include <SFML/Graphics/RectangleShape.hpp>

#include "GlobalConfigurations.h"
#endif // __DEBUG__
#include "MinesweeperGame.h"
#include "Input.h"

using namespace Minesweeper;

sf::Sound Button::sound;

Button::Button(Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    position(position_), scale(scale_),
    state(States::NONE),
    bounding_box(),
    sprite(),
    current_texture(Button::N_HOVERED),
    enabled(enabled_),
    textures(),
    sound_buffers()
{
    textures[Button::HOVERED]   = hovered;
    textures[Button::N_HOVERED] = non_hovered;
    textures[Button::DOWN]      = down;

    sound_buffers[Button::HOVERED_SFX] = {hovered_sfx, false};
    sound_buffers[Button::PRESSED_SFX] = {pressed_sfx, false};

    Button::sound.setVolume(20.f);

    sprite.setTexture(*textures[current_texture]);

    auto current_texture_size = (*textures[current_texture]).getSize();

    current_texture_size.x *= scale.x;
    current_texture_size.y *= scale.y;

    sprite.setOrigin(current_texture_size.x / 2, current_texture_size.y / 2);
    sprite.setPosition(position);
    sprite.setScale(scale);
}

void Button::process_inputs()
{
    set_state();
}

void Button::update(float d)
{
    dispatch_actions();

    {
        auto current_texture_size = (*textures[current_texture]).getSize();

        current_texture_size.x *= scale.x;
        current_texture_size.y *= scale.y;

        sprite.setOrigin(current_texture_size.x / 2, current_texture_size.y / 2);

        if(state != States::PRESSED) {
            sf::Vector2f new_position = position;

            new_position.x -= current_texture_size.x * scale.x / 2;
            new_position.y -= current_texture_size.y * scale.y / 2;

            bounding_box = sf::FloatRect(new_position, sf::Vector2f(current_texture_size.x, current_texture_size.y));
        }
    }

    sprite.setPosition(position);
    sprite.setScale(scale);
}

void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(sprite, states);

#ifdef __DEBUG__
    if(GlobalConfigurations::show_bb) {

        sf::RectangleShape bb_shape(sf::Vector2f(bounding_box.width, bounding_box.height));

        bb_shape.setPosition(sf::Vector2f(bounding_box.left, bounding_box.top));

        sf::Color new_bb_shape_col;

        if(state == States::PRESSED) new_bb_shape_col = sf::Color::Yellow;
        else                         new_bb_shape_col = sf::Color::Blue;

        new_bb_shape_col.a = static_cast<unsigned char>(-1) / 2;

        bb_shape.setFillColor(new_bb_shape_col);

        target.draw(bb_shape);

    }
#endif // __DEBUG__
}

void Button::set_current_texture(unsigned char texture)
{
    current_texture = texture;
    sprite.setTexture(*textures[current_texture], true);
}

void Button::set_state() noexcept
{
    sf::Vector2i mouse_position = sf::Mouse::getPosition(*MinesweeperGame::window);

    bool mouse_entered = bounding_box.contains(sf::Vector2f(mouse_position.x, mouse_position.y));

    const bool LEFT_BUTTON_PRESSED   = Input::is_pressed<Input::Mouse>(sf::Mouse::Left);
    const bool MIDDLE_BUTTON_PRESSED = Input::is_pressed<Input::Mouse>(sf::Mouse::Middle);
    const bool RIGHT_BUTTON_PRESSED  = Input::is_pressed<Input::Mouse>(sf::Mouse::Right);

    bool mouse_button_pressed = false;

    switch(enabled) {

        case Enabled::LEFT:         { mouse_button_pressed = LEFT_BUTTON_PRESSED;                                                   } break;
        case Enabled::MIDDLE:       { mouse_button_pressed = MIDDLE_BUTTON_PRESSED;                                                 } break;
        case Enabled::RIGHT:        { mouse_button_pressed = RIGHT_BUTTON_PRESSED;                                                  } break;
        case Enabled::LEFT_RIGHT:   { mouse_button_pressed = LEFT_BUTTON_PRESSED  || RIGHT_BUTTON_PRESSED;                          } break;
        case Enabled::LEFT_MIDDLE:  { mouse_button_pressed = LEFT_BUTTON_PRESSED  || MIDDLE_BUTTON_PRESSED;                         } break;
        case Enabled::RIGHT_MIDDLE: { mouse_button_pressed = RIGHT_BUTTON_PRESSED || MIDDLE_BUTTON_PRESSED;                         } break;
        case Enabled::ALL:          { mouse_button_pressed = LEFT_BUTTON_PRESSED  || MIDDLE_BUTTON_PRESSED || RIGHT_BUTTON_PRESSED; } break;

        case Enabled::NONE:
        default: break;

    }

    if(MinesweeperGame::window->hasFocus() && mouse_entered && mouse_button_pressed) {

        state = States::PRESSED;

    }
    else if(MinesweeperGame::window->hasFocus() && mouse_entered && !mouse_button_pressed) {

        if(state == States::PRESSED) {

            state = States::RELEASED;

            if(sound_buffers[Button::PRESSED_SFX].first && !sound_buffers[Button::PRESSED_SFX].second) {

                Button::sound.stop();

                float past_volume = Button::sound.getVolume();

                Button::sound.setVolume(100.f);
                Button::sound.setBuffer(*sound_buffers[Button::PRESSED_SFX].first);
                Button::sound.play();

                Button::sound.setVolume(past_volume);

//                sound_buffers[Button::PRESSED_SFX].second = true;

            }

        }
        else {

            state = States::HOVERED;

            if(sound_buffers[Button::HOVERED_SFX].first && !sound_buffers[Button::HOVERED_SFX].second) {

                if(Button::sound.getStatus() != sf::Sound::Playing) {

//                    Button::sound.stop();
                    Button::sound.setBuffer(*sound_buffers[Button::HOVERED_SFX].first);
                    Button::sound.play();

                }

                sound_buffers[Button::HOVERED_SFX].second = true;

            }

        }

    }else {

        state = States::NONE;

        sound_buffers[Button::HOVERED_SFX].second = false;

    }
}

void Button::dispatch_actions()
{
    switch(state) {

        case States::NONE: {

            if(current_texture != N_HOVERED) set_current_texture(N_HOVERED);

            on_button_up();

        } break;

        case States::HOVERED: {

            if(current_texture != HOVERED) set_current_texture(HOVERED);

            on_button_up();

        } break;

        case States::PRESSED: {

            if(current_texture != DOWN) set_current_texture(DOWN);

            on_button_down();

        } break;

        case States::RELEASED: {

            if(current_texture != N_HOVERED) set_current_texture(N_HOVERED);

            on_button_up();
            on_button_pressed();

        } break;

        default: break;

    }
}
