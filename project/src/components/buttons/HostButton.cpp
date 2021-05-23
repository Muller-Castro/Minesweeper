/****************************************************************************************/
/* HostButton.cpp                                                                       */
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

#include "components/buttons/HostButton.h"

#include <string>

#include "MinesweeperGame.h"
#include "scene/SceneManager.h"
#include "scene/scenes/Lobby.h"

using namespace Minesweeper;

HostButton::HostButton(Lobby& lobby, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    lobby_ref(lobby)
{
    //
}

void HostButton::on_button_up()
{
    //
}

void HostButton::on_button_down()
{
    //
}

void HostButton::on_button_pressed()
{
    if(lobby_ref.get().evaluate_text_edits()) {

        if(lobby_ref.get().evaluate_port()) {

            lobby_ref.get().listener = std::make_unique<sf::TcpListener>();

            if(lobby_ref.get().listener->listen(std::stoul(lobby_ref.get().text_edits[1].get_text_str())) != sf::Socket::Done) {

                SceneManager::call_deferred([&]() {

                    lobby_ref.get().panels["F_2_HOST"].set_active(true);

                });

                lobby_ref.get().listener.reset();

            }else {

                SceneManager::shared_data["H"] = "1";

                SceneManager::call_deferred([&]() {

                    lobby_ref.get().current_state = Lobby::States::WAITING;

                });

                MinesweeperGame::peer_info.name = lobby_ref.get().text_edits[0].get_text_str();
                MinesweeperGame::peer_info.port = lobby_ref.get().text_edits[1].get_text_str();

                lobby_ref.get().arrow[0].position = sf::Vector2f(195.f, 57.f);
                lobby_ref.get().arrow[1].position = sf::Vector2f(265.f, 57.f);
                lobby_ref.get().arrow[2].position = sf::Vector2f(230.f, 93.f);

                lobby_ref.get().listener->setBlocking(false);

            }

        }

    }
}
