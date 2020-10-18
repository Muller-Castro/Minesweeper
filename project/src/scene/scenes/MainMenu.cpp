#include "scene/scenes/MainMenu.h"

#include "Input.h"
#include "scene/SceneManager.h"

using namespace Minesweeper;

MainMenu::MainMenu()
{
    //
}

MainMenu::~MainMenu()
{
    //
}

void MainMenu::process_inputs()
{
    if(Input::is_just_pressed<Input::Key>(sf::Keyboard::Enter)) SceneManager::change_scene_to(SceneManager::Scenes::SPLASH_SCREEN);
}

void MainMenu::update(float delta)
{
    //
}

void MainMenu::draw()
{
    //
}
