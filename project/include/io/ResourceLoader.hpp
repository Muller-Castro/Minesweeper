/****************************************************************************************/
/* ResourceLoader.hpp                                                                   */
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

namespace Minesweeper {

    template<typename ResourceType>
    std::shared_ptr<ResourceType> ResourceLoader::load(const std::string& directory)
    {
        std::shared_ptr<ResourceType> resource;

#ifdef __DEBUG__
        const std::string fixed_directory = "bin/Debug/" + directory;
#elif defined(__RELEASE__)
        const std::string fixed_directory = "bin/Release/" + directory;
#endif

        try {

            resource = std::static_pointer_cast<ResourceType>(ResourceLoader::resources.at(fixed_directory));

        }catch(const std::out_of_range& e) {

            resource = std::static_pointer_cast<ResourceType>(ResourceLoader::load_impl(fixed_directory));

            if(!resource) throw std::runtime_error("Couldn't load resource at \"" + fixed_directory + "\"");

            ResourceLoader::resources[fixed_directory] = std::static_pointer_cast<void>(resource);

        }

        return resource;
    }

}
