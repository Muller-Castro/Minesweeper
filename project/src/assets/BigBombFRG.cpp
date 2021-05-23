/****************************************************************************************/
/* BigBombFRG.cpp                                                                       */
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

#include "assets/BigBombFRG.h"

std::pair<std::string, std::string> Minesweeper::get_raw_big_bomb_frg()
{
	return std::make_pair("BigBombFRG", std::string(

        "uniform sampler2D texture;\n"
        "uniform int time;\n"
        "uniform bool is_stroke;\n\n"

        "void main()\n"
        "{\n"
            "// lookup the pixel in the texture\n"
            "vec4 pixel = texture2D(texture, gl_TexCoord[0].xy);\n\n"

            "if(is_stroke) {\n\n"

                "if(pixel.a <= 0) gl_FragColor = pixel;\n"
                "else {\n\n"

                    "gl_FragColor = vec4(1.0, 1.0, 1.0, 0.5);\n\n"

                    "gl_FragColor.r = sin(time) * 5.5;\n"
                    "gl_FragColor.g = cos(time) * 5.5;\n\n"

                "}\n\n"

            "}else {\n\n"

                "// multiply it by the color\n"
                "gl_FragColor = gl_Color * pixel;\n\n"

            "}\n\n"

            "// multiply it by the color\n"
            "//gl_FragColor = gl_Color * pixel;\n\n"

            "// multiply it by the color\n"
            "//gl_FragColor = vec4(cos(time) + 0.002, sin(time) + 0.008, cos(time) + 0.004, 1.0);\n\n"

            "//gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);\n"
        "}"

    ));
}
