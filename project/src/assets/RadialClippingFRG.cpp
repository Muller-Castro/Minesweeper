/****************************************************************************************/
/* RadialClippingFRG.cpp                                                                */
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

#include "assets/RadialClippingFRG.h"

std::pair<std::string, std::string> Minesweeper::get_raw_radial_clipping_frg()
{
	return std::make_pair("RadialClippingFRG", std::string(

        "uniform float in_radius;\n"
        "uniform float in_angle;\n"
        "\n"
        "void main()\n"
        "{\n"
        "	float diameter = in_radius * 2.0;\n"
        "	\n"
        "	vec2 uv = gl_TexCoord[0].xy;\n"
        "	vec2 v2 = vec2(0.0, 1.0);\n"
        "	\n"
        "	float dot_product = uv.x * v2.x + uv.y * v2.y;\n"
        "	\n"
        "	float magnitude   = sqrt(uv.x * uv.x + uv.y * uv.y) * sqrt(v2.x * v2.x + v2.y * v2.y);\n"
        "	\n"
        "	float angle       = dot_product / magnitude;\n"
        "	\n"
        "	float degrees     = degrees(acos(angle));\n"
        "\n"
        "	if(degrees <= abs(in_angle)) gl_FragColor = vec4(0.9, 0.0, 0.0, 1.0);\n"
        "	else                         gl_FragColor = vec4(0.0, 1.0, 1.0, 1.0);\n"
        "}\n"

    ));
}
