/****************************************************************************************/
/* Game.cpp                                                                             */
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

#include "scene/scenes/Game.h"

#include <sstream>
#include <chrono>
#include <random>
#include <vector>

#include <SFML/Graphics/RenderWindow.hpp>

#include "io/ResourceLoader.h"
#include "scene/SceneManager.h"
#include "MinesweeperGame.h"

using namespace Minesweeper;

namespace std {

    template<>
    struct hash<sf::Vector2i>
    {
        size_t operator()(const sf::Vector2i& v) const noexcept
        {
            std::ostringstream oss;

            oss << v.x << v.y;

            return hash<std::string>()(oss.str());
        }
    };

}

Game::Game() :
    grid(),
    panel_texture(),
    panel_sprite(),
    grid_outline()
{
#ifndef __S_RELEASE__
    panel_texture = ResourceLoader::load<sf::Texture>("assets/textures/GamePanel.png");
#else
    //
#endif // __S_RELEASE__

    panel_sprite.setTexture(*panel_texture);

    build_grid();
}

Game::~Game() noexcept
{
    //
}

void Game::process_inputs()
{
    for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

        for(auto& grid_button : row) grid_button->process_inputs();

    }
}

void Game::update(float delta)
{
    for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

        for(auto& grid_button : row) grid_button->update(delta);

    }
}

void Game::draw()
{
    MinesweeperGame::window->draw(panel_sprite);

    MinesweeperGame::window->draw(grid_outline);

    for(std::vector<std::unique_ptr<GridButton>>& row : grid) {

        for(auto& grid_button : row) MinesweeperGame::window->draw(*grid_button);

    }
}

void Game::build_grid()
{
    std::string difficulty_level = SceneManager::shared_data["DIFFICULTY"];

    int width     = 0;
    int height    = 0;
    int max_bombs = 0;

    if(difficulty_level == "0") {

        width = height = 16;
        max_bombs = 31;

    }else if(difficulty_level == "1") {

        width  = 16;
        height = 23;
        max_bombs = 55;

    }else if(difficulty_level == "2") {

        width  = 38;
        height = 23;
        max_bombs = 175; // 186

    }

    std::unordered_set<sf::Vector2i> bomb_positions = create_bomb_positions(width, height, max_bombs);

    // When you are done fixing the window resize, change these calculations from constant to dynamic
    float grid_x = 800 / 2 - width * 10 + 10;
    float grid_y = (92 + 508 / 2) - height * 10 + 10;

    grid.resize(height);

    for(int y = 0; y < height; ++y) {

        grid[y].resize(width);

        for(int x = 0; x < width; ++x) {

            bool is_bomb = bomb_positions.find(sf::Vector2i(x, y)) != bomb_positions.end();

            GridButton::Types button_type = GridButton::Types::BOMB;

            std::shared_ptr<sf::Texture> icon_texture;

            if(!is_bomb) {

                unsigned adjacent_bomb_count = parse_adjacent_cells(x, y, bomb_positions);

                if(!adjacent_bomb_count) {

                    button_type  = GridButton::Types::NEUTRAL;

                }else {

                    button_type  = GridButton::Types::NUMBER;

                    switch(adjacent_bomb_count) {

                        case 1: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon1.png"); } break;
                        case 2: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon2.png"); } break;
                        case 3: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon3.png"); } break;
                        case 4: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon4.png"); } break;
                        case 5: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon5.png"); } break;
                        case 6: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon6.png"); } break;
                        case 7: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon7.png"); } break;
                        case 8: { icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/Icon8.png"); } break;

                        default: { throw std::runtime_error("Adjacent bombs > 8 ... This shouldn't be possible..."); };

                    }

                }

            }else {

                icon_texture = ResourceLoader::load<sf::Texture>("assets/textures/MiniBombSpriteSheet.png");

            }

            grid[y][x] = std::unique_ptr<GridButton>(new GridButton(
                button_type,
                sf::Vector2f(x * 20.f + grid_x, y * 20.f + grid_y),
                sf::Vector2f(1.f, 1.f),
                ResourceLoader::load<sf::Texture>("assets/textures/GridButtonUp.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/GridButtonUp.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/EmptyCell.png"),
                icon_texture,
                ResourceLoader::load<sf::Texture>("assets/textures/P1Flag.png"),
                ResourceLoader::load<sf::Texture>("assets/textures/P2Flag.png"),
                {},
                ResourceLoader::load<sf::SoundBuffer>(std::string("assets/sounds/") + (is_bomb ? "BombExplosion.wav" : "GridButtonPressed.wav"))
            ));

        }

    }

    grid_outline.setPosition(sf::Vector2f{grid_x - 15.f, grid_y - 15.f});
    grid_outline.setSize(sf::Vector2f{20.f * width + 10.f, 20.f * height + 10.f});
    grid_outline.setFillColor(sf::Color::Black);
}

std::unordered_set<sf::Vector2i> Game::create_bomb_positions(int width, int height, int max_bombs) const
{
    std::unordered_set<sf::Vector2i> result;

    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> x_distribution(0, width - 1), y_distribution(0, height - 1);

    for(int i = 0; i < max_bombs; ++i) {

        std::pair<std::unordered_set<sf::Vector2i>::iterator, bool> new_entry;

        int new_x = x_distribution(generator);
        int new_y = y_distribution(generator);

        while(!new_entry.second) {

            new_entry = result.emplace(new_x, new_y);

            if(new_x == (width - 1)) {

                new_x = 0;
                ++new_y;

                if(new_y == (height - 1)) new_y = 0;

            }else {

                ++new_x;

            }

        }

    }

    return result;
}

unsigned Game::parse_adjacent_cells(int x, int y, const std::unordered_set<sf::Vector2i>& bomb_positions) const noexcept
{
    unsigned result = 0;

    for(int y_parse = y - 1; y_parse != (y + 2); ++y_parse) {

        for(int x_parse = x - 1; x_parse != (x + 2); ++x_parse) {

            if((x_parse == x) && (y_parse == y)) continue;

            if(bomb_positions.find(sf::Vector2i(x_parse, y_parse)) != bomb_positions.end()) ++result;

        }

    }

    return result;
}
