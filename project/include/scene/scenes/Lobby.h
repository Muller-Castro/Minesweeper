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
#include <SFML/Graphics/VertexArray.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Shader.hpp>
#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Network/TcpListener.hpp>

#include "scene/Scene.h"
#include "components/buttons/LobbyReturnButton.h"
#include "components/TextEdit.h"
#include "components/Button.h"
#include "components/Panel.h"
#include "io/MusicStream.h"

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
        friend class LobbyReturnButton;
        friend class HostButton;
        friend class JoinButton;
        friend class ConnectionCancelButton;
        friend class LobbyBeginnerButton;
        friend class LobbyAverageButton;
        friend class LobbyExpertButton;
        friend class DurationAButton;
        friend class DurationBButton;
        friend class DurationCButton;
        friend class StartButton;

        enum class States : unsigned char
        {
            REGISTRATION,
            CONNECTING, // JOIN
            WAITING
        };

        enum class Difficulties : unsigned char
        {
            BEGINNER,
            AVERAGE,
            EXPERT
        };

        enum class Durations : unsigned char
        {
            SHORT,
            NORMAL,
            LONG
        };

        static constexpr float JOIN_DELAY = 2.f;
        static constexpr float PING_DELAY = 1.f;

        float arrow_speed;

        States current_state;

        LobbyReturnButton return_button;

        sf::Clock in_time;
        sf::Clock join_delay_timer;
        sf::Clock ping_delay_timer;

        sf::VertexArray arrow;

        sf::Socket::Status connection_status;

#ifdef __S_RELEASE__
        std::pair<std::string, std::string> text_edit_font_data;
        std::pair<std::string, std::string> general_info_font_data;
        std::pair<std::string, std::string> you_font_data;
#endif // __S_RELEASE__

        std::vector<TextEdit> text_edits;

        std::unordered_map<States, std::vector<std::unique_ptr<Button>>> buttons;

        std::map<std::string, Panel> panels;

        std::shared_ptr<sf::Texture> background_texture;
        std::shared_ptr<sf::Texture> lobby_registration_panel_texture;
        std::shared_ptr<sf::Texture> select_difficulty_panel_texture;
        std::shared_ptr<sf::Texture> select_duration_panel_texture;
        std::shared_ptr<sf::Texture> p1_panel;
        std::shared_ptr<sf::Texture> p2_panel;

        std::shared_ptr<sf::Font> general_info_font;
        std::shared_ptr<sf::Font> you_font;

        sf::Sprite background_sprite;
        sf::Sprite lobby_registration_panel_sprite;
        sf::Sprite select_panels;
        sf::Sprite match_panels;

        sf::Text players_info_text;
        sf::Text connecting_text;
        sf::Text you_text;

        std::shared_ptr<sf::Shader> background_shader;

        sf::Sound sound;

        std::shared_ptr<sf::SoundBuffer> client_arrived_s_buffer;

        std::shared_ptr<MusicStream> soundtrack;

        std::unique_ptr<sf::TcpListener> listener;

        void receive_packages();
        void send(char label, const std::string& data);

        template<char c>
        std::string retrieve_data(size_t idx, const std::string& data)
        {
            std::string result;

            for(std::string::const_iterator cit = data.cbegin() + idx + 1; cit != data.cend(); ++cit) {

                if(*cit == c) break;

                result += *cit;

            }

            return result;
        }

        bool evaluate_text_edits();
        bool evaluate_port();
        bool evaluate_ip_port();

        void reset_config_buttons();
        void change_difficulty(Difficulties d, const std::string& difficulty);
        void change_duration(Durations d, const std::string& duration);
        void receive_password(const std::string& password_str);
        void receive_password_response(const std::string& response_str);
        void receive_ping(const std::string& ping_str) const;
        void receive_max_ping(const std::string& max_ping_str);
        void send_ping();
        void send_max_ping();

        void update_connecting();
        void update_waiting();
        void update_you(float delta);
        void update_ping();
        void draw_connecting();
        void draw_waiting();
        void draw_you();
        void draw_players_info();
        void draw_player_info_text(const std::pair<std::string, sf::Vector2f>& name, const std::pair<std::string, sf::Vector2f>& ip, const std::pair<std::string, sf::Vector2f>& ping, const std::pair<std::string, sf::Vector2f>& max_ping);
        void draw_inactivation_rects();
    };

}

#endif // LOBBY_H
