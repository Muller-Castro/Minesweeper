/****************************************************************************************/
/* Emoji.cpp                                                                            */
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

#include "Emoji.h"

#include <stdexcept>
#include <unordered_set>

#include <SFML/Graphics/RenderWindow.hpp>

#include "io/ResourceLoader.h"
#include "MinesweeperGame.h"
#include "Input.h"
#ifdef __S_RELEASE__
#include "assets/SmilingFace.h"
#include "assets/HushedFace.h"
#include "assets/SunglassesFace.h"
#include "assets/BandageFace.h"
#endif // __S_RELEASE__

using namespace Minesweeper;

Emoji::Emoji(const sf::Vector2f& position) :
    face_type(SMILING),
    textures(),
    sprite()
{
#ifndef __S_RELEASE__
    textures[SMILING]    = ResourceLoader::load<sf::Texture>("assets/textures/SmilingFace.png");
    textures[HUSHED]     = ResourceLoader::load<sf::Texture>("assets/textures/HushedFace.png");
    textures[SUNGLASSES] = ResourceLoader::load<sf::Texture>("assets/textures/SunglassesFace.png");
    textures[BANDAGE]    = ResourceLoader::load<sf::Texture>("assets/textures/BandageFace.png");
#else
    textures[SMILING]    = ResourceLoader::load<sf::Texture>(get_raw_smiling_face());
    textures[HUSHED]     = ResourceLoader::load<sf::Texture>(get_raw_hushed_face());
    textures[SUNGLASSES] = ResourceLoader::load<sf::Texture>(get_raw_sunglasses_face());
    textures[BANDAGE]    = ResourceLoader::load<sf::Texture>(get_raw_bandage_face());
#endif // __S_RELEASE__

    sprite.setTexture(*textures[face_type]);
    sprite.setPosition(position);
}

void Emoji::process_inputs()
{
    if(

       !Input::is_pressed<Input::Mouse>(sf::Mouse::Left) &&

       std::unordered_set<unsigned char>{

           Emoji::SUNGLASSES,
           Emoji::BANDAGE

       }.count(face_type) == 0

    ) set_face(Emoji::SMILING);
}

void Emoji::update(float delta)
{
    //
}

void Emoji::draw()
{
    MinesweeperGame::window->draw(sprite);
}

void Emoji::set_face(unsigned char face_type_)
{
    if((face_type_ >= TOTAL) || (face_type_ < 0)) throw std::runtime_error("Invalid face type");

    face_type = face_type_;

    sprite.setTexture(*textures[face_type]);
}

void Emoji::restart()
{
    set_face(Emoji::SMILING);
}
