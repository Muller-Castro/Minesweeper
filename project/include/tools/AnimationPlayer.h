/****************************************************************************************/
/* AnimationPlayer.h                                                                    */
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

#ifndef ANIMATION_PLAYER_H
#define ANIMATION_PLAYER_H

#include <vector>
#include <string>
#include <functional>
#include <initializer_list>
#include <unordered_map>

namespace Minesweeper {

    struct KeyFrame
    {
        bool already_set;
        float time_point;
        std::function<void(void)> set_value;

        KeyFrame() : already_set(), time_point(0.f), set_value() {}

        template<typename Fn>
        KeyFrame(float time_point_, Fn set_value_) : already_set(), time_point(time_point_), set_value(set_value_) {}
    };

    struct Animation
    {
        std::string name;
        float length;
        std::vector<KeyFrame> key_frames;

        Animation() : name(), length(0.f), key_frames() {}
        Animation(const std::string& name_, float length_, std::initializer_list<KeyFrame> key_frame_list);
    };

    class AnimationPlayer
    {
    public:
        bool loop;
        float speed;

        AnimationPlayer(std::initializer_list<Animation> animation_list, const std::string& current_animation_name_, bool loop_ = true, bool paused_ = true, float speed_ = 1.f, bool backwards_ = false);

        void update(float delta);

        void add_animations(std::initializer_list<Animation> animation_list);

        void play(const std::string& anim_name = std::string(), bool backwards_ = false);
        void pause();
        void stop();

        bool is_paused() const noexcept { return paused; }
        bool has_animation(const std::string& anim_name) const;
        float get_time() const noexcept { return time; }
        const Animation& get_current_animation() const { return animations.at(current_animation_name); }

    private:
        bool paused;
        bool backwards;

        float time;

        std::string current_animation_name;
        std::unordered_map<std::string, Animation> animations;
    };

}

#endif // ANIMATION_PLAYER_H
