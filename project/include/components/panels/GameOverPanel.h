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
#include <chrono>

#include <tweeny.h>

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

        enum class Steps : unsigned char
        {
            WAIT,
            FADE,
            GO_DOWN,
            CALCULATE,
            PLAY_RESULTS_SFX,
            SHOW_WINNER
        };

        enum class ScoreParameterStep : unsigned char
        {
            FLAGGED_BOMBS,
            LAST_SQUARE,
            MISSED_FLAGS,
            EXPLODED,
            TOTAL
        };

        static constexpr float WAIT_DURATION     = std::chrono::seconds(5).count();
        static constexpr float FADE_SPEED        = std::chrono::milliseconds(100).count();
        static constexpr float GO_DOWN_DURATION  = std::chrono::milliseconds(5000).count();
        static constexpr float CALCULATION_DELAY = std::chrono::seconds(2).count();
        static constexpr float WINNER_DELAY      = std::chrono::seconds(2).count();

        bool should_block_inputs;

        Steps curr_step;

        ScoreParameterStep curr_score_param_step;

        float background_rect_alpha;

        sf::Clock timer;

        std::reference_wrapper<Game> game_ref;

        std::pair<ScoreParameters, ScoreParameters> s_parameters_buff;

        tweeny::tween<float> go_down_tween;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> calculations_font_data;
#endif // __S_RELEASE__

        std::shared_ptr<sf::Font> calculations_font;

        sf::Text calculations_text;

        void draw_calculations();

        bool count_score_parameter(bool sum, short& value_a, short value_b) noexcept;
    };

}

#endif // GAME_OVER_PANEL_H
