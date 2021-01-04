/****************************************************************************************/
/* MainMenu.h                                                                           */
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

#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <vector>
#include <memory>
#include <string>
#include <array>
#include <map>
#ifdef __S_RELEASE__
#include <utility>
#endif // __S_RELEASE__

#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Shader.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#include "scene/Scene.h"
#include "components/Button.h"
#include "tools/AnimationPlayer.h"
#include "io/MusicStream.h"

namespace Minesweeper {

    class MainMenu final : public Scene
    {
    public:
        MainMenu();
        ~MainMenu() noexcept override;

        void process_inputs()    override;
        void update(float delta) override;
        void draw()              override;

    private:
        friend class CreditsButton;
        friend class CreditsReturnButton;
        friend class PlayOfflineButton;
        friend class PlayOfflineReturnButton;

        bool show_credits;
        bool show_difficulty_levels;

        sf::Clock in_time;

        AnimationPlayer animations;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> credits_font_data;
        std::pair<std::string, std::string> record_font_data;
#endif // __S_RELEASE__

        std::shared_ptr<sf::Texture> background_texture;
        std::shared_ptr<sf::Texture> title_texture;
        std::shared_ptr<sf::Texture> p1_flag_texture;
        std::shared_ptr<sf::Texture> p2_flag_texture;
        std::shared_ptr<sf::Texture> record_grid_texture;
        std::shared_ptr<sf::Texture> bomb_texture;

        std::shared_ptr<sf::Font> credits_font;
        std::shared_ptr<sf::Font> record_font;

        std::shared_ptr<MusicStream> soundtrack;

        sf::Sprite background_sprite;
        sf::Sprite title_sprite;
        sf::Sprite p1_flag_sprite;
        sf::Sprite p2_flag_sprite;
        sf::Sprite record_grid_sprite;
        sf::Sprite bomb_sprite;

        std::shared_ptr<sf::Shader> credits_panel_shader;
        std::shared_ptr<sf::Shader> record_grid_shader;

        sf::RectangleShape credits_panel_shape;

        sf::Text record_texts; // this will draw more than one text

        std::array<std::string, 3> record_values;

        std::map<std::string, sf::Text> credits_texts;

        std::vector<std::unique_ptr<Button>> buttons;

        void load_records();

        void draw_flags();
        void draw_records();
    };

}

#endif // MAIN_MENU_H
