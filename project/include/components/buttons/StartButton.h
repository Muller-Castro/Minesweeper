/****************************************************************************************/
/* StartButton.h                                                                        */
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

#ifndef START_BUTTON_H
#define START_BUTTON_H

#include <memory>
#include <functional>

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Shader.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

#include "components/Button.h"

namespace Minesweeper {

    class Lobby;

    class StartButton final : public Button
    {
    public:
        StartButton(Lobby& lobby_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx = {}, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx = {});
        ~StartButton() override {}

        void process_inputs() override;
        void update(float d)  override;
        void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

        void play_counter();
        void stop_counter();

    protected:
        void on_button_up()      override;
        void on_button_down()    override;
        void on_button_pressed() override;

    private:
        static constexpr float clock_circle_outline_thickness = 2.f;
        static constexpr float clock_start_time               = 5.f;

        bool active;
        bool is_counting;

        float clock_counter;
        float clipping_angle;

        sf::CircleShape clock_circle;
        sf::CircleShape clock_circle_outline;

        std::shared_ptr<sf::Shader> clock_shader;

        std::shared_ptr<sf::Font> counter_font;

        sf::Text counter_text;

        std::reference_wrapper<Lobby> lobby_ref;

        void update_counter(float d);
    };

}

#endif // START_BUTTON_H
