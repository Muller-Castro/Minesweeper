/****************************************************************************************/
/* TextEdit.h                                                                           */
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

#ifndef TEXT_EDIT_H
#define TEXT_EDIT_H

#include <string>
#include <memory>
#include <functional>

#include <SFML/System/Clock.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

namespace Minesweeper {

    class TextEdit
    {
    public:
        TextEdit();
        TextEdit(const sf::Vector2f& position, const sf::Vector2f& scale, const sf::Vector2f& bb_size, const std::shared_ptr<sf::Font>& font_, unsigned char_size, const sf::Color& color, size_t chars_limit_, const std::string& unfocused_text_str, const std::shared_ptr<sf::SoundBuffer>& typing_sfx_, TextEdit* neighbor_, float caret_height, const sf::Color& caret_color = sf::Color::Black, float caret_blink_speed_ = 0.65f, bool is_focused_ = false);

        void process_inputs();
        void update(float delta);
        void draw();

        std::string get_text_str() const noexcept { return text.getString(); }

    private:
        friend class Input;
        friend class ClearButton;

        static bool is_hovering_any;

        static char ascii_char;

        static sf::Keyboard::Key command;

        static sf::Sound sound;

        bool caught_hover;

        bool is_focused;

        float caret_blink_speed;

        size_t caret_index;

        size_t chars_limit;

        sf::Clock caret_blink_timer;

        sf::RectangleShape caret;

        std::shared_ptr<sf::Font> font;

        sf::Text unfocused_text;

        sf::Text text;

        sf::FloatRect bounding_box;

        std::shared_ptr<sf::SoundBuffer> typing_sfx;

        std::reference_wrapper<TextEdit> neighbor;

        void clear();
        void check_focus();
        void type_text();
        void update_caret();
#ifdef __DEBUG__
        void draw_bb() const;
#endif // __DEBUG__
    };

}

#endif // TEXT_EDIT_H
