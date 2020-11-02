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
