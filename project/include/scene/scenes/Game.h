/****************************************************************************************/
/* Game.h                                                                               */
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

#ifndef GAME_H
#define GAME_H

#include <vector>
#include <memory>
#include <utility>
#include <string>
#include <unordered_set>
#include <unordered_map>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Audio/Sound.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Clock.hpp>

#include "scene/Scene.h"
#include "scene/SceneManager.h"
#include "components/Button.h"
#include "components/buttons/GridButton.h"
#include "io/MusicStream.h"
#include "Emoji.h"

namespace Minesweeper {

    struct ConnectionInfo
    {
        const bool is_online, is_host;

        ConnectionInfo() :
            is_online(!SceneManager::shared_data["H"].empty()),
            is_host(SceneManager::shared_data["H"] == "1")
        {
            //
        }
    };

    class Game final : public Scene
    {
    public:
        Game();
        ~Game() noexcept override;

        void process_inputs()    override;
        void update(float delta) override;
        void draw()              override;

    private:
        friend class RestartButton;
        friend class GridButton;

        bool is_first_click;
        bool finished;

        int grid_width;
        int grid_height;
        int max_bombs;

        int flag_counter;

        ConnectionInfo conn_info;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> peer_info_font_data;
        std::pair<std::string, std::string> counter_font_data;
#endif // __S_RELEASE__

        std::unique_ptr<Emoji> emoji;

        std::vector<std::unique_ptr<Button>> buttons;
        std::vector<std::vector<std::unique_ptr<GridButton>>> grid;

        std::unordered_map<std::string, std::shared_ptr<sf::Texture>>     cached_grid_button_textures;
        std::unordered_map<std::string, std::shared_ptr<sf::SoundBuffer>> cached_grid_button_sounds;

        std::shared_ptr<sf::Texture> panel_texture;
        std::shared_ptr<sf::Texture> counter_panel_texture;
        std::shared_ptr<sf::Texture> online_match_panel_texture;

        std::shared_ptr<sf::SoundBuffer> clapping_sound;
        std::shared_ptr<sf::SoundBuffer> oooh_sound;

        std::shared_ptr<sf::Font> peer_info_font;
        std::shared_ptr<sf::Font> counter_font;

        std::shared_ptr<MusicStream> soundtrack;

        sf::Clock timer;

        sf::Sprite panel_sprite;
        sf::Sprite counter_panel_sprite;
        sf::Sprite online_match_panel_sprite;

        sf::Sound sound;

        sf::Text peer_info_text;
        sf::Text counter_text;

        sf::RectangleShape grid_outline;

        void build_initial_grid();
        void build_grid(sf::Vector2i first_disabled_cell_position);
        std::unordered_set<sf::Vector2i> create_bomb_positions(const sf::Vector2i& first_disabled_cell_position) const;
        unsigned parse_adjacent_cells(int x, int y, const std::unordered_set<sf::Vector2i>& bomb_positions) const noexcept;

        void restart();

        void save_record() const;
        void generate_encrypted_file(std::array<std::string, 3>&& record_values) const;

        void draw_peer_infos();
        void draw_counters();
    };

}

#endif // GAME_H
