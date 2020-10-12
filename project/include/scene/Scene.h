/****************************************************************************************/
/* Scene.h                                                                              */
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

#ifndef SCENE_H
#define SCENE_H

#include <queue>
#include <utility>

#include <SFML/Graphics/Sprite.hpp>

namespace Minesweeper {

    class SceneManager;

    class Scene
    {
    public:
        Scene();
        virtual ~Scene() noexcept;

        virtual void process_inputs()    = 0;
        virtual void update(float delta) = 0;
        virtual void draw()              = 0;

    protected:
        using SpriteLayer = std::pair<size_t, std::pair<sf::Sprite, sf::RenderStates>>;

        void draw_on_layer(size_t idx, const sf::Sprite& sprite, const sf::RenderStates& rs = sf::RenderStates::Default);

    private:
        friend SceneManager;

        template<typename LayerType>
        struct LayerComparator
        {
        public:
            bool operator()(const LayerType& lhs, const LayerType& rhs) const { return lhs.first > rhs.first; }
        };

        std::priority_queue<SpriteLayer, std::vector<SpriteLayer>, LayerComparator<SpriteLayer>> sprite_layers;

        void dispatch_layers_draws();
    };

}

#endif // SCENE_H
