/****************************************************************************************/
/* Input.hpp                                                                            */
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

#include <SFML/Graphics/RenderWindow.hpp>

#include "MinesweeperGame.h"

namespace Minesweeper {

    template<typename DeviceType, typename DeviceInput>
    bool Input::is_pressed(DeviceInput input) noexcept
    {
        return MinesweeperGame::window->hasFocus() && DeviceType{}(input);
    }

    template<typename DeviceType, typename DeviceInput>
    bool Input::is_just_pressed(DeviceInput input)
    {
        bool is_input_just_pressed = true;

        if(DeviceType{}(input)) {

            if(DeviceType::pressed_inputs[input]) is_input_just_pressed = false;

            DeviceType::pressed_inputs[input] = true;

        }
        else {

            DeviceType::pressed_inputs[input] = false;
            is_input_just_pressed = false;

        }

        return MinesweeperGame::window->hasFocus() && is_input_just_pressed;
    }

}
