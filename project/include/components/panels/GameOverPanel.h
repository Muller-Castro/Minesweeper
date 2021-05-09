/****************************************************************************************/
/* GameOverPanel.h                                                                      */
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

#ifndef GAME_OVER_PANEL_H
#define GAME_OVER_PANEL_H

#include <functional>

#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>

#include "components/Panel.h"
#include "scene/scenes/Game.h"

namespace Minesweeper {

    class GameOverPanel final : public Panel
    {
    public:
        GameOverPanel(Game&);

        void process_inputs() override;
        void update(float)    override;
        void draw()           override;

        void set_active(bool b) noexcept override;

    private:
        friend class Game;
        friend class GameOverBeginnerButton;
        friend class GameOverAverageButton;
        friend class GameOverExpertButton;
        friend class GameOverDurationAButton;
        friend class GameOverDurationBButton;
        friend class GameOverDurationCButton;
        friend class RetryButton;
        friend class OnlineQuitButton;

        bool should_block_inputs;

        sf::Clock timer;

        std::reference_wrapper<Game> game_ref;

        std::pair<ScoreParameters, ScoreParameters> s_parameters_buff;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> calculations_font_data;
#endif // __S_RELEASE__

        std::shared_ptr<sf::Font> calculations_font;

        sf::Text calculations_text;

        void draw_calculations();
    };

}

#endif // GAME_OVER_PANEL_H
