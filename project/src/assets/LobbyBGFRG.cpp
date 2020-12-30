/****************************************************************************************/
/* LobbyBGFRG.cpp                                                                       */
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

#include "assets/LobbyBGFRG.h"

std::pair<std::string, std::string> Minesweeper::get_raw_lobby_bg_frg()
{
	return std::make_pair("LobbyBGFRG", std::string(

        "uniform sampler2D in_texture;\n"
        "uniform vec2      in_resolution;\n"
        "uniform float     in_width;\n"
        "uniform float     in_time;\n"
        "\n"
        "float rand(in vec2 co) {\n"
        "	\n"
        "	return fract(sin(dot(co.xy ,vec2(12.9898,78.233))) * 43758.5453);\n"
        "	\n"
        "}\n"
        "\n"
        "void main() {\n"
        "	\n"
        "    float angle = in_time;\n"
        "	\n"
        "    vec2 red_offset = vec2(cos(angle), sin(angle));\n"
        "    angle += radians(120.0);\n"
        "	\n"
        "    vec2 green_offset = vec2(cos(angle), sin(angle));\n"
        "    angle += radians(120.0);\n"
        "	\n"
        "    vec2 blue_offset = vec2(cos(angle), sin(angle));\n"
        "\n"
        "    float offset_size = 0.1 * length(gl_FragCoord.xy - 0.5 * in_resolution);\n"
        "\n"
        "    offset_size *= in_width / in_resolution.x;\n"
        "\n"
        "    gl_FragColor = vec4(\n"
        "	\n"
        "		texture2D(in_texture, offset_size * red_offset   / in_resolution).r - cos(in_time + rand(vec2(.0, 10.0))),\n"
        "		texture2D(in_texture, offset_size * green_offset / in_resolution).g + sin(in_time + rand(vec2(.0, 5.0))) ,\n"
        "		texture2D(in_texture, offset_size * blue_offset  / in_resolution).b + sin(in_time + rand(vec2(.0, 10.0))),\n"
        "		1.0\n"
        "		\n"
        "	);\n"
        "	\n"
        "}\n"

    ));
}

