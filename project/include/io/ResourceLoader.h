/****************************************************************************************/
/* ResourceLoader.h                                                                     */
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

#ifndef RESOURCE_LOADER_H
#define RESOURCE_LOADER_H

#include <memory>
#include <map>

#ifdef __S_RELEASE__
#include <string>
#include <utility>
#endif // __S_RELEASE__

namespace Minesweeper {

    class ResourceLoader
    {
    public:
#ifdef __S_RELEASE__
        template<typename ResourceType>
        static std::shared_ptr<ResourceType> load(const std::pair<std::string, std::string>& raw_data);
#else
        template<typename ResourceType>
        static std::shared_ptr<ResourceType> load(const std::string& directory);
#endif // __S_RELEASE__

    private:
        friend class MinesweeperGame;
#ifndef __S_RELEASE__
        friend class GlobalConfigurations;
#endif // __S_RELEASE__

        static std::map<std::string, std::shared_ptr<void>> resources;

#ifndef __S_RELEASE__
        template<typename ResourceType>
        static std::shared_ptr<void> create_resource(const std::string& directory);

        static std::shared_ptr<void> create_shader(const std::string& directory, int shader_type);
        static std::shared_ptr<void> create_shader(const std::string& directory, bool vrt_geo_frg = false);
#endif // __S_RELEASE__

#ifdef __S_RELEASE__
        template<typename ResourceType>
        static std::shared_ptr<void> load_impl(const std::pair<std::string, std::string>& raw_data);
#else
        static std::shared_ptr<void> load_impl(const std::string& directory);
#endif // __S_RELEASE__
        static void erase_unique_references();
    };

}

#include "io/ResourceLoader.hpp"

#endif // RESOURCE_LOADER_H
