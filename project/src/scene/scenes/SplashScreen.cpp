/****************************************************************************************/
/* SplashScreen.cpp                                                                     */
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

#include "scene/scenes/SplashScreen.h"

#include "io/ResourceLoader.h"

#include "Input.h"
#include "scene/SceneManager.h"

#ifdef __S_RELEASE__
#include "assets/SplashScreenSoundtrack.h"
#include "assets/BigBombVRT.h"
#include "assets/BigBombFRG.h"
#include "assets/BombSplashScreen.h"
#include "assets/Universe.h"
#include "assets/INET.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

SplashScreen::SplashScreen() :
    should_flip_bomb_direction(true),
    scene_start_point(std::chrono::high_resolution_clock::now()),
    transition(Transitions::OPENING),
    transitions_clock(),
    bomb_layer_clock(),
    transition_rect(sf::Vector2f(800.f, 600.f)),
#ifdef __S_RELEASE__
    credits_font_data(get_raw_inet()),
#endif // __S_RELEASE__
    soundtrack(),
    universe_texture(), bomb_texture(),
    credits_font(),
    bomb_tween(tweeny::from(0.f).to(697.6f).during(100).via(tweeny::easing::cubicInOut)),
    shader(),
    universe_sprite(),
    big_bomb_sprite(),
    bomb_sprite(),
    credits_text()
{
#ifndef __S_RELEASE__
    soundtrack = ResourceLoader::load<MusicStream>("assets/musics/SplashScreenSoundtrack.ogg");
#else
    soundtrack = ResourceLoader::load<MusicStream>(get_raw_splash_screen_soundtrack());
#endif // __S_RELEASE__

    soundtrack->music.play();
    soundtrack->music.setVolume(0.f);

#ifndef __S_RELEASE__
    shader = ResourceLoader::load<sf::Shader>("assets/shaders/BigBomb.vrt_frg");
#else
    auto raw_shader_vrt = get_raw_big_bomb_vrt();
    auto raw_shader_frg = get_raw_big_bomb_frg();

    shader = ResourceLoader::load<sf::Shader>(raw_shader_vrt);

    shader->loadFromMemory(raw_shader_vrt.second, raw_shader_frg.second);
//    shader->loadFromMemory(raw_shader_vrt.second, sf::Shader::Vertex);
#endif // __S_RELEASE__

#ifndef __S_RELEASE__
    universe_texture = ResourceLoader::load<sf::Texture>("assets/textures/Universe.png");
#else
    universe_texture = ResourceLoader::load<sf::Texture>(get_raw_universe());
#endif // __S_RELEASE__

    universe_sprite.setTexture(*universe_texture);

    universe_sprite.setPosition(0.f, -1200.f + 600.f);

#ifndef __S_RELEASE__
    bomb_texture = ResourceLoader::load<sf::Texture>("assets/textures/BombSplashScreen.png");
#else
    bomb_texture = ResourceLoader::load<sf::Texture>(get_raw_bomb_splash_screen());
#endif // __S_RELEASE__

    big_bomb_sprite.setTexture(*bomb_texture);
    big_bomb_sprite.setPosition(400.f - 256.f / 2.f, 300.f - 256.f / 2.f - 100.f);
    big_bomb_sprite.setScale(0.5f, 0.5f);

    bomb_sprite.setTexture(*bomb_texture);
    bomb_sprite.setPosition(100.f, 200.f);
    bomb_sprite.setScale(0.2f, 0.2f);

#ifndef __S_RELEASE__
    credits_font = ResourceLoader::load<sf::Font>("assets/fonts/INET.ttf");
#else
    credits_font = ResourceLoader::load<sf::Font>(credits_font_data);
#endif // __S_RELEASE__

    credits_text.setPosition(35.f, 450.f);
    credits_text.setFont(*credits_font);

    credits_text.setString("             Created by Muller and Matheus, 2020.\n"
                           "Get it on: https://github.com/Muller-Castro/Minesweeper");

    credits_text.setCharacterSize(32);
//    credits_text.setFillColor(sf::Color::White);
    credits_text.setFillColor(sf::Color(2, 254, 250));

    transition_rect.setFillColor(sf::Color::Black);
}

SplashScreen::~SplashScreen() noexcept
{
    //
}

void SplashScreen::process_inputs()
{
    if(Input::is_just_pressed<Input::Key>(sf::Keyboard::Enter)) SceneManager::change_scene_to(SceneManager::Scenes::MAIN_MENU);
}

void SplashScreen::update(float d)
{
    update_transitions(d);
    move_universe(d);

    bomb_sprite.setPosition(bomb_tween.step(1), 200.f);
}

void SplashScreen::draw()
{
    draw_on_layer(0, universe_sprite);

    ////////////////

    draw_big_bomb();
    draw_bomb();

    ////////////////

    draw_on_layer(0, credits_text);

    ////////////////

    draw_on_layer(3, transition_rect);
}

int SplashScreen::run_fade(bool in, float d) noexcept
{
    constexpr float TRANS_SPEED = 120.f;

    sf::Color curr_col = transition_rect.getFillColor();

    int alpha = static_cast<int>(curr_col.a);

    alpha = in ? alpha - TRANS_SPEED * d : alpha + TRANS_SPEED * d;

    if     (alpha < 0)   alpha = 0;
    else if(alpha > 255) alpha = 255;

    curr_col.a = static_cast<int>(alpha);

    transition_rect.setFillColor(curr_col);

    return alpha;
}

void SplashScreen::fade_soundtrack(float d) noexcept
{
    constexpr float TRANS_SPEED = 50.f;

    float new_volume = soundtrack->music.getVolume();

    new_volume += TRANS_SPEED * d;

    if(new_volume > 100.f) new_volume = 100.f;

    soundtrack->music.setVolume(new_volume);
}

void SplashScreen::update_transitions(float d) noexcept
{
    if(transition == Transitions::OPENING) {

        fade_soundtrack(d);

        if(run_fade(true, d) <= 0) {

            soundtrack->music.setVolume(100.f);

            transition = Transitions::WAITING;

            transitions_clock.restart();

        }

    }
    else if(transition == Transitions::WAITING) {

        if(transitions_clock.getElapsedTime().asSeconds() >= 6.f) {

            transition = Transitions::CLOSING;

            transitions_clock.restart();

        }

    }
    else if(transition == Transitions::CLOSING) {

        if(run_fade(false, d) >= 255) SceneManager::change_scene_to(SceneManager::Scenes::MAIN_MENU);

    }
}

void SplashScreen::move_universe(float d) noexcept
{
    constexpr float SPEED = 500.f;

    universe_sprite.move(-SPEED * d, SPEED * d);

    sf::Vector2f position = universe_sprite.getPosition();

    if(position.y >= 100.f) universe_sprite.setPosition(0.f, -1200.f + 600.f);
}

void SplashScreen::draw_big_bomb()
{
    shader->setUniform("texture", sf::Shader::CurrentTexture);
    shader->setUniform("time", static_cast<int>(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - scene_start_point).count()));
    shader->setUniform("is_stroke", true);

    auto curr_big_bomb_sprite_pos = big_bomb_sprite.getPosition();

    big_bomb_sprite.setPosition(curr_big_bomb_sprite_pos - sf::Vector2f(8.f, 8.f));
    big_bomb_sprite.setScale(0.53f, 0.53f);

    draw_on_layer(1, big_bomb_sprite, sf::RenderStates(shader.get()));

    shader->setUniform("is_stroke", false);

    big_bomb_sprite.setPosition(curr_big_bomb_sprite_pos);
    big_bomb_sprite.setScale(0.5f, 0.5f);

    draw_on_layer(1, big_bomb_sprite, sf::RenderStates(shader.get()));
}

void SplashScreen::draw_bomb()
{
    size_t layer_index = 2;

    if(bomb_layer_clock.getElapsedTime().asSeconds() >= 2.f) {

        layer_index = 0;

        if(should_flip_bomb_direction) {

            bomb_tween = tweeny::from(697.6f).to(0.f).during(100).via(tweeny::easing::cubicInOut);

            should_flip_bomb_direction = !should_flip_bomb_direction;

        }

        if(bomb_layer_clock.getElapsedTime().asSeconds() >= 4.f) {

            layer_index = 2;

            bomb_layer_clock.restart();

            bomb_tween = tweeny::from(0.f).to(697.6f).during(100).via(tweeny::easing::cubicInOut);

            should_flip_bomb_direction = !should_flip_bomb_direction;

        }

    }

    draw_on_layer(layer_index, bomb_sprite);
}
