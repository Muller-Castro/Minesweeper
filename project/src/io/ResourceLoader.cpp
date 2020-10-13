/****************************************************************************************/
/* ResourceLoader.cpp                                                                   */
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

#include "io/ResourceLoader.h"

#include <stdexcept>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Audio/Music.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

using namespace Minesweeper;

std::map<std::string, Resource> ResourceLoader::resources;

Resource::Resource(Extensions re) : internal_counter(0), resource(nullptr), extension(re)
{
    switch(extension) {

        case Extensions::JPG:
        case Extensions::PNG: { resource = static_cast<void*>(new sf::Texture()); }     break;

        case Extensions::OGG: { resource = static_cast<void*>(new sf::Music()); }       break;
        case Extensions::WAV: { resource = static_cast<void*>(new sf::SoundBuffer()); } break;

        case Extensions::UNDEFINED:
        default: break;

    }
}

Resource::~Resource() noexcept
{
    if(!resource) return;

    switch(extension) {

        case Extensions::JPG:
        case Extensions::PNG: { delete static_cast<sf::Texture*>(resource); }     break;

        case Extensions::OGG: { delete static_cast<sf::Music*>(resource); }       break;
        case Extensions::WAV: { delete static_cast<sf::SoundBuffer*>(resource); } break;

        case Extensions::UNDEFINED:
        default: break;

    }

    resource = nullptr;
}

Resource ResourceLoader::load_impl(const std::string& directory)
{
    Resource result;

    size_t dot_position = directory.rfind('.');

    if(dot_position == std::string::npos) throw std::runtime_error("Missing file extension in \"" + directory + "\"");

    std::string file_extension = directory.substr(dot_position);

    if(file_extension == ".jpg") {

        result = Resource(Resource::Extensions::JPG);

        if(!static_cast<sf::Texture*>(result.resource)->loadFromFile(directory)) throw std::runtime_error("Failed to load \"" + directory + "\"");

    }else if(file_extension == ".png") {

        result = Resource(Resource::Extensions::PNG);

        if(!static_cast<sf::Texture*>(result.resource)->loadFromFile(directory)) throw std::runtime_error("Failed to load \"" + directory + "\"");

    }else if(file_extension == ".ogg") {

        result = Resource(Resource::Extensions::OGG);

        if(!static_cast<sf::Music*>(result.resource)->openFromFile(directory)) throw std::runtime_error("Failed to load \"" + directory + "\"");

    }

    if(!result) throw std::runtime_error("Couldn't load resource at \"" + directory + "\"");

    return result;
}

void ResourceLoader::erase_unique_references()
{
    for(auto cit = ResourceLoader::resources.cbegin(); cit != ResourceLoader::resources.cend(); ++cit) {

        if((*cit).second.internal_counter == 0) cit = ResourceLoader::resources.erase(cit);

    }
}
