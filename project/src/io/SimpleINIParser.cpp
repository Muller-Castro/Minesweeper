/****************************************************************************************/
/* SimpleINIParser.cpp                                                                  */
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

#include "io/SimpleINIParser.h"

#include <stdexcept>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace Minesweeper;

std::unordered_map<std::string, SimpleINIParser::INIData> SimpleINIParser::cached_ini_data;

SimpleINIParser::INIData SimpleINIParser::load_ini_file(const std::string& file_path, bool should_cache)
{
    SimpleINIParser::INIData result;

    std::string fixed_file_path;

#ifdef __DEBUG__
    fixed_file_path = "bin/Debug/" + file_path;
#elif defined(__RELEASE__)
    fixed_file_path = "bin/Release/" + file_path;
#endif

    try {

        result = SimpleINIParser::cached_ini_data.at(fixed_file_path);

    }catch(const std::out_of_range& e) {

        try {

            result = SimpleINIParser::load_ini_file_impl(fixed_file_path);

        }catch(const std::exception& e) {

            throw std::runtime_error(std::string(e.what()) + ". From: " + fixed_file_path);

        }

        if(should_cache) SimpleINIParser::cached_ini_data[fixed_file_path] = result;

    }

    return result;
}

SimpleINIParser::INIData SimpleINIParser::load_ini_string(const std::pair<std::string, std::string>& ini, bool should_cache)
{
    SimpleINIParser::INIData result;

    try {

        result = SimpleINIParser::cached_ini_data.at(ini.first);

    }catch(const std::out_of_range& e) {

        try {

            result = SimpleINIParser::load_ini_string_impl(ini);

        }catch(const std::exception& e) {

            throw std::runtime_error(std::string(e.what()) + ". From: " + ini.first);

        }

        if(should_cache) SimpleINIParser::cached_ini_data[ini.first] = result;

    }

    return result;
}

void SimpleINIParser::trim_edge_spaces(std::string& str)
{
    for(std::string::iterator it = str.begin();   *it == ' ';)      it = str.erase(it);
    for(std::string::iterator it = str.end() - 1; *it == ' '; --it) it = str.erase(it);
}

std::string SimpleINIParser::extract_section_name(const std::string& ini_line)
{
    std::string result;

    if(*ini_line.cbegin() == '[') {

        if(*(ini_line.cend() - 1) != ']') throw std::runtime_error("Missing ']' at the end of section line.");

        std::vector<std::string::value_type> char_sequence(ini_line.length());

        auto it = std::copy_if(
            ini_line.cbegin() + 1,
            ini_line.cend(),
            char_sequence.begin(),
            [](std::string::value_type c) { return (c != '[') && (c != ']'); }
        );

        char_sequence.resize(std::distance(char_sequence.begin(), it));

        for(std::string::value_type c : char_sequence) result += c;

    }

    if(!result.empty()) SimpleINIParser::trim_edge_spaces(result);

    return result;
}

std::pair<std::string, std::string> SimpleINIParser::extract_pair(const std::string& ini_line)
{
    std::pair<std::string, std::string> result;

    bool found_equals_operator = false;

    for(std::string::const_iterator cit = ini_line.cbegin(); cit != ini_line.cend(); ++cit) {

        if(*cit == '=') {

            found_equals_operator = true;
            continue;

        }

        if(found_equals_operator) result.second += *cit;
        else                      result.first += *cit;

    }

    if(!found_equals_operator) throw std::runtime_error("Missing '=' operator.");
    if(result.first.empty())   throw std::runtime_error("Missing key name.");
    if(result.second.empty())  throw std::runtime_error("Missing value.");

    if(!result.first.empty()) SimpleINIParser::trim_edge_spaces(result.first);
    if(!result.second.empty()) SimpleINIParser::trim_edge_spaces(result.second);

    return result;
}

void SimpleINIParser::fill_ini_data(SimpleINIParser::INIData& ini_data, std::istream& is)
{
    std::string line;
    std::string current_section_name;

    size_t current_line = 1;

    while(static_cast<bool>(std::getline(is, line))) {

        try {

            if(line.empty() || (std::string(line.cbegin(), line.cbegin() + 2) == "//")) continue;

            const std::string section_name = SimpleINIParser::extract_section_name(line);

            if(!section_name.empty()) {

                current_section_name = section_name;

            }else {

                std::pair<std::string, std::string> key_value_pair = SimpleINIParser::extract_pair(line);

                ini_data[current_section_name][key_value_pair.first] = key_value_pair.second;

            }

            ++current_line;

        }catch(const std::exception& e) {

            throw std::runtime_error(std::string(e.what()) + " At line: " + std::to_string(current_line));

        }

    }
}

SimpleINIParser::INIData SimpleINIParser::load_ini_file_impl(const std::string& file_path)
{
    SimpleINIParser::INIData result;

    result.file_path = file_path;

    std::ifstream input_file(file_path);

    if(input_file.is_open()) {

        SimpleINIParser::fill_ini_data(result, input_file);

        input_file.close();

    }else {

        throw std::runtime_error("Failed to open INI file at: " + file_path);

    }

    return result;
}

SimpleINIParser::INIData SimpleINIParser::load_ini_string_impl(const std::pair<std::string, std::string>& ini)
{
    SimpleINIParser::INIData result;

    result.file_path = ini.first;

    std::istringstream iss(ini.second);

    SimpleINIParser::fill_ini_data(result, iss);

    return result;
}
