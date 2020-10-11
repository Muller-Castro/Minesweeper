/****************************************************************************************/
/* SpriteWrapper.h                                                                      */
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

#ifndef SPRITE_WRAPPER_H
#define SPRITE_WRAPPER_H

#include <tuple>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

namespace Minesweeper {

    // Since sf::Sprite class just stores a pointer to the underlying texture in the sf::Texture class, then it's better to tie
    // their life-time together (RAII)
    struct SpriteWrapper
    {
        sf::Texture texture;
        sf::Sprite sprite;

        SpriteWrapper(const std::string& file_name, const sf::IntRect& area = sf::IntRect());
        SpriteWrapper(const std::tuple<std::string, const void*, size_t>& raw_texture, const sf::IntRect& area = sf::IntRect());

        ~SpriteWrapper()
        {
            //
        }
    };

}

#endif // SPRITE_WRAPPER_H
