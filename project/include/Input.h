/****************************************************************************************/
/* Input.h                                                                              */
/****************************************************************************************/
/* Copyright (c) 2020-2021 Muller Castro.                                               */
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

#ifndef INPUT_H
#define INPUT_H

#include <unordered_map>

#include <SFML/Window/Keyboard.hpp>
#include <SFML/Window/Mouse.hpp>

namespace Minesweeper {

    class Input
    {
    public:
        struct Key
        {
            static std::unordered_map<sf::Keyboard::Key, bool> pressed_inputs;

            bool operator()(sf::Keyboard::Key k) const noexcept { return sf::Keyboard::isKeyPressed(k); }
        };

        struct Mouse
        {
            static std::unordered_map<sf::Mouse::Button, bool> pressed_inputs;

            bool operator()(sf::Mouse::Button b) const noexcept { return sf::Mouse::isButtonPressed(b); }
        };

        template<typename DeviceType, typename DeviceInput> static bool is_pressed(DeviceInput) noexcept;
        template<typename DeviceType, typename DeviceInput> static bool is_just_pressed(DeviceInput);

        static void poll_events() noexcept;
    };

}

#include "Input.hpp"

#endif // INPUT_H
