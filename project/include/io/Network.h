/****************************************************************************************/
/* Network.h                                                                            */
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

#ifndef NETWORK_H
#define NETWORK_H

#include <string>

#include <SFML/Network/Socket.hpp>
#include <SFML/System/Clock.hpp>

namespace Minesweeper {

    class Network
    {
    protected:
        static constexpr float PING_DELAY = 1.f;

        const char ping_label;
        const char max_ping_label;

        sf::Socket::Status connection_status;

        sf::Clock ping_delay_timer;

        Network(char ping_label_, char max_ping_label_);

        virtual ~Network() noexcept {}

        virtual void receive_packages() = 0;

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

        void receive_ping(const std::string& ping_str) const;
        void receive_max_ping(const std::string& max_ping_str);
        void update_ping();

    private:
        void send_ping();
        void send_max_ping();
    };

}

#endif // NETWORK_H
