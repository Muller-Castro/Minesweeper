/****************************************************************************************/
/* StartButton.cpp                                                                      */
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

#include "components/buttons/StartButton.h"

#include "scene/SceneManager.h"
#include "scene/scenes/Lobby.h"
#include "components/buttons/LobbyBeginnerButton.h"
#include "components/buttons/LobbyAverageButton.h"
#include "components/buttons/LobbyExpertButton.h"
#include "components/buttons/DurationAButton.h"
#include "components/buttons/DurationBButton.h"
#include "components/buttons/DurationCButton.h"

using namespace Minesweeper;

StartButton::StartButton(Lobby& lobby_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    active(),
    lobby_ref(lobby_ref_)
{
    //
}

void StartButton::process_inputs()
{
    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done) && active) Button::process_inputs();
}

void StartButton::update(float d)
{
    {
        bool x = false, y = false;

        x |= dynamic_cast<LobbyBeginnerButton*>(lobby_ref.get().buttons[Lobby::States::WAITING][0].get())->is_active();
        x |= dynamic_cast<LobbyAverageButton*>(lobby_ref.get().buttons[Lobby::States::WAITING][1].get())->is_active();
        x |= dynamic_cast<LobbyExpertButton*>(lobby_ref.get().buttons[Lobby::States::WAITING][2].get())->is_active();

        y |= dynamic_cast<DurationAButton*>(lobby_ref.get().buttons[Lobby::States::WAITING][3].get())->is_active();
        y |= dynamic_cast<DurationBButton*>(lobby_ref.get().buttons[Lobby::States::WAITING][4].get())->is_active();
        y |= dynamic_cast<DurationCButton*>(lobby_ref.get().buttons[Lobby::States::WAITING][5].get())->is_active();

        active = (x && y);
    }

    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done) && active) Button::update(d);

    if(!lobby_ref.get().listener || (lobby_ref.get().listener && active)) sprite.setColor(sf::Color::White);
    else                                                                  sprite.setColor(sf::Color(51, 51, 51));
}

void StartButton::on_button_up()
{
    //
}

void StartButton::on_button_down()
{
    //
}

void StartButton::on_button_pressed()
{
    //
}
