/****************************************************************************************/
/* MusicStream.cpp                                                                      */
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

#include "io/MusicStream.h"

#include <stdexcept>

using namespace Minesweeper;

#ifdef __S_RELEASE__
MusicStream::MusicStream(const std::string& music_name, std::string&& rtd) : raw_track_data(std::move(rtd)), music()
{
    if(!music.openFromMemory(raw_track_data.c_str(), raw_track_data.length()))
        throw std::runtime_error("Failed to load \"" + music_name + "\"");
}
#else
MusicStream::MusicStream(const std::string& file_path) : music()
{
    if(!music.openFromFile(file_path)) throw std::runtime_error("Failed to load \"" + file_path + "\"");
}
#endif // __S_RELEASE__
