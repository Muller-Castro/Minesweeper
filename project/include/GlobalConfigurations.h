/****************************************************************************************/
/* GlobalConfigurations.h                                                               */
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

#ifndef GLOBAL_CONFIGURATIONS_H
#define GLOBAL_CONFIGURATIONS_H

#ifndef __S_RELEASE__
#include <memory>
#include <string>

#include <SFML/Graphics/Font.hpp>
#endif // __S_RELEASE__

namespace Minesweeper {

    class GlobalConfigurations
    {
    public:
#ifdef __DEBUG__
        static bool show_bb;
#endif // __DEBUG__

#ifndef __S_RELEASE__
        static bool show_grid_button_icons;
#endif // __S_RELEASE__

        static void process_inputs();
        static void update(float);
        static void draw();

    private:
#ifndef __S_RELEASE__
        friend class SceneManager;

        static std::shared_ptr<sf::Font> font;

        static std::string current_scene_name;

        static void draw_current_scene_text();
        static void draw_amount_of_loaded_resources();
#endif // __S_RELEASE__

        static void resize_window();
    };

}

#endif // GLOBAL_CONFIGURATIONS_H
