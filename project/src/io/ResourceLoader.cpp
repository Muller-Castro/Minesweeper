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

using namespace Minesweeper;

std::map<std::string, std::shared_ptr<void>> ResourceLoader::resources;

std::shared_ptr<void> ResourceLoader::load_impl(const std::string& directory)
{
    std::shared_ptr<void> result;

    size_t dot_position = directory.rfind('.');

    if(dot_position == std::string::npos) throw std::runtime_error("Missing file extension in \"" + directory + "\"");

    std::string file_extension = directory.substr(dot_position);

    if((file_extension == ".png") || (file_extension == ".jpg")) {

        sf::Texture* texture = new sf::Texture;

        texture->loadFromFile(directory);

        result = std::make_shared<void*>(static_cast<void*>(texture));

    }

    return result;
}

void ResourceLoader::erase_unique_references()
{
    for(auto cit = ResourceLoader::resources.cbegin(); cit != ResourceLoader::resources.cend(); ++cit) {

        if((*cit).second.unique()) cit = ResourceLoader::resources.erase(cit);

    }
}
