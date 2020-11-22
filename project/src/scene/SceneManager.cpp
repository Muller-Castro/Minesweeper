/****************************************************************************************/
/* SceneManager.cpp                                                                     */
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

#include "scene/SceneManager.h"

#ifndef __S_RELEASE__
#include "GlobalConfigurations.h"
#endif // __S_RELEASE__

#include "scene/scenes/SplashScreen.h"
#include "scene/scenes/MainMenu.h"
#include "scene/scenes/Game.h"

#include "io/ResourceLoader.h"

using namespace Minesweeper;

std::unique_ptr<Scene> SceneManager::current_scene;
SceneManager::Scenes SceneManager::current_scene_enum = SceneManager::Scenes::UNDEFINED;

std::queue<std::function<void(void)>> SceneManager::deferred_processes;

void SceneManager::change_scene_to(Scenes scene)
{
    SceneManager::call_deferred(std::bind(&SceneManager::force_scene_change, scene));
}

void SceneManager::force_scene_change(Scenes scene)
{
    SceneManager::current_scene.reset(nullptr);
    ResourceLoader::erase_unique_references();

    switch(scene) {

        case Scenes::SPLASH_SCREEN: {

            SceneManager::current_scene.reset(new SplashScreen());

#ifndef __S_RELEASE__
            GlobalConfigurations::current_scene_name = "SPLASH SCREEN";
#endif // __S_RELEASE__

        } break;

        case Scenes::MAIN_MENU: {

            SceneManager::current_scene.reset(new MainMenu());

#ifndef __S_RELEASE__
            GlobalConfigurations::current_scene_name = "MAIN MENU";
#endif // __S_RELEASE__

        } break;

        case Scenes::GAME: {

            SceneManager::current_scene.reset(new Game());

#ifndef __S_RELEASE__
            GlobalConfigurations::current_scene_name = "GAME";
#endif // __S_RELEASE__

        } break;

        case Scenes::UNDEFINED:
        default: break;

    }

    SceneManager::current_scene_enum = scene;
}

void SceneManager::restart_scene()
{
    SceneManager::change_scene_to(SceneManager::current_scene_enum);
}

void SceneManager::process_inputs()
{
    SceneManager::current_scene->process_inputs();
}

void SceneManager::update(float d)
{
    SceneManager::current_scene->update(d);
}

void SceneManager::draw()
{
    SceneManager::current_scene->draw();
    SceneManager::current_scene->dispatch_layers_draws();
}

void SceneManager::run_deferred()
{
    while(!SceneManager::deferred_processes.empty()) {

        SceneManager::deferred_processes.front()();

        SceneManager::deferred_processes.pop();

    }
}
