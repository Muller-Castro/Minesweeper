/****************************************************************************************/
/* SimpleINIParser.h                                                                    */
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

#ifndef SIMPLE_INI_PARSER_H
#define SIMPLE_INI_PARSER_H

#include <unordered_map>
#include <string>

namespace Minesweeper {

    class SimpleINIParser
    {
    public:
        struct INIData
        {
        public:
            using INIDataType = std::unordered_map<std::string, std::unordered_map<std::string, std::string>>;

            std::string file_path;

            INIData() : file_path(), data() {}

            INIDataType::mapped_type& operator[](const std::string& key) { return data[key]; }

        private:
            INIDataType data;
        };

        static INIData load_ini_file(const std::string& file_path, bool should_cache = true);

#ifdef __S_RELEASE__
        static INIData load_ini_string(const std::pair<std::string, std::string>& ini, bool should_cache = true);
#endif // __S_RELEASE__

    private:
        static std::unordered_map<std::string, INIData> cached_ini_data;

        static void trim_edge_spaces(std::string& str);
        static std::string extract_section_name(const std::string& ini_line);
        static std::pair<std::string, std::string> extract_pair(const std::string& ini_line);

        static void fill_ini_data(INIData& ini_data, std::istream& is);

        static INIData load_ini_file_impl(const std::string& file_path);

#ifdef __S_RELEASE__
        static INIData load_ini_string_impl(const std::pair<std::string, std::string>& ini);
#endif // __S_RELEASE__
    };

}

#endif // SIMPLE_INI_PARSER_H
