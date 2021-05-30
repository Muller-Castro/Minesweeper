/****************************************************************************************/
/* Input.cpp                                                                            */
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

#include "Input.h"

#include <SFML/Window/Event.hpp>

#include "components/TextEdit.h"

using namespace Minesweeper;

std::unordered_map<sf::Keyboard::Key, bool> Input::Key::pressed_inputs;
std::unordered_map<sf::Mouse::Button, bool> Input::Mouse::pressed_inputs;

void Input::poll_events() noexcept
{
    sf::Event event;

    TextEdit::ascii_char = '\0';
    TextEdit::command    = sf::Keyboard::Unknown;

    while(MinesweeperGame::window->pollEvent(event)) {

        switch(event.type) {

            case sf::Event::Closed: {

                MinesweeperGame::is_running = false;

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

                if(
                   ((/* Backspace */ event.text.unicode == 8) || (/* hor. tab */ event.text.unicode == 9)) ||
                   ((event.text.unicode > 31) && (event.text.unicode < 128))
                ) {

                    TextEdit::ascii_char = static_cast<char>(event.text.unicode);

                }

            } break;

            case sf::Event::KeyPressed: {

                TextEdit::command = event.key.code;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wswitch"
#pragma GCC diagnostic ignored "-Wswitch-enum"
                switch(event.key.code) {

                    case sf::Keyboard::Delete: {} break;
                    case sf::Keyboard::Home:   {} break;
                    case sf::Keyboard::End:    {} break;
                    case sf::Keyboard::Left:   {} break;
                    case sf::Keyboard::Right:  {} break;

                    case sf::Keyboard::C:
                    case sf::Keyboard::V:      { if(!event.key.control) TextEdit::command = sf::Keyboard::Unknown; } break;

                    default: { TextEdit::command = sf::Keyboard::Unknown; } break;

                }
#pragma GCC diagnostic pop

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
