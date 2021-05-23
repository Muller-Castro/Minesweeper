/****************************************************************************************/
/* ResourceLoader.hpp                                                                   */
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

#ifdef __S_RELEASE__
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/Shader.hpp>
#endif // __S_RELEASE__

#include "io/MusicStream.h"

namespace Minesweeper {

#ifdef __S_RELEASE__

    template<>
    std::shared_ptr<void> ResourceLoader::load_impl<MusicStream>(const std::pair<std::string, std::string>& raw_data);

    template<>
    std::shared_ptr<void> ResourceLoader::load_impl<sf::Shader>(const std::pair<std::string, std::string>& raw_data);

    template<typename ResourceType>
    std::shared_ptr<void> ResourceLoader::load_impl(const std::pair<std::string, std::string>& raw_data)
    {
        std::shared_ptr<ResourceType> result = std::make_shared<ResourceType>();

        if(!result->loadFromMemory(raw_data.second.c_str(), raw_data.second.length()))
            throw std::runtime_error("Failed to load \"" + raw_data.first + "\"");

        return std::static_pointer_cast<void>(result);
    }

    template<typename ResourceType>
    std::shared_ptr<ResourceType> ResourceLoader::load(const std::pair<std::string, std::string>& raw_data)
    {
        try {

            return std::static_pointer_cast<ResourceType>(ResourceLoader::resources.at(raw_data.first));

        }catch(const std::out_of_range& e) {

            ResourceLoader::resources[raw_data.first] = ResourceLoader::load_impl<ResourceType>(raw_data);

            return std::static_pointer_cast<ResourceType>(ResourceLoader::resources[raw_data.first]);

        }
    }

#else

    template<typename ResourceType>
    std::shared_ptr<ResourceType> ResourceLoader::load(const std::string& directory)
    {
#ifdef __DEBUG__
        const std::string fixed_directory = directory;
#elif defined(__RELEASE__)
        const std::string fixed_directory = "../../" + directory;
#endif

        try {

            return std::static_pointer_cast<ResourceType>(ResourceLoader::resources.at(fixed_directory));

        }catch(const std::out_of_range& e) {

            ResourceLoader::resources[fixed_directory] = ResourceLoader::load_impl(fixed_directory);

            return std::static_pointer_cast<ResourceType>(ResourceLoader::resources[fixed_directory]);

        }
    }

#endif // __S_RELEASE__

}
