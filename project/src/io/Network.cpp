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

#include <SFML/Network/Packet.hpp>

#include "MinesweeperGame.h"

using namespace Minesweeper;

Network::Network() :
    connection_status(sf::Socket::NotReady)
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
