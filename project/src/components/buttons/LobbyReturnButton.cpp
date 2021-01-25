/****************************************************************************************/
/* LobbyReturnButton.cpp                                                                */
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

#include "components/buttons/LobbyReturnButton.h"

#include "MinesweeperGame.h"
#include "scene/SceneManager.h"
#include "scene/scenes/Lobby.h"
#include "components/buttons/StartButton.h"

using namespace Minesweeper;

LobbyReturnButton::LobbyReturnButton(Lobby& lobby_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    lobby_ref(lobby_ref_)
{
    //
}

void LobbyReturnButton::on_button_up()
{
    //
}

void LobbyReturnButton::on_button_down()
{
    //
}

void LobbyReturnButton::on_button_pressed()
{
    switch(lobby_ref.get().current_state) {

        case Lobby::States::REGISTRATION: {

            SceneManager::change_scene_to(SceneManager::Scenes::MAIN_MENU);

        } break;

        case Lobby::States::CONNECTING: {

            //

        } break;

        case Lobby::States::WAITING: {

            lobby_ref.get().current_state = Lobby::States::REGISTRATION;

            if(lobby_ref.get().listener) {

                lobby_ref.get().listener->close();
                lobby_ref.get().listener.reset();

            }

            lobby_ref.get().reset_config_buttons();

            dynamic_cast<StartButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][6]).stop_counter();

            MinesweeperGame::tcp_socket.setBlocking(true);
            MinesweeperGame::tcp_socket.disconnect();

        } break;

        default: break;

    }
}
