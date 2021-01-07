/****************************************************************************************/
/* Lobby.h                                                                              */
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

#ifndef LOBBY_H
#define LOBBY_H

#include <memory>
#include <map>
#include <unordered_map>
#include <vector>

#include <SFML/System/Clock.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Shader.hpp>

#include "scene/Scene.h"
#include "components/buttons/LobbyReturnButton.h"
#include "components/TextEdit.h"
#include "components/Button.h"
#include "components/Panel.h"

namespace Minesweeper {

    class Lobby final : public Scene
    {
    public:
        Lobby();
        ~Lobby() noexcept override;

        void process_inputs()    override;
        void update(float delta) override;
        void draw()              override;

    private:
        friend class HostButton;
        friend class JoinButton;

        enum class States : unsigned char
        {
            REGISTRATION,
            CONNECTING, // JOIN
            WAITING
        };

        States current_state;

        LobbyReturnButton return_button;

        sf::Clock in_time;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> text_edit_font_data;
#endif // __S_RELEASE__

        std::vector<TextEdit> text_edits;

        std::unordered_map<States, std::vector<std::unique_ptr<Button>>> buttons;

        std::map<std::string, Panel> panels;

        std::shared_ptr<sf::Texture> background_texture;
        std::shared_ptr<sf::Texture> lobby_registration_panel_texture;

        sf::Sprite background_sprite;
        sf::Sprite lobby_registration_panel_sprite;

        std::shared_ptr<sf::Shader> background_shader;

        bool evaluate_text_edits();
    };

}

#endif // LOBBY_H
