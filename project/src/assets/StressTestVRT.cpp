#include "assets/StressTestVRT.h"

std::pair<std::string, std::string> Minesweeper::get_raw_stress_test_v_r_t()
{
	return std::make_pair("StressTestVRT", std::string(

        "uniform int time;"

        "void main()"
        "{"
            "gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;"

            "gl_Position.x += 0.13 * cos(time);"

            "gl_TexCoord[0] = gl_TextureMatrix[0] * gl_MultiTexCoord0;"

            "gl_FrontColor = gl_Color;"

            "gl_FrontColor.r = sin(time) * 5.5;"
            "gl_FrontColor.g = cos(time) * 5.5;"
        "}"

    ));
}
