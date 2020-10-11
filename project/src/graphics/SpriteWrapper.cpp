/****************************************************************************************/
/* SpriteWrapper.cpp                                                                    */
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

#include "graphics/SpriteWrapper.h"

#include <stdexcept>

using namespace Minesweeper;

SpriteWrapper::SpriteWrapper(const std::string& file_name, const sf::IntRect& area) : texture(), sprite()
{
    if(!texture.loadFromFile(file_name, area)) throw std::runtime_error("Failed to load \"" + file_name + "\"");

    sprite.setTexture(texture);
}

SpriteWrapper::SpriteWrapper(const std::tuple<std::string, const void*, size_t>& raw_texture, const sf::IntRect& area) : texture(), sprite(texture)
{
    if(!texture.loadFromMemory(std::get<1>(raw_texture), std::get<2>(raw_texture), area)) throw std::runtime_error("Failed to load \"" + std::get<0>(raw_texture) + "\"");
}
