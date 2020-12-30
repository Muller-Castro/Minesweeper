/****************************************************************************************/
/* CreditsPanelFRG.cpp                                                                  */
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

#include "assets/CreditsPanelFRG.h"

std::pair<std::string, std::string> Minesweeper::get_raw_credits_panel_frg()
{
	return std::make_pair("CreditsPanelFRG", std::string(

        "uniform float in_time;\n"
        "\n"
        "void main()\n"
        "{\n"
        "	float x = gl_FragCoord.x;\n"
        "	float y = gl_FragCoord.y;\n"
        "	\n"
        "	float speed = 1.5;\n"
        "	\n"
        "	gl_FragColor = vec4(\n"
        "	\n"
        "		y * 0.02 * cos(in_time * speed) + 0.4,\n"
        "		x * 0.002 * sin(in_time * speed) + 0.8,\n"
        "		y * 0.002 * sin(in_time * speed / 0.5) + 0.4,\n"
        "		.5\n"
        "		\n"
        "	);\n"
        "}\n"

    ));
}
