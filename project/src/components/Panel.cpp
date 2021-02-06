/****************************************************************************************/
/* Panel.cpp                                                                            */
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

#include "components/Panel.h"

#include <SFML/Graphics/RenderWindow.hpp>

#include "MinesweeperGame.h"

using namespace Minesweeper;

Panel::Panel() :
    is_active(),
    background_texture(),
    background_sprite(),
    buttons()
{
    //
}

Panel::Panel(const sf::Vector2f& position, const sf::Vector2f& scale, const std::shared_ptr<sf::Texture>& background_texture_, std::vector<std::shared_ptr<Button>>&& buttons_, bool is_active_) :
    is_active(is_active_),
    background_texture(background_texture_),
    background_sprite(),
    buttons(std::move(buttons_))
{
    background_sprite.setPosition(position);
    background_sprite.setScale(scale);

    background_sprite.setTexture(*background_texture);
}

void Panel::process_inputs()
{
    if(is_active) {

        for(auto& button : buttons) {

            button->process_inputs();

            if(button->get_state() == Button::States::RELEASED) is_active = false;

        }

    }
}

void Panel::update(float delta)
{
    if(is_active) {

        for(auto& button : buttons) button->update(delta);

    }
}

void Panel::draw()
{
    if(is_active) {

        MinesweeperGame::window->draw(background_sprite);

        for(auto& button : buttons) MinesweeperGame::window->draw(*button);

    }
}

void Panel::move_panel(const sf::Vector2f& offset)
{
    background_sprite.move(offset);

    for(auto& button : buttons) {

        button->position.x += offset.x;
        button->position.y += offset.y;

    }
}
