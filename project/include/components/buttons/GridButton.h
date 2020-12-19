/****************************************************************************************/
/* GridButton.h                                                                         */
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

#ifndef GRID_BUTTON_H
#define GRID_BUTTON_H

#include <functional>

#include <SFML/System/Vector2.hpp>

#include "components/Button.h"
#include "tools/AnimationPlayer.h"

namespace Minesweeper {

    class Game;

    class GridButton final : public Button
    {
    public:
        enum class Types : unsigned char
        {
            NEUTRAL,
            NUMBER,
            BOMB
        };

        GridButton(Game& game, Types type_, bool disabled_, bool flagged_, const sf::Vector2i& cell_position_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::Texture>& icon, const std::shared_ptr<sf::Texture>& p1_flag, const std::shared_ptr<sf::Texture>& p2_flag, const std::shared_ptr<sf::Texture>& not_a_bomb_texture_, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx = {}, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx = {});
        ~GridButton() override {}

        void process_inputs()    override;
        void update(float delta) override;
        void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

    protected:
        void on_button_up()      override;
        void on_button_down()    override;
        void on_button_pressed() override;

    private:
        friend class Game;

        bool disabled;
        bool flagged;

        Types type;

        std::reference_wrapper<Game> game_ref;

        std::shared_ptr<sf::Texture> icon_texture;
        std::shared_ptr<sf::Texture> p1_flag_texture;
        std::shared_ptr<sf::Texture> p2_flag_texture;
        std::shared_ptr<sf::Texture> not_a_bomb_texture;

        sf::Vector2i cell_position;

        sf::Color pressed_color;

        sf::Sprite icon_sprite;
        sf::Sprite p1_flag_sprite;
        sf::Sprite p2_flag_sprite;

        AnimationPlayer animations;

        void add_bomb_animation(); // since this is going to be used twice...
        void change_button_type(Types new_type, const std::shared_ptr<sf::Texture>& new_icon_texture);
        void check_flag_input();
        void set_flag(bool b);
        void disable();
        void find_and_disable();
    };

}

#endif // GRID_BUTTON_H
