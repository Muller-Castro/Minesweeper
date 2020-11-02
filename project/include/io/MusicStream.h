#ifndef MUSIC_STREAM_H
#define MUSIC_STREAM_H

#include <string>

#include <SFML/Audio/Music.hpp>

namespace Minesweeper {

    class MusicStream
    {
    public:
        MusicStream() = default;

#ifdef __S_RELEASE__
        MusicStream(const std::string& music_name, std::string&& rtd);
#else
        explicit MusicStream(const std::string& file_path);
#endif // __S_RELEASE__

        MusicStream(const MusicStream&) = delete;
        MusicStream(MusicStream&&) = default;

        MusicStream& operator=(const MusicStream&) = delete;
        MusicStream& operator=(MusicStream&&) = default;

    private:
#ifdef __S_RELEASE__
        std::string raw_track_data;
#endif // __S_RELEASE__

    public:
        sf::Music music;
    };

}

#endif // MUSIC_STREAM_H
