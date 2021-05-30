/****************************************************************************************/
/* StartButton.cpp                                                                      */
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

#include "components/buttons/StartButton.h"

#include <string>
#include <cmath>

#include <SFML/Graphics/RenderWindow.hpp>

#include "MinesweeperGame.h"
#include "scene/SceneManager.h"
#include "scene/scenes/Lobby.h"
#include "io/ResourceLoader.h"
#include "components/buttons/LobbyBeginnerButton.h"
#include "components/buttons/LobbyAverageButton.h"
#include "components/buttons/LobbyExpertButton.h"
#include "components/buttons/DurationAButton.h"
#include "components/buttons/DurationBButton.h"
#include "components/buttons/DurationCButton.h"
#ifdef __S_RELEASE__
#include "assets/RadialClippingFRG.h"
#include "assets/INET.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

StartButton::StartButton(Lobby& lobby_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    active(),
    is_counting(),
    clock_counter(),
    clipping_angle(),
#ifdef __S_RELEASE__
    counter_font_data(get_raw_inet()),
#endif // __S_RELEASE__
    clock_circle(25.f),
    clock_circle_outline(clock_circle.getRadius() + StartButton::clock_circle_outline_thickness),
    clock_shader(),
    counter_font(),
    counter_text(),
    lobby_ref(lobby_ref_)
{
    clock_circle.setPosition(sf::Vector2f(315.f, 376.f));

    clock_circle.setTextureRect(sf::IntRect(-clock_circle.getRadius(), -clock_circle.getRadius(), clock_circle.getRadius() * 2, clock_circle.getRadius() * 2));

    clock_circle_outline.setPosition(sf::Vector2f(clock_circle.getPosition().x - StartButton::clock_circle_outline_thickness, clock_circle.getPosition().y - StartButton::clock_circle_outline_thickness));
    clock_circle_outline.setFillColor(sf::Color::Black);

#ifndef __S_RELEASE__
    clock_shader = ResourceLoader::load<sf::Shader>("assets/shaders/RadialClipping.frg");

    counter_font = ResourceLoader::load<sf::Font>("assets/fonts/INET.ttf");
#else
    clock_shader = ResourceLoader::load<sf::Shader>({});

    clock_shader->loadFromMemory(get_raw_radial_clipping_frg().second, sf::Shader::Fragment);

    counter_font = ResourceLoader::load<sf::Font>(counter_font_data);
#endif // __S_RELEASE__

    clock_shader->setUniform("in_radius", clock_circle.getRadius());

    counter_text.setFont(*counter_font);
    counter_text.setCharacterSize(30);
    counter_text.setOutlineThickness(2.f);
    counter_text.setOutlineColor(sf::Color::Black);
}

void StartButton::process_inputs()
{
    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done) && active && !is_counting) Button::process_inputs();
}

void StartButton::update(float d)
{
    if(lobby_ref.get().listener) {

        bool x = false, y = false;

        x |= dynamic_cast<LobbyBeginnerButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][0]).is_active();
        x |= dynamic_cast<LobbyAverageButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][1]).is_active();
        x |= dynamic_cast<LobbyExpertButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][2]).is_active();

        y |= dynamic_cast<DurationAButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][3]).is_active();
        y |= dynamic_cast<DurationBButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][4]).is_active();
        y |= dynamic_cast<DurationCButton&>(*lobby_ref.get().buttons[Lobby::States::WAITING][5]).is_active();

        active = (x && y);

    }

    if(lobby_ref.get().listener && (lobby_ref.get().connection_status == sf::Socket::Done) && active && !is_counting) Button::update(d);

    if(!lobby_ref.get().listener || (lobby_ref.get().listener && active)) sprite.setColor(sf::Color::White);
    else                                                                  sprite.setColor(sf::Color(51, 51, 51));

    update_counter(d);
}

void StartButton::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    Button::draw(target, states);

    if(is_counting) {

        MinesweeperGame::window->draw(clock_circle_outline);
        MinesweeperGame::window->draw(clock_circle, clock_shader.get());

        MinesweeperGame::window->draw(counter_text);

    }
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
    SceneManager::change_scene_to(SceneManager::Scenes::GAME);

    lobby_ref.get().send('M', "1");
}

void StartButton::play_counter()
{
#ifdef __S_RELEASE__
    if(lobby_ref.get().listener && !active) return;

    is_counting    = true;

    clock_counter  = StartButton::clock_start_time;

    clipping_angle = -180.f;

    lobby_ref.get().send('L', "1");
#endif // __S_RELEASE__
}

void StartButton::stop_counter()
{
    is_counting    = false;

    clock_counter  = StartButton::clock_start_time;

    clipping_angle = -180.f;
}

void StartButton::update_counter(float d)
{
    if(is_counting) {

        counter_text.setString(std::to_string(static_cast<int>(std::ceil(clock_counter))));

        sf::FloatRect bounds = counter_text.getLocalBounds();
        counter_text.setPosition(sf::Vector2f(std::round(342.f - bounds.width / 2.f), 380.f));

        clock_counter -= d;

        if(clock_counter <= 0.f) {

            is_counting   = false;

            clock_counter = 0.f;

        }

        clock_shader->setUniform("in_angle", clipping_angle);

        if(clipping_angle >= 180.f) clipping_angle = -180.f;

        clipping_angle += (180.f * d );

    }
}
