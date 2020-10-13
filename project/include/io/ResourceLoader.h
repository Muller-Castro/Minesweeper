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

#include <map>

namespace Minesweeper {

    class Resource;

    template<typename ResourceType>
    class ResourceReference
    {
    public:
        using RType = ResourceType;

        ResourceReference() : just_moved(false), res(nullptr) {}
        ResourceReference(const ResourceReference& rr);

        ResourceReference(ResourceReference&& rr) noexcept : just_moved(true), res(rr.res)
        {
            rr.res = nullptr;
        }

        ~ResourceReference() noexcept;

        ResourceReference& operator=(const ResourceReference& rr);

        ResourceReference& operator=(ResourceReference&& rr) noexcept
        {
            if(this != &rr) {

                just_moved = true;
                res = rr.res;

                rr.res = nullptr;

            }

            return *this;
        }

        ResourceType& operator*() noexcept;
        ResourceType* operator->() noexcept;

    private:
        friend class Resource;

        bool just_moved;
        Resource* res;

        explicit ResourceReference(Resource* p) noexcept;
    };

    class Resource
    {
    public:
        unsigned internal_counter;
        void* resource;

        Resource() noexcept : internal_counter(0), resource(nullptr), extension(Extensions::UNDEFINED) {}
        ~Resource() noexcept;

    private:
        friend class ResourceLoader;

        enum class Extensions : unsigned char
        {
            UNDEFINED,

            JPG,
            PNG,
            OGG,
            WAV
        };

        Extensions extension;

        explicit Resource(Extensions re);
        Resource(const Resource&) = delete;

//        Resource(Resource&&) noexcept = default;
        Resource(Resource&& r) noexcept : internal_counter(r.internal_counter), resource(r.resource), extension(r.extension)
        {
            r.internal_counter = 0;
            r.resource = nullptr;
            r.extension = Extensions::UNDEFINED;
        }

        Resource& operator=(const Resource&) = delete;

//        Resource& operator=(Resource&&) noexcept = default;
        Resource& operator=(Resource&& r) noexcept
        {
            if(this != &r) {

                internal_counter = r.internal_counter;
                resource         = r.resource;
                extension        = r.extension;

                r.internal_counter = 0;
                r.resource = nullptr;
                r.extension = Extensions::UNDEFINED;

            }

            return *this;
        }

        explicit operator bool() const noexcept { return extension != Extensions::UNDEFINED; }

        template<typename ResourceType>
        ResourceReference<ResourceType> create_res_reference() noexcept { return ResourceReference<ResourceType>(this); }
    };

    class ResourceLoader
    {
    public:
        template<typename ResourceType>
        static ResourceReference<ResourceType> load(const std::string& directory);

    private:
        friend class MinesweeperGame;

        static std::map<std::string, Resource> resources;

        static Resource load_impl(const std::string& directory);
        static void erase_unique_references();
    };

}

#include "io/ResourceLoader.hpp"

#endif // RESOURCE_LOADER_H
