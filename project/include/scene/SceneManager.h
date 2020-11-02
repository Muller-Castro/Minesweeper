/****************************************************************************************/
/* SceneManager.h                                                                       */
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

#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

#include <memory>
#include <functional>
#include <queue>

#include "scene/Scene.h"

namespace Minesweeper {

    class MinesweeperGame;

    class SceneManager
    {
    public:
        enum class Scenes : unsigned char
        {
            UNDEFINED,

            SPLASH_SCREEN,
            MAIN_MENU
        };

        static void change_scene_to(Scenes scene);
        static void restart_scene();

        template<typename Fn>
        static void call_deferred(Fn fn) { SceneManager::deferred_processes.push(fn); }

    private:
        friend class MinesweeperGame;

        static std::unique_ptr<Scene> current_scene;
        static Scenes current_scene_enum;

        static std::queue<std::function<void(void)>> deferred_processes;

        static void process_inputs();
        static void update(float);
        static void draw();

        static void force_scene_change(Scenes scene);

        static void run_deferred();
    };

}

#endif // SCENE_MANAGER_H
