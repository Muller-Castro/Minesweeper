/****************************************************************************************/
/* Network.cpp                                                                          */
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

#include "io/Network.h"

#include <stdexcept>
#include <chrono>

#include <SFML/Network/Packet.hpp>

#include "MinesweeperGame.h"

using namespace Minesweeper;

Network::Network() :
    connection_status(sf::Socket::NotReady),
    ping_delay_timer()
{
    //
}

void Network::send(char label, const std::string& data)
{
    if((static_cast<int>(label) < 65) || (static_cast<int>(label) > 90)) throw std::runtime_error("The label must be a capital letter");

    for(std::string::const_iterator cit = data.cbegin(); cit != data.cend(); ++cit) {

        if((static_cast<int>(*cit) > 64) && (static_cast<int>(*cit) < 91)) throw std::runtime_error("The content must not contain capital letters");

    }

    sf::Packet p;

    p << (label + data + label);

    connection_status = MinesweeperGame::tcp_socket.send(p);
}

void Network::receive_ping(const std::string& ping_str) const
{
    if(ping_delay_timer.getElapsedTime().asSeconds() >= Network::PING_DELAY) {

        MinesweeperGame::new_peer_info.ping = std::stoi(ping_str);

    }
}

void Network::receive_max_ping(const std::string& max_ping_str)
{
    if(ping_delay_timer.getElapsedTime().asSeconds() >= Network::PING_DELAY) {

        MinesweeperGame::new_peer_info.max_ping = std::stoi(max_ping_str);

        ping_delay_timer.restart();

    }
}

void Network::send_ping()
{
    std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();

    MinesweeperGame::tcp_socket.setBlocking(true);

    send('D', std::to_string(MinesweeperGame::peer_info.ping));

    MinesweeperGame::tcp_socket.setBlocking(false);

    std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();

    if(ping_delay_timer.getElapsedTime().asSeconds() >= Network::PING_DELAY) {

        MinesweeperGame::peer_info.ping = std::chrono::duration_cast<PeerInfo::PingDuration>(t2 - t1).count();

    }
}

void Network::send_max_ping()
{
    if(ping_delay_timer.getElapsedTime().asSeconds() >= Network::PING_DELAY) {

        MinesweeperGame::peer_info.max_ping = MinesweeperGame::peer_info.ping > MinesweeperGame::peer_info.max_ping ? MinesweeperGame::peer_info.ping : MinesweeperGame::peer_info.max_ping;

    }

    send('E', std::to_string(MinesweeperGame::peer_info.max_ping));
}

void Network::update_ping()
{
    send_ping();
    send_max_ping();

//    if(ping_delay_timer.getElapsedTime().asSeconds() >= Network::PING_DELAY) ping_delay_timer.restart();
}
