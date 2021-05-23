/****************************************************************************************/
/* AnimationPlayer.cpp                                                                  */
/****************************************************************************************/
/* Copyright (c) 2020-2021 Muller Castro.                                               */
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

#include "tools/AnimationPlayer.h"

using namespace Minesweeper;

Animation::Animation(const std::string& name_, float length_, std::initializer_list<KeyFrame> key_frame_list) :
    name(name_),
    length(length_),
    key_frames()
{
    key_frames.reserve(key_frame_list.size());

    for(std::initializer_list<KeyFrame>::iterator it = key_frame_list.begin(); it != key_frame_list.end(); ++it) key_frames.push_back(*it);
}

AnimationPlayer::AnimationPlayer(std::initializer_list<Animation> animation_list, const std::string& current_animation_name_, bool loop_, bool paused_, float speed_, bool backwards_) :
    loop(loop_),
    speed(speed_),
    paused(paused_),
    backwards(backwards_),
    time(0.f),
    current_animation_name(current_animation_name_),
    animations()
{
    if(animation_list.size() == 0) pause();

    add_animations(animation_list);
}

void AnimationPlayer::update(float delta)
{
    if(!paused) {

        Animation& current_animation = animations[current_animation_name];

        for(KeyFrame& kf : current_animation.key_frames) {

            if((backwards ? time <= kf.time_point : time >= kf.time_point) && !kf.already_set) {

                kf.set_value();
                kf.already_set = true;

            }

        }

        time = backwards ? time - delta * speed : time + delta * speed;

        if(backwards) time = time > current_animation.length ? current_animation.length : time;
        else          time = time < 0.f ? 0.f : time;

        if(backwards ? time <= 0.f : time >= current_animation.length) {

            for(KeyFrame& kf : current_animation.key_frames) kf.already_set = false;

            if(loop) time = backwards ? current_animation.length : 0.f;
            else     pause();

        }

    }
}

void AnimationPlayer::add_animations(std::initializer_list<Animation> animation_list)
{
    for(std::initializer_list<Animation>::iterator it = animation_list.begin(); it != animation_list.end(); ++it) animations[(*it).name] = *it;
}

void AnimationPlayer::play(const std::string& anim_name, bool backwards_)
{
    paused = false;
    backwards = backwards_;

    if(!anim_name.empty()) {

        current_animation_name = anim_name;

        if(backwards) time = animations[current_animation_name].length;

    }
}

void AnimationPlayer::pause()
{
    paused = true;
}

void AnimationPlayer::stop()
{
    paused = true;
    time = 0.f;
}

bool AnimationPlayer::has_animation(const std::string& anim_name) const
{
    bool result = true;

    try {

        animations.at(anim_name);

    }catch(const std::out_of_range&) {

        result = false;

    }

    return result;
}
