/****************************************************************************************/
/* TestZone.cpp                                                                         */
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

#include "scene/scenes/TestZone.h"

#include "io/ResourceLoader.h"

using namespace Minesweeper;

TestZone::TestZone() :
    ignited_bomb_texture(),
    ignited_bomb_sprite(),
    animation_player(

        {
            Animation("IGNITED_BOMB", 3.f, {

                KeyFrame(0.f, [&]() {

                    ignited_bomb_sprite.setTextureRect(sf::IntRect(0, 0, 64, 64));

                }),

                KeyFrame(1.f, [&]() {

                    ignited_bomb_sprite.setTextureRect(sf::IntRect(64, 0, 64, 64));

                }),

                KeyFrame(2.f, [&]() {

                    ignited_bomb_sprite.setTextureRect(sf::IntRect(128, 0, 64, 64));

                }),

            })
        },

        "IGNITED_BOMB", true, true, 2.f

    )
{
    ignited_bomb_texture = ResourceLoader::load<sf::Texture>("assets/textures/BombSpritesheet.png");

    ignited_bomb_sprite.setTexture(*ignited_bomb_texture);
    ignited_bomb_sprite.setPosition(400.f, 300.f);

    animation_player.play();
}

TestZone::~TestZone()
{
    //
}

void TestZone::process_inputs()
{
    //
}

void TestZone::update(float delta)
{
    animation_player.update(delta);
}

void TestZone::draw()
{
    draw_on_layer(0, ignited_bomb_sprite);
}
