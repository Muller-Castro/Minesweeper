/****************************************************************************************/
/* SplashScreen.h                                                                       */
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

#ifndef SPLASH_SCREEN_H
#define SPLASH_SCREEN_H

#include <chrono>
#include <memory>
#ifdef __S_RELEASE__
#include <utility>
#endif // __S_RELEASE__

#include <tweeny.h>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Shader.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#include "scene/Scene.h"
#include "io/MusicStream.h"

namespace Minesweeper {

    class SplashScreen final : public Scene
    {
    public:
        SplashScreen();
        ~SplashScreen() noexcept override;

        void process_inputs() override;
        void update(float)    override;
        void draw()           override;

    private:
        enum class Transitions : unsigned char
        {
            OPENING,
            WAITING,
            CLOSING
        };

        bool should_flip_bomb_direction;

        std::chrono::high_resolution_clock::time_point scene_start_point;

        Transitions transition;

        sf::Clock transitions_clock;
        sf::Clock bomb_layer_clock;

        sf::RectangleShape transition_rect;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> credits_font_data;
#endif // __S_RELEASE__

        std::shared_ptr<MusicStream> soundtrack;

        std::shared_ptr<sf::Texture> universe_texture;
        std::shared_ptr<sf::Texture> bomb_texture;

        std::shared_ptr<sf::Font> credits_font;

        tweeny::tween<float> bomb_tween;

        std::shared_ptr<sf::Shader> shader;

        sf::Sprite universe_sprite;
        sf::Sprite big_bomb_sprite;
        sf::Sprite bomb_sprite;

        sf::Text credits_text;

        int run_fade(bool in, float d) noexcept;
        void fade_soundtrack(float d) noexcept;
        void update_transitions(float d) noexcept;

        void move_universe(float d) noexcept;

        void draw_big_bomb();
        void draw_bomb();
    };

}

#endif // SPLASH_SCREEN_H
