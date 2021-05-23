/****************************************************************************************/
/* RecordGridFRG.cpp                                                                    */
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

#include "assets/RecordGridFRG.h"

std::pair<std::string, std::string> Minesweeper::get_raw_record_grid_frg()
{
	return std::make_pair("RecordGridFRG", std::string(

        "uniform sampler2D in_texture;\n"
        "\n"
        "uniform float in_time;\n"
        "\n"
        "float rand(in vec2 co)\n"
        "{\n"
        "	return fract(sin(dot(co.xy ,vec2(12.9898,78.233))) * 43758.5453);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "	vec4 pixel = texture2D(in_texture, gl_TexCoord[0].xy);\n"
        "	\n"
        "	if(pixel.a <= 0.0) {\n"
        "		\n"
        "		if(rand(vec2(gl_TexCoord[0].x * in_time, gl_TexCoord[0].y * in_time)) < 0.8) {\n"
        "			\n"
        "			gl_FragColor = vec4(.3, .0, .6, 1.0);\n"
        "			\n"
        "		}else {\n"
        "			\n"
        "			gl_FragColor = vec4(.8, .0, 1.0, 1.0);\n"
        "			\n"
        "		}\n"
        "		\n"
        "	}else if((pixel.r >= 1.0) && (pixel.g >= 1.0)) {\n"
        "		\n"
        "		if(rand(vec2(gl_TexCoord[0].y * in_time, gl_TexCoord[0].x * in_time)) < 0.5) {\n"
        "			\n"
        "			gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);\n"
        "			\n"
        "		}else {\n"
        "			\n"
        "			gl_FragColor = vec4(.6, .6, .6, 1.0);\n"
        "			\n"
        "		}\n"
        "	\n"
        "	}else {\n"
        "		\n"
        "		gl_FragColor = vec4(0, 0, 0, 0);\n"
        "		\n"
        "	}\n"
        "}\n"

    ));
}
