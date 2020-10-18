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
#include <SFML/Graphics/Font.hpp>

using namespace Minesweeper;

std::map<std::string, std::shared_ptr<void>> ResourceLoader::resources;

template<typename ResourceType>
std::shared_ptr<void> ResourceLoader::create_resource(const std::string& directory)
{
    std::shared_ptr<ResourceType> new_resource = std::make_shared<ResourceType>();

    if(!new_resource->loadFromFile(directory)) throw std::runtime_error("Failed to load \"" + directory + "\"");

    return std::static_pointer_cast<void>(new_resource);
}

template<>
std::shared_ptr<void> ResourceLoader::create_resource<sf::Music>(const std::string& directory)
{
    std::shared_ptr<sf::Music> new_music = std::make_shared<sf::Music>();

    if(!new_music->openFromFile(directory)) throw std::runtime_error("Failed to load \"" + directory + "\"");

    return std::static_pointer_cast<void>(new_music);
}

std::shared_ptr<void> ResourceLoader::load_impl(const std::string& directory)
{
    std::shared_ptr<void> result;

    size_t dot_position = directory.rfind('.');

    if(dot_position == std::string::npos) throw std::runtime_error("Missing file extension in \"" + directory + "\"");

    std::string file_extension = directory.substr(dot_position);

    if     (file_extension == ".jpg") result = ResourceLoader::create_resource<sf::Texture>(directory);
    else if(file_extension == ".png") result = ResourceLoader::create_resource<sf::Texture>(directory);
    else if(file_extension == ".ogg") result = ResourceLoader::create_resource<sf::Music>(directory);
    else if(file_extension == ".wav") result = ResourceLoader::create_resource<sf::SoundBuffer>(directory);
    else if(file_extension == ".ttf" || file_extension == ".otf") result = ResourceLoader::create_resource<sf::Font>(directory);

    if(!result) throw std::runtime_error("Couldn't load resource at \"" + directory + "\"");

    return result;
}

void ResourceLoader::erase_unique_references()
{
    for(auto cit = ResourceLoader::resources.cbegin(); cit != ResourceLoader::resources.cend();) {

        if((*cit).second.unique()) cit = ResourceLoader::resources.erase(cit);
        else ++cit;

    }
}
