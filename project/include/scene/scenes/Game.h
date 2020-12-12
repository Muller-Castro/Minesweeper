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
#include <unordered_set>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

#include "scene/Scene.h"
#include "components/buttons/GridButton.h"

namespace Minesweeper {

    class Game final : public Scene
    {
    public:
        Game();
        ~Game() noexcept override;

        void process_inputs()    override;
        void update(float delta) override;
        void draw()              override;

    private:
        friend class GridButton;

        bool is_first_click;

        int grid_width;
        int grid_height;
        int max_bombs;

        std::vector<std::vector<std::unique_ptr<GridButton>>> grid;

        std::shared_ptr<sf::Texture> panel_texture;

        sf::Sprite panel_sprite;

        sf::RectangleShape grid_outline;

        void build_initial_grid();
        void build_grid(const sf::Vector2i& first_disabled_cell_position);
        std::unordered_set<sf::Vector2i> create_bomb_positions(const sf::Vector2i& first_disabled_cell_position) const;
        unsigned parse_adjacent_cells(int x, int y, const std::unordered_set<sf::Vector2i>& bomb_positions) const noexcept;
    };

}

#endif // GAME_H
