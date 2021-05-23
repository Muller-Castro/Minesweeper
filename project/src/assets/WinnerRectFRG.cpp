/****************************************************************************************/
/* WinnerRectFRG.cpp                                                                    */
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

#include "assets/WinnerRectFRG.h"

std::pair<std::string, std::string> Minesweeper::get_raw_winner_rect_frg()
{
	return std::make_pair("WinnerRectFRG", std::string(

        "uniform float in_time;\n"
        "\n"
        "uniform float speed        = 0.2;\n"
        "uniform float ring_scale   = 1.4;\n"
        "uniform float wave_scale   = 2.454;\n"
        "uniform float random_scale = 4.6;\n"
        "uniform float noise_scale  = 0.07;\n"
        "\n"
        "vec3 hsv2rgb(float h, float s, float v)\n"
        "{\n"
        "	return (\n"
        "		(\n"
        "			clamp(\n"
        "				abs(fract(h + vec3(0.0, 2.0, 1.0) / 3.0) * 6.0 - 3.0) - 1.0\n"
        "			,	0.0\n"
        "			,	1.0\n"
        "			) - 1.0\n"
        "		) * s + 1.0\n"
        "	) * v;\n"
        "}\n"
        "\n"
        "vec2 random(vec2 pos)\n"
        "{ \n"
        "	return fract(\n"
        "		sin(\n"
        "			vec2(\n"
        "				dot(pos, vec2(12.9898,78.233))\n"
        "			,	dot(pos, vec2(-148.998,-65.233))\n"
        "			)\n"
        "		) * 43758.5453\n"
        "	);\n"
        "}\n"
        "\n"
        "float value_noise(vec2 pos)\n"
        "{\n"
        "	vec2 p = floor(pos);\n"
        "	vec2 f = fract(pos);\n"
        "\n"
        "	float v00 = random(p + vec2(0.0, 0.0)).x;\n"
        "	float v10 = random(p + vec2(1.0, 0.0)).x;\n"
        "	float v01 = random(p + vec2(0.0, 1.0)).x;\n"
        "	float v11 = random(p + vec2(1.0, 1.0)).x;\n"
        "\n"
        "	vec2 u = f * f * (3.0 - 2.0 * f);\n"
        "\n"
        "	return mix(mix(v00, v10, u.x), mix(v01, v11, u.x), u.y);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "	if(gl_Color.a > 0.0) {\n"
        "		\n"
        "		vec2 UV = gl_FragCoord.xy / (800 * 600);\n"
        "		\n"
        "		vec2 shift_uv = UV;\n"
        "		shift_uv.x   += value_noise(UV * random_scale + sin(in_time * speed));\n"
        "		shift_uv.y   += sin(cos(in_time) * speed);\n"
        "		float x       = shift_uv.x + sin(shift_uv.y * wave_scale);\n"
        "		float f       = mod(x * ring_scale + random(UV).x * noise_scale, 1.0);\n"
        "\n"
        "		vec3 output_color = hsv2rgb(f, 1.0, 1.0);\n"
        "\n"
        "		gl_FragColor = vec4(output_color.r, output_color.g, output_color.b, 1.0);\n"
        "		\n"
        "	}else {\n"
        "		\n"
        "		gl_FragColor = gl_Color;\n"
        "		\n"
        "	}\n"
        "}\n"

    ));
}
