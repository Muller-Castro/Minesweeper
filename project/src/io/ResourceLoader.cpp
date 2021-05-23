/****************************************************************************************/
/* ResourceLoader.cpp                                                                   */
/****************************************************************************************/
/* Copyright (c) 2020-2021 Muller Castro.                                               */
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
#include <iostream>

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Shader.hpp>

#include "io/MusicStream.h"

using namespace Minesweeper;

std::map<std::string, std::shared_ptr<void>> ResourceLoader::resources;

#ifndef __S_RELEASE__
template<typename ResourceType>
std::shared_ptr<void> ResourceLoader::create_resource(const std::string& directory)
{
    std::shared_ptr<ResourceType> new_resource = std::make_shared<ResourceType>();

    if(!new_resource->loadFromFile(directory)) throw std::runtime_error("Failed to load \"" + directory + "\"");

    return std::static_pointer_cast<void>(new_resource);
}

template<>
std::shared_ptr<void> ResourceLoader::create_resource<MusicStream>(const std::string& directory)
{
    return std::static_pointer_cast<void>(std::make_shared<MusicStream>(directory));
}

std::shared_ptr<void> ResourceLoader::create_shader(const std::string& directory, int shader_type)
{
    std::shared_ptr<sf::Shader> new_shader;

    if(sf::Shader::isAvailable()) {

        new_shader = std::make_shared<sf::Shader>();

        if(!new_shader->loadFromFile(directory, static_cast<sf::Shader::Type>(shader_type)))
            throw std::runtime_error("Failed to load \"" + directory + "\"");

    }else {

        std::cout << "\n----------------------------------------------------\n"
                  << "WARNING: Shaders are NOT supported on this computer."
                  << "\n----------------------------------------------------\n";

    }

    return std::static_pointer_cast<void>(new_shader);
}

std::shared_ptr<void> ResourceLoader::create_shader(const std::string& directory, bool vrt_geo_frg)
{
    std::shared_ptr<sf::Shader> new_shader;

    if(sf::Shader::isAvailable()) {

        new_shader = std::make_shared<sf::Shader>();

        if(!vrt_geo_frg) {

            if(!new_shader->loadFromFile(directory + ".vrt", directory + ".frg"))
                throw std::runtime_error("Failed to load \"" + directory + ".vrt_frg\"");

        }else {

            if(!new_shader->loadFromFile(directory + ".vrt", directory + ".geo", directory + ".frg"))
                throw std::runtime_error("Failed to load \"" + directory + ".vrt_geo_frg\"");

        }

    }else {

        std::cout << "\n----------------------------------------------------\n"
                  << "WARNING: Shaders are NOT supported on this computer."
                  << "\n----------------------------------------------------\n";

    }

    return std::static_pointer_cast<void>(new_shader);
}

std::shared_ptr<void> ResourceLoader::load_impl(const std::string& directory)
{
    std::shared_ptr<void> result;

    size_t dot_position = directory.rfind('.');

    if(dot_position == std::string::npos) throw std::runtime_error("Missing file extension in \"" + directory + "\"");

    std::string file_extension = directory.substr(dot_position);

    if     (file_extension == ".jpg") result = ResourceLoader::create_resource<sf::Texture>(directory);
    else if(file_extension == ".png") result = ResourceLoader::create_resource<sf::Texture>(directory);
    else if(file_extension == ".ogg") result = ResourceLoader::create_resource<MusicStream>(directory);
    else if(file_extension == ".wav") result = ResourceLoader::create_resource<sf::SoundBuffer>(directory);
    else if(file_extension == ".ttf" || file_extension == ".otf") result = ResourceLoader::create_resource<sf::Font>(directory);
    else if(file_extension == ".vrt") result = ResourceLoader::create_shader(directory, sf::Shader::Vertex);
    else if(file_extension == ".geo") result = ResourceLoader::create_shader(directory, sf::Shader::Geometry);
    else if(file_extension == ".frg") result = ResourceLoader::create_shader(directory, sf::Shader::Fragment);
    else if(file_extension == ".vrt_frg") result = ResourceLoader::create_shader(directory.substr(0, dot_position));
    else if(file_extension == ".vrt_geo_frg") result = ResourceLoader::create_shader(directory.substr(0, dot_position), true);

    if(!result) throw std::runtime_error("Couldn't load resource at \"" + directory + "\"");

    return result;
}

#else

template<>
std::shared_ptr<void> ResourceLoader::load_impl<MusicStream>(const std::pair<std::string, std::string>& raw_data)
{
    return std::static_pointer_cast<void>(std::make_shared<MusicStream>(raw_data.first, std::move(
        const_cast<std::pair<std::string, std::string>&>(raw_data).second
    )));
}

template<>
std::shared_ptr<void> ResourceLoader::load_impl<sf::Shader>(const std::pair<std::string, std::string>& raw_data)
{
    return std::static_pointer_cast<void>(std::make_shared<sf::Shader>());
}

#endif // __S_RELEASE__

void ResourceLoader::erase_unique_references()
{
    for(auto cit = ResourceLoader::resources.cbegin(); cit != ResourceLoader::resources.cend();) {

        if((*cit).second.unique()) cit = ResourceLoader::resources.erase(cit);
        else ++cit;

    }
}
