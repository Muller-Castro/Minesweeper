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

#include "scene/scenes/SplashScreen.h"

using namespace Minesweeper;

std::unique_ptr<Scene> SceneManager::current_scene;
SceneManager::Scenes SceneManager::current_scene_enum = SceneManager::Scenes::UNDEFINED;

void SceneManager::change_scene_to(Scenes scene)
{
    switch(scene) {

        case Scenes::SPLASH_SCREEN: { SceneManager::current_scene.reset(new SplashScreen()); } break;
        //

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


