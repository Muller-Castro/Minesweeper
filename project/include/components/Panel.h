/****************************************************************************************/
/* Panel.h                                                                              */
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

#ifndef PANEL_H
#define PANEL_H

#include <memory>
#include <vector>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

#include "GameLogic.h"
#include "components/Button.h"

namespace Minesweeper {

    class Panel : public DrawableGameLogic
    {
    public:
        Panel();
        Panel(const sf::Vector2f& position, const sf::Vector2f& scale, const std::shared_ptr<sf::Texture>& background_texture_, std::vector<std::shared_ptr<Button>>&& buttons_, bool is_active_ = false);

        void process_inputs()    override;
        void update(float delta) override;
        void draw()              override;

        void move_panel(const sf::Vector2f& offset);

        virtual void set_active(bool b) noexcept { is_active = b; }

        bool activated() const noexcept { return is_active; }

        std::vector<std::shared_ptr<Button>>& get_buttons() noexcept             { return buttons; };
        const std::vector<std::shared_ptr<Button>>& get_buttons() const noexcept { return buttons; };

    protected:
        bool is_active;

        std::shared_ptr<sf::Texture> background_texture;

        sf::Sprite background_sprite;

        std::vector<std::shared_ptr<Button>> buttons;
    };

}

#endif // PANEL_H
