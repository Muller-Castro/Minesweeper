/****************************************************************************************/
/* Button.h                                                                             */
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

#ifndef BUTTON_H
#define BUTTON_H

#include <vector>
#include <memory>

#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RenderStates.hpp>

namespace Minesweeper {

    class Button : public sf::Drawable
    {
    public:
        enum class States : unsigned char
        {
            NONE,
            HOVERED,
            PRESSED,
            RELEASED
        };

        sf::Vector2f position, scale;

        Button(const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down);
        ~Button() override {}

        void process_inputs();
        void update(float d);
        void draw(sf::RenderTarget& target, sf::RenderStates states) const final override;

        States get_state() const noexcept { return state; }

    protected:
        virtual void on_button_up()      = 0;
        virtual void on_button_down()    = 0;
        virtual void on_button_pressed() = 0;

    private:
        States state;

        static constexpr unsigned char HOVERED   = 0;
        static constexpr unsigned char N_HOVERED = 1;
        static constexpr unsigned char DOWN      = 2;

        unsigned char current_texture;

        sf::FloatRect bounding_box;

        std::vector<std::shared_ptr<sf::Texture>> textures;
        sf::Sprite sprite;

        void set_state() noexcept;
        void dispatch_actions();
    };

}

#endif // BUTTON_H
