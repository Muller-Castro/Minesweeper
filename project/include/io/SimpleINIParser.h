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
            using INIDataType = std::unordered_map<std::string, std::unordered_map<std::string, std::string>>;

            std::string file_path;
            INIDataType data;

            INIData() : file_path(), data() {}
        };

        static INIData load_ini_file(const std::string& file_path, bool should_cache = true);
        static INIData load_ini_string(const std::pair<std::string, std::string>& ini, bool should_cache = true);

    private:
        static std::unordered_map<std::string, INIData> cached_ini_data;

        static void trim_edge_spaces(std::string& str);
        static std::string extract_section_name(const std::string& ini_line);
        static std::pair<std::string, std::string> extract_pair(const std::string& ini_line);

        static void fill_ini_data(INIData& ini_data, std::istream& is);

        static INIData load_ini_file_impl(const std::string& file_path);
        static INIData load_ini_string_impl(const std::pair<std::string, std::string>& ini);
    };

}

#endif // SIMPLE_INI_PARSER_H
