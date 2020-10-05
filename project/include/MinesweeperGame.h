#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H

#include <string>

namespace sf { // Forward declarations

    class RenderWindow;
    class Color;

}

namespace Minesweeper {

    class MinesweeperGame
    {
    public:
        static sf::RenderWindow* window;

        static int run() noexcept;

    private:
        static void read_color_from_str(const std::string& str, sf::Color& col) noexcept;
        static void process();
    };

}

#endif // MINESWEEPER_GAME_H
