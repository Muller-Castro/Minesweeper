/****************************************************************************************/
/* RetryButton.h                                                                        */
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

#ifndef RETRY_BUTTON_H
#define RETRY_BUTTON_H

#include <functional>
#include <memory>

#include <SFML/Graphics/Texture.hpp>

#include "components/Button.h"

namespace Minesweeper {

    class GameOverPanel;

    class RetryButton final : public Button
    {
    public:
        RetryButton(GameOverPanel& go_panel_ref_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx = {}, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx = {});
        ~RetryButton() noexcept override {}

        void process_inputs() override;

    protected:
        void on_button_up()      override;
        void on_button_down()    override;
        void on_button_pressed() override;

    private:
        std::reference_wrapper<GameOverPanel> go_panel_ref;

        std::shared_ptr<sf::Texture> waiting_for_opponent_tex;
    };

}

#endif // RETRY_BUTTON_H
