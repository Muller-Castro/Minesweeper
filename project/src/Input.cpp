#include "Input.h"

#include <SFML/Window/Mouse.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

#include "MinesweeperGame.h"

using namespace Minesweeper;

std::unordered_map<sf::Keyboard::Key, bool> Input::pressed_keys;

bool Input::is_pressed(sf::Keyboard::Key k) noexcept
{
    return MinesweeperGame::window->hasFocus() && sf::Keyboard::isKeyPressed(k);
}

bool Input::is_just_pressed(sf::Keyboard::Key k)
{
    bool is_key_just_pressed = true;

    if(sf::Keyboard::isKeyPressed(k)) {

        if(Input::pressed_keys[k]) is_key_just_pressed = false;

        Input::pressed_keys[k] = true;

    }
    else {

        Input::pressed_keys[k] = false;
        is_key_just_pressed    = false;

    }

    return MinesweeperGame::window->hasFocus() && is_key_just_pressed;
}

void Input::poll_events() noexcept
{
    sf::Event event;

    while(MinesweeperGame::window->pollEvent(event)) {

        switch(event.type) {

            case sf::Event::Closed: {

                MinesweeperGame::window->close();

            } break;

            case sf::Event::Resized: {

                // Resized

            } break;

            case sf::Event::LostFocus: {

                // LostFocus

            } break;

            case sf::Event::GainedFocus: {

                // GainedFocus

            } break;

            case sf::Event::TextEntered: {

                // TextEntered

            } break;

            case sf::Event::KeyPressed: {

                // KeyPressed

            } break;

            case sf::Event::KeyReleased: {

                // KeyReleased

            } break;

            case sf::Event::MouseWheelMoved: {

                // MouseWheelMoved

            } break;

            case sf::Event::MouseWheelScrolled: {

                // MouseWheelScrolled

            } break;

            case sf::Event::MouseButtonPressed: {

                // MouseButtonPressed

            } break;

            case sf::Event::MouseButtonReleased: {

                // MouseButtonReleased

            } break;

            case sf::Event::MouseMoved: {

                // MouseMoved

            } break;

            case sf::Event::MouseEntered: {

                // MouseEntered

            } break;

            case sf::Event::MouseLeft: {

                // MouseLeft

            } break;

            case sf::Event::JoystickButtonPressed: {

                // JoystickButtonPressed

            } break;

            case sf::Event::JoystickButtonReleased: {

                // JoystickButtonReleased

            } break;

            case sf::Event::JoystickMoved: {

                // JoystickMoved

            } break;

            case sf::Event::JoystickConnected: {

                // JoystickConnected

            } break;

            case sf::Event::JoystickDisconnected: {

                // JoystickDisconnected

            } break;

            case sf::Event::TouchBegan: {

                // TouchBegan

            } break;

            case sf::Event::TouchMoved: {

                // TouchMoved

            } break;

            case sf::Event::TouchEnded: {

                // TouchEnded

            } break;

            case sf::Event::SensorChanged: {

                // SensorChanged

            } break;

            case sf::Event::Count: {

                // Count

            } break;

            default: break;

        }

    }
}
