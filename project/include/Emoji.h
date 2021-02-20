/****************************************************************************************/
/* Emoji.h                                                                              */
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

#ifndef EMOJI_H
#define EMOJI_H

#include <array>
#include <memory>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

namespace Minesweeper {

    class Emoji
    {
    public:
        static constexpr unsigned char SMILING    = 0;
        static constexpr unsigned char HUSHED     = 1;
        static constexpr unsigned char SUNGLASSES = 2;
        static constexpr unsigned char BANDAGE    = 3;
        static constexpr unsigned char TOTAL      = 4;

        Emoji(const sf::Vector2f& position);

        void process_inputs();
        void update(float delta);
        void draw();

        void set_face(unsigned char face_type_);

        void restart();

    private:
        unsigned char face_type;

        std::array<std::shared_ptr<sf::Texture>, TOTAL> textures;

        sf::Sprite sprite;
    };

}

#endif // EMOJI_H
