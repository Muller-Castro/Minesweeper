/****************************************************************************************/
/* GridButton.cpp                                                                       */
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

#include "components/buttons/GridButton.h"

#include <unordered_set>
#include <sstream>
#include <list>

#include <SFML/Graphics/RenderWindow.hpp>

#include "tools/Vector2Hash.h"
#include "scene/SceneManager.h"
#include "scene/scenes/Game.h"
#include "Input.h"

using namespace Minesweeper;

GridButton::GridButton(Game& game, Types type_, bool disabled_, bool flagged_, const sf::Vector2i& cell_position_, Enabled enabled_, const sf::Vector2f& position_, const sf::Vector2f& scale_, const std::shared_ptr<sf::Texture>& hovered, const std::shared_ptr<sf::Texture>& non_hovered, const std::shared_ptr<sf::Texture>& down, const std::shared_ptr<sf::Texture>& icon, const std::shared_ptr<sf::Texture>& p1_flag, const std::shared_ptr<sf::Texture>& p2_flag, const std::shared_ptr<sf::Texture>& not_a_bomb_texture_, const std::shared_ptr<sf::SoundBuffer>& hovered_sfx, const std::shared_ptr<sf::SoundBuffer>& pressed_sfx) :
    Button(enabled_, position_, scale_, hovered, non_hovered, down, hovered_sfx, pressed_sfx),
    disabled(disabled_),
    flagged(flagged_),
    type(),
    game_ref(game),
    icon_texture(),
    p1_flag_texture(p1_flag),
    p2_flag_texture(p2_flag),
    not_a_bomb_texture(not_a_bomb_texture_),
    cell_position(cell_position_),
    pressed_color(sf::Color(200, 200, 200)),
    icon_sprite(),
    p1_flag_sprite(*p1_flag_texture),
    p2_flag_sprite(*p2_flag_texture),
    animations({
        Animation("WAVING_FLAG", 0.25f, {

            KeyFrame(0.f, [&]() {

                p1_flag_sprite.setTextureRect(sf::IntRect(0, 0, 16, 16));
                p2_flag_sprite.setTextureRect(sf::IntRect(0, 0, 16, 16));

            }),
            KeyFrame(0.125f, [&]() {

                p1_flag_sprite.setTextureRect(sf::IntRect(0, 16, 16, 16));
                p2_flag_sprite.setTextureRect(sf::IntRect(0, 16, 16, 16));

            })

        })
    }, "WAVING_FLAG")
{
    change_button_type(type_, icon);

    p1_flag_sprite.setOrigin(8.f, 8.f);
    p2_flag_sprite.setOrigin(8.f, 8.f);

    if(disabled) {

        sprite.setColor(pressed_color);

        set_current_texture(DOWN);

        if(type == Types::BOMB) animations.play("IGNITED_BOMB");
        else if(type == Types::NEUTRAL) {

            SceneManager::call_deferred([&]() {
                find_and_disable();
            });

        }

    }else if(flagged) {

        animations.play("WAVING_FLAG");

    }
}

void GridButton::process_inputs()
{
    if(game_ref.get().finished) return;

    set_flag();

    if(!disabled && !flagged) Button::process_inputs();
}

void GridButton::update(float delta)
{
#ifndef __DEBUG__
    if(disabled || flagged) {
#endif // __DEBUG__

        animations.update(delta);

#ifndef __DEBUG__
    }
#endif // __DEBUG__

    if(!disabled) {

        Button::update(delta);

        if(state != States::PRESSED) {

            bounding_box.top    += 1.f;
            bounding_box.left   += 1.f;
            bounding_box.width  -= 1.f;
            bounding_box.height -= 1.f;

        }

    }

    icon_sprite.setPosition(position); // Don't put this line in an "else" of the "if" above to be able to see the icons on debug

    if(flagged) {

        p1_flag_sprite.setPosition(position);
        p2_flag_sprite.setPosition(position);

    }
}

void GridButton::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    Button::draw(target, states);

    if(flagged) {

        target.draw(p1_flag_sprite, states);

    }
#ifndef __DEBUG__
    else if(disabled) {
#endif // __DEBUG__

        target.draw(icon_sprite, states);

#ifndef __DEBUG__
    }
#endif // __DEBUG__
}

void GridButton::on_button_up()
{
    //
}

void GridButton::on_button_down()
{
    //
}

void GridButton::on_button_pressed()
{
    if(game_ref.get().is_first_click) {

        sprite.setColor(pressed_color);
        set_current_texture(DOWN);

        SceneManager::call_deferred([&]() {
            game_ref.get().is_first_click = false;
            game_ref.get().build_grid(cell_position);
            // Do NOT do anything further
        });

    }else {

        if(type == Types::BOMB) {

            pressed_color = sf::Color::Red;

            for(size_t y = 0; y < game_ref.get().grid.size(); ++y) {

                for(size_t x = 0; x < game_ref.get().grid[y].size(); ++x) {

                    GridButton* grid_button = game_ref.get().grid[y][x].get();

                    if(cell_position == grid_button->cell_position) continue;

                    if(grid_button->type == Types::BOMB && !grid_button->flagged) {

                        grid_button->disable();

                    }else if(grid_button->type != Types::BOMB && grid_button->flagged) {

                        grid_button->flagged = false;
                        grid_button->disable();

                        // Recycling the "IGNITED_BOMB" animation
                        grid_button->icon_sprite.setTexture(*not_a_bomb_texture);
                        grid_button->icon_sprite.setOrigin(8.f, 8.f);
                        grid_button->add_bomb_animation();
                        grid_button->animations.play("IGNITED_BOMB");
                        // Recycling the "IGNITED_BOMB" animation

                    }

                }

            }

            game_ref.get().finished = true;

        }

        disable();

        if(type == Types::NEUTRAL) find_and_disable();

    }
}

void GridButton::add_bomb_animation()
{
    animations.add_animations(

        {
            Animation("IGNITED_BOMB", 0.75f, {

                KeyFrame(0.f, [&]() {

                    icon_sprite.setTextureRect(sf::IntRect(0, 0, 16, 16));

                }),

                KeyFrame(0.25f, [&]() {

                    icon_sprite.setTextureRect(sf::IntRect(16, 0, 16, 16));

                }),

                KeyFrame(0.5f, [&]() {

                    icon_sprite.setTextureRect(sf::IntRect(32, 0, 16, 16));

                }),

            })
        }

    );
}

void GridButton::change_button_type(Types new_type, const std::shared_ptr<sf::Texture>& new_icon_texture)
{
    type         = new_type;
    icon_texture = new_icon_texture;

    if(icon_texture) {

        icon_sprite.setTexture(*icon_texture);

        if(type == Types::BOMB) {

            if(!animations.has_animation("IGNITED_BOMB")) add_bomb_animation();

            icon_sprite.setOrigin(8.f, 8.f);

#ifdef __DEBUG__
            animations.play("IGNITED_BOMB");
#endif // __DEBUG__

        }else {

            icon_sprite.setOrigin((icon_texture->getSize().x * scale.x) / 2, (icon_texture->getSize().y * scale.y) / 2);

        }

    }
}

void GridButton::set_flag()
{
    if(disabled) return;

    if((game_ref.get().flag_counter <= 0) && !flagged) return;

    sf::Vector2i mouse_position = sf::Mouse::getPosition(*MinesweeperGame::window);

    bool mouse_entered = bounding_box.contains(sf::Vector2f(mouse_position.x, mouse_position.y));

    if(MinesweeperGame::window->hasFocus() && mouse_entered && Input::is_just_pressed<Input::Mouse>(sf::Mouse::Right) && !Input::is_pressed<Input::Mouse>(sf::Mouse::Left)) {

        flagged = !flagged;

        animations.stop();

        if(flagged) {

            --game_ref.get().flag_counter;

            animations.play("WAVING_FLAG");

        }else {

            ++game_ref.get().flag_counter;

        }

    }
}

void GridButton::disable()
{
    sprite.setColor(pressed_color);

    if(!game_ref.get().is_first_click) set_current_texture(DOWN);

    SceneManager::call_deferred([&]() {

        set_current_texture(DOWN);

        disabled = true;

        if(type == Types::BOMB) animations.play("IGNITED_BOMB");

    });
}

void GridButton::find_and_disable()
{
    std::unordered_set<sf::Vector2i> queued_buttons;

    std::list<GridButton*> neutral_buttons;

    neutral_buttons.push_back(game_ref.get().grid[cell_position.y][cell_position.x].get());

    for(std::list<GridButton*>::iterator it = neutral_buttons.begin(); it != neutral_buttons.end(); ++it) {

        GridButton* current_button = *it;

        sf::Vector2i current_cell_pos = current_button->cell_position;

        for(int y_parse = current_cell_pos.y - 1; y_parse != (current_cell_pos.y + 2); ++y_parse) {

            for(int x_parse = current_cell_pos.x - 1; x_parse != (current_cell_pos.x + 2); ++x_parse) {

                if(
                   ((x_parse == current_cell_pos.x) && (y_parse == current_cell_pos.y))                ||
                   ((y_parse < 0) || (static_cast<size_t>(y_parse) >= game_ref.get().grid.size()))     ||
                   ((x_parse < 0) || (static_cast<size_t>(x_parse) >= game_ref.get().grid[y_parse].size()))
                ) {

                    continue;

                }

                current_button = game_ref.get().grid[y_parse][x_parse].get();

                if((queued_buttons.find(sf::Vector2i(x_parse, y_parse)) == queued_buttons.end()) && !current_button->flagged) {

                    current_button->disable();
                    queued_buttons.emplace(x_parse, y_parse);

                    if(current_button->type == Types::NEUTRAL) neutral_buttons.push_back(current_button);

                }

    //            if(bomb_positions.find(sf::Vector2i(x_parse, y_parse)) != bomb_positions.end()) ++result;

            }

        }

    }
}
