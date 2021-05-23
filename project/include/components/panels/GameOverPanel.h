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
#include <array>

#include <tweeny.h>

#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/Shader.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

#include "components/Panel.h"
#include "scene/scenes/Game.h"
#include "components/buttons/ReturnToResultsButton.h"

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
        friend class ReturnToResultsButton;

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

        static constexpr float WAIT_DURATION              = std::chrono::seconds(5).count();
        static constexpr float FADE_SPEED                 = std::chrono::milliseconds(100).count();
        static constexpr float GO_DOWN_DURATION           = std::chrono::milliseconds(5000).count();
        static constexpr float CALCULATION_DELAY          = std::chrono::seconds(2).count();
        static constexpr float EARNED_SCORE_DELAY         = std::chrono::milliseconds(150).count();
        static constexpr float WINNER_DELAY               = std::chrono::seconds(2).count();
        static constexpr float HAND_ICON_DELAY            = std::chrono::seconds(3).count();
        static constexpr float HAND_ICON_FADE_S           = std::chrono::milliseconds(300).count();
        static constexpr float HAND_ICON_RESCALE_DURATION = std::chrono::milliseconds(1000).count();
        static constexpr float HAND_ICON_RESCALE_INTERVAL = std::chrono::seconds(2).count();
        static constexpr float CLICK_CIRCLES_SCALE_S      = std::chrono::milliseconds(10000).count();
        static constexpr float CLICK_CIRCLES_FADE_S       = std::chrono::milliseconds(13000).count();
        static constexpr int   CLICK_CIRCLES_DIFFS        = 20;

        bool should_block_inputs;

        bool should_allow_grid_view;

        bool is_in_view_mode;

        Steps curr_step;

        ScoreParameterStep curr_score_param_step;

        unsigned char click_circles_alpha;

        float background_rect_alpha;
        float hand_icon_alpha;
        float click_circles_radius;

        sf::Clock timer;

        sf::Clock earned_score_timer;

        sf::Clock hand_icon_timer;

        std::reference_wrapper<Game> game_ref;

        std::pair<ScoreParameters, ScoreParameters> s_parameters_buff;

        tweeny::tween<float> go_down_tween;
        tweeny::tween<float> hand_icon_tween;
        tweeny::tween<float, unsigned char> click_circles_tween;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> calculations_font_data;
#endif // __S_RELEASE__

        std::shared_ptr<sf::Font> calculations_font;

        std::shared_ptr<sf::Shader> winner_rect_shader;

        std::shared_ptr<sf::Texture> hand_icon_texture;

        std::shared_ptr<sf::SoundBuffer> whoosh_sound;

        std::shared_ptr<sf::SoundBuffer> earned_score;

        sf::CircleShape click_circle;

        sf::Text calculations_text;

        sf::Sprite hand_icon_sprite;

        ReturnToResultsButton r_to_results_button;

        std::array<sf::FloatRect, 4> external_bbs;

        void draw_calculations();

        void check_external_bbs();

        bool count_score_parameter(bool sum, short& value_a, short value_b) noexcept;
    };

}

#endif // GAME_OVER_PANEL_H
