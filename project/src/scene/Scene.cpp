/****************************************************************************************/
/* Scene.cpp                                                                            */
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

#include "scene/Scene.h"

#include <SFML/Graphics/RenderWindow.hpp>

#include "MinesweeperGame.h"

using namespace Minesweeper;

Scene::Scene() : sprite_layers()
{

}

Scene::~Scene() noexcept
{

}

void Scene::draw_on_layer(size_t idx, const SpriteWrapper& sprite_wrapper, const sf::RenderStates& rs)
{
    sprite_layers.emplace(idx, std::make_pair(sprite_wrapper, rs));
}

void Scene::dispatch_layers_draws()
{
    while(!sprite_layers.empty()) {

        const auto& sprite_layer = sprite_layers.top();

        MinesweeperGame::window->draw(sprite_layer.second.first.sprite, sprite_layer.second.second);

        sprite_layers.pop();

    }
}