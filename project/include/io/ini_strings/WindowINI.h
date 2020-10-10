/****************************************************************************************/
/* WindowINI.h                                                                          */
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

#ifndef WINDOW_INI_H
#define WINDOW_INI_H

#include <utility>

static const std::pair<std::string, std::string> win_ini = std::make_pair(
    "Window.ini",

    /////////////////////////

    "// Comments currently only support separate lines\n"

    "// Background colors supported: BLACK, WHITE, RED, GREEN, BLUE, YELLOW, MAGENTA, CYAN, TRANSPARENT\n"

    "[WINDOW]\n"
    "Title           = Minesweeper\n"
    "Width           = 1280\n"
    "Height          = 720\n"
    "BackgroundColor = GREEN\n"
);

#endif // WINDOW_INI_H
