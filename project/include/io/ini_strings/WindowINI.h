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
