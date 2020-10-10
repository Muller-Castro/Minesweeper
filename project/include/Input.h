#ifndef INPUT_H
#define INPUT_H

#include <unordered_map>

#include <SFML/Window/Keyboard.hpp>

namespace Minesweeper {

    class Input
    {
    public:
        static bool is_pressed(sf::Keyboard::Key) noexcept;
        static bool is_just_pressed(sf::Keyboard::Key);

        static void poll_events() noexcept;

    private:
        static std::unordered_map<sf::Keyboard::Key, bool> pressed_keys;
    };

}

#endif // INPUT_H
