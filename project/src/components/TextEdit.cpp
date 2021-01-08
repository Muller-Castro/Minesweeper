/****************************************************************************************/
/* TextEdit.cpp                                                                         */
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

#include "components/TextEdit.h"

#include <algorithm>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Mouse.hpp>
#include <SFML/Window/Clipboard.hpp>

#include "MinesweeperGame.h"
#include "GlobalConfigurations.h"
#include "Input.h"
#include "scene/SceneManager.h"

using namespace Minesweeper;

bool TextEdit::is_hovering_any = false;

char TextEdit::ascii_char = '\0';

sf::Keyboard::Key TextEdit::command = sf::Keyboard::Unknown;

sf::Sound TextEdit::sound;

TextEdit::TextEdit() :
    caught_hover(),
    is_focused(),
    caret_blink_speed(),
    caret_index(),
    chars_limit(),
    caret_blink_timer(),
    caret(),
    font(),
    unfocused_text(),
    text(),
    bounding_box(),
    typing_sfx(),
    neighbor(*this),
    char_filter()
{
    //
}

TextEdit::TextEdit(const sf::Vector2f& position, const sf::Vector2f& scale, const sf::Vector2f& bb_size, const std::shared_ptr<sf::Font>& font_, unsigned char_size, const sf::Color& color, size_t chars_limit_, const std::string& unfocused_text_str, const std::shared_ptr<sf::SoundBuffer>& typing_sfx_, TextEdit* neighbor_, const std::function<bool(char)>& char_filter_, float caret_height, const sf::Color& caret_color, float caret_blink_speed_, bool is_focused_) :
    caught_hover(),
    is_focused(is_focused_),
    caret_blink_speed(caret_blink_speed_),
    caret_index(),
    chars_limit(chars_limit_),
    caret_blink_timer(),
    caret(sf::Vector2f(1.f, caret_height)),
    font(font_),
    unfocused_text(unfocused_text_str, *font, char_size),
    text("", *font, char_size),
    bounding_box(position.x, position.y, bb_size.x, bb_size.y),
    typing_sfx(typing_sfx_),
    neighbor(neighbor_ ? *neighbor_ : *this),
    char_filter(char_filter_ ? char_filter_ : [](char) { return true; })
{
    unfocused_text.setPosition(position);
    unfocused_text.setScale(scale);
    unfocused_text.setFillColor(sf::Color(153, 153, 153, 200));

    text.setPosition(position);
    text.setScale(scale);
    text.setFillColor(color);

    caret.setPosition(text.getPosition());
    caret.setFillColor(caret_color);

    TextEdit::sound.setVolume(50.f);

    caret_blink_timer.restart();
}

void TextEdit::process_inputs()
{
    check_focus();
    type_text();
}

void TextEdit::update(float delta)
{
    update_caret();
}

void TextEdit::draw()
{
    if(!text.getString().isEmpty()) {

        MinesweeperGame::window->draw(text);

    }else {

        MinesweeperGame::window->draw(unfocused_text);

    }

    MinesweeperGame::window->draw(caret);

#ifdef __DEBUG__
    draw_bb();
#endif // __DEBUG__
}

void TextEdit::clear()
{
    sf::Vector2f caret_pos = caret.getPosition();

    std::string text_str = text.getString();

    for(size_t i = 0; i < text_str.length(); ++i) {

        const sf::Glyph& glyph = font->getGlyph(static_cast<unsigned>(text_str[caret_index - 1]), text.getCharacterSize(), false);

        caret_pos.x -= glyph.advance;

        if(caret_index > 0) --caret_index;

    }

    caret.setPosition(caret_pos);

    caret_index = 0;
    text.setString("");
}

void TextEdit::check_focus()
{
    sf::Vector2i mouse_position = sf::Mouse::getPosition(*MinesweeperGame::window);

    bool mouse_entered = bounding_box.contains(sf::Vector2f(mouse_position.x, mouse_position.y));

    if(MinesweeperGame::window->hasFocus() && mouse_entered) {

        {
            sf::Cursor cursor;

            if(cursor.loadFromSystem(sf::Cursor::Text)) MinesweeperGame::window->setMouseCursor(cursor);

            caught_hover = TextEdit::is_hovering_any = true;
        }

        if(Input::is_pressed<Input::Mouse>(sf::Mouse::Left) || Input::is_pressed<Input::Mouse>(sf::Mouse::Right)) is_focused = true;

    }else if(!mouse_entered) {

        if(caught_hover) caught_hover = TextEdit::is_hovering_any = false;

        if(!TextEdit::is_hovering_any) {

            sf::Cursor cursor;

            if(cursor.loadFromSystem(sf::Cursor::Arrow)) MinesweeperGame::window->setMouseCursor(cursor);

        }

        if(Input::is_pressed<Input::Mouse>(sf::Mouse::Left) || Input::is_pressed<Input::Mouse>(sf::Mouse::Right)) is_focused = false;

    }
}

void TextEdit::type_text()
{
    if(is_focused) {

        bool pressed_left  = TextEdit::command == sf::Keyboard::Left;
        bool pressed_right = TextEdit::command == sf::Keyboard::Right;

        if(TextEdit::command == sf::Keyboard::Delete) {

            {
                sf::Color caret_color = caret.getFillColor();
                caret_color.a = 255;
                caret.setFillColor(caret_color);

                caret_blink_timer.restart();
            }

            std::string text_str = text.getString();

            try {

                text_str.erase(caret_index, 1);

            }catch(const std::out_of_range&) {}

            text.setString(text_str);

        }else if(TextEdit::command == sf::Keyboard::C) {

//            sf::Clipboard::setString(text.getString());

        }else if(TextEdit::command == sf::Keyboard::V) {

            {
                sf::Color caret_color = caret.getFillColor();
                caret_color.a = 255;
                caret.setFillColor(caret_color);

                caret_blink_timer.restart();
            }

            std::string text_str = text.getString();

            if(text_str.length() < chars_limit) {

                std::string clipboard_str = sf::Clipboard::getString();

                {
                    std::string buffer;

                    std::for_each(clipboard_str.cbegin(), clipboard_str.cend(), [&buffer, this](char c) {

                        unsigned unicode = static_cast<unsigned>(c);

                        if(((unicode > 31) && (unicode < 127)) && char_filter(c)) buffer += c;

                    });

                    clipboard_str = buffer;
                }

                sf::Vector2f caret_pos = caret.getPosition();

                bool should_play_sfx = false;

                for(size_t i = 0; (i < clipboard_str.length()) && (text_str.length() < chars_limit); ++i) {

                    should_play_sfx = true;

                    const sf::Glyph& glyph = font->getGlyph(static_cast<unsigned>(clipboard_str[i]), text.getCharacterSize(), false);

                    text_str.insert(caret_index, 1, clipboard_str[i]);

                    caret_pos.x += glyph.advance;

                    ++caret_index;

                }

                if(should_play_sfx) {

                    TextEdit::sound.stop();
                    TextEdit::sound.setBuffer(*typing_sfx);
                    TextEdit::sound.play();

                }

                text.setString(text_str);
                caret.setPosition(caret_pos);

            }

        }else if((TextEdit::command == sf::Keyboard::Home) || (TextEdit::command == sf::Keyboard::End)) {

            {
                sf::Color caret_color = caret.getFillColor();
                caret_color.a = 255;
                caret.setFillColor(caret_color);

                caret_blink_timer.restart();
            }

            bool is_home = TextEdit::command == sf::Keyboard::Home;

            sf::Vector2f caret_pos = caret.getPosition();
            std::string text_str   = text.getString();

            while(is_home ? (caret_index != 0) : (caret_index != text_str.length())) {

                const sf::Glyph& glyph = font->getGlyph(static_cast<unsigned>(text_str[is_home ? (caret_index - 1) : caret_index]), text.getCharacterSize(), false);

                if(is_home) {

                    caret_pos.x -= glyph.advance;
                    --caret_index;

                }else {

                    caret_pos.x += glyph.advance;
                    ++caret_index;

                }

            }

            caret.setPosition(caret_pos);

        }else if((pressed_left && (caret_index > 0)) || (pressed_right && (caret_index < text.getString().getSize()))) {

            {
                sf::Color caret_color = caret.getFillColor();
                caret_color.a = 255;
                caret.setFillColor(caret_color);

                caret_blink_timer.restart();
            }

            sf::Vector2f caret_pos = caret.getPosition();

            const sf::Glyph& glyph = font->getGlyph(static_cast<unsigned>(text.getString()[pressed_left ? (caret_index - 1) : caret_index]), text.getCharacterSize(), false);

            if(pressed_left) {

                caret_pos.x -= glyph.advance;
                if(caret_index > 0) --caret_index;

            }else {

                caret_pos.x += glyph.advance;
                ++caret_index;

            }

            caret.setPosition(caret_pos);

        }else if(TextEdit::ascii_char != '\0') {

            {
                sf::Color caret_color = caret.getFillColor();
                caret_color.a = 255;
                caret.setFillColor(caret_color);

                caret_blink_timer.restart();
            }

            std::string text_str = text.getString();

            unsigned unicode = static_cast<unsigned>(TextEdit::ascii_char);

            sf::Vector2f caret_pos = caret.getPosition();

            if(unicode == 8) {

                if(!text_str.empty() && (caret_index > 0)) {

                    const sf::Glyph& glyph = font->getGlyph(static_cast<unsigned>(text_str[caret_index - 1]), text.getCharacterSize(), false);

                    caret_pos.x -= glyph.advance;

                    text_str.erase(caret_index - 1, 1);

                    --caret_index;

                }

            }else if(unicode == 9) {

                if(&neighbor.get() != this) {

                    SceneManager::call_deferred([&]() {

                        is_focused                = false;
                        neighbor.get().is_focused = true;

                    });

                }

            }else if((text_str.length() < chars_limit) && char_filter(TextEdit::ascii_char)) {

//                TextEdit::sound.stop();
                TextEdit::sound.setBuffer(*typing_sfx);
                TextEdit::sound.play();

                const sf::Glyph& glyph = font->getGlyph(static_cast<unsigned>(TextEdit::ascii_char), text.getCharacterSize(), false);

                caret_pos.x += glyph.advance;

                text_str.insert(caret_index, 1, TextEdit::ascii_char);

                ++caret_index;

            }

            caret.setPosition(caret_pos);

            text.setString(text_str);

        }

    }
}

void TextEdit::update_caret()
{
    if(!is_focused) {

        sf::Color caret_color = caret.getFillColor();

        caret_color.a = 0;

        caret.setFillColor(caret_color);

    }else if(caret_blink_timer.getElapsedTime().asSeconds() >= caret_blink_speed) {

        sf::Color caret_color = caret.getFillColor();

        caret_color.a = (caret_color.a == 0) ? 255 : 0;

        caret.setFillColor(caret_color);

        caret_blink_timer.restart();

    }
}

#ifdef __DEBUG__
void TextEdit::draw_bb() const
{
    if(GlobalConfigurations::show_bb) {

        sf::RectangleShape shape(sf::Vector2f(bounding_box.width, bounding_box.height));

        shape.setPosition(sf::Vector2f(bounding_box.left, bounding_box.top));

        sf::Color shape_color;

        if(is_focused) shape_color = sf::Color::Blue;
        else           shape_color = sf::Color(0, 255, 255);

        shape_color.a = static_cast<unsigned char>(-1) / 2;
        shape.setFillColor(shape_color);

        MinesweeperGame::window->draw(shape);

    }
}
#endif // __DEBUG__
