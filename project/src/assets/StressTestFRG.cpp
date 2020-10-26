#include "assets/StressTestFRG.h"

std::pair<std::string, std::string> Minesweeper::get_raw_stress_test_f_r_g()
{
	return std::make_pair("StressTestFRG", std::string(

        "uniform sampler2D texture;"
        "uniform int time;"

        "void main()"
        "{"
            "// lookup the pixel in the texture"
            "//vec4 pixel = texture2D(texture, gl_TexCoord[0].xy);"

            "// multiply it by the color"
            "//gl_FragColor = vec4(cos(time) + 0.002, sin(time) + 0.008, cos(time) + 0.004, 1.0);"

            "//gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);"
        "}"

    ));
}
