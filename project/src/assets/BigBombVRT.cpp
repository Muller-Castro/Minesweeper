/****************************************************************************************/
/* BigBombVRT.cpp                                                                       */
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

#include "assets/BigBombVRT.h"

std::pair<std::string, std::string> Minesweeper::get_raw_big_bomb_vrt()
{
	return std::make_pair("BigBombVRT", std::string(

        "uniform int time;\n\n"

        "void main()\n"
        "{\n"
            "gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n\n"

            "gl_Position.x += 0.13 * cos(time * 0.2);\n\n"

            "gl_TexCoord[0] = gl_TextureMatrix[0] * gl_MultiTexCoord0;\n\n"

            "gl_FrontColor = gl_Color;\n\n"

            "gl_FrontColor.r = sin(time) * 5.5;\n"
            "gl_FrontColor.g = cos(time) * 5.5;\n"
        "}"

    ));
}
