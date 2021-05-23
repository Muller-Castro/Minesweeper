/****************************************************************************************/
/* DurationBButton.cpp                                                                  */
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

#include "components/buttons/DurationBButton.h"

#include "scene/scenes/Lobby.h"
#include "scene/SceneManager.h"
#include "components/buttons/StartButton.h"

using namespace Minesweeper;

DurationBButton::DurationBButton(Lobby& lobby_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    active(),
    lobby_ref(lobby_ref_)
{
    //
}

void DurationBButton::process_inputs()
{
    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done)) Button::process_inputs();
}

void DurationBButton::update(float d)
{
    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done)) Button::update(d);

    if(lobby_ref.get().listener) lobby_ref.get().send('J', active ? "1" : "0");

    sprite.setColor(active ? sf::Color(0, 255, 0) : sf::Color::White);
}

void DurationBButton::on_button_up()
{
    //
}

void DurationBButton::on_button_down()
{
    //
}

void DurationBButton::on_button_pressed()
{
    lobby_ref.get().change_duration(Lobby::Durations::NORMAL, "1");

    SceneManager::call_deferred([&]() {

        dynamic_cast<StartButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][6]).play_counter();

    });
}

void DurationBButton::set_active(bool b)
{
    bool past_state = active;

    active          = b;

    if(active) {

        SceneManager::shared_data["DURATION"] = 'N';

        if(!past_state) lobby_ref.get().play_sound(lobby_ref.get().mm_btn_pressed_sfx);

    }
}
