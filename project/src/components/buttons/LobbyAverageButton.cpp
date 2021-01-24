/****************************************************************************************/
/* LobbyAverageButton.cpp                                                               */
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

#include "components/buttons/LobbyAverageButton.h"

#include "scene/scenes/Lobby.h"
#include "scene/SceneManager.h"

using namespace Minesweeper;

LobbyAverageButton::LobbyAverageButton(Lobby& lobby_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    active(),
    lobby_ref(lobby_ref_)
{
    //
}

void LobbyAverageButton::process_inputs()
{
    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done)) Button::process_inputs();
}

void LobbyAverageButton::update(float d)
{
    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done)) Button::update(d);

    if(lobby_ref.get().listener) lobby_ref.get().send('D', active ? "1" : "0");

    sprite.setColor(active ? sf::Color(0, 255, 0) : sf::Color::White);
}

void LobbyAverageButton::on_button_up()
{
    //
}

void LobbyAverageButton::on_button_down()
{
    //
}

void LobbyAverageButton::on_button_pressed()
{
    lobby_ref.get().change_difficulty(Lobby::Difficulties::AVERAGE, "1");
}

void LobbyAverageButton::set_active(bool b)
{
    active = b;

    if(active) SceneManager::shared_data["DIFFICULTY"] = '1';
}
