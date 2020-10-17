#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "scene/Scene.h"

namespace Minesweeper {

    class MainMenu : public Scene
    {
    public:
        MainMenu();
        ~MainMenu() noexcept override;

        void process_inputs()    override;
        void update(float delta) override;
        void draw()              override;
    };

}

#endif // MAIN_MENU_H
