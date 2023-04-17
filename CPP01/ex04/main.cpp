#include "io.hpp"

int main (int argc, char **argv)
{
    if (argc < 3 || argc > 4)
        return (1);
    std::string     name_i_file = argv[1];
    std::string     occur = argv[2];
    std::string     replacement = argv[3];
    std::string     extension = ".replace";
    std::string     name_o_file = name_i_file + extension;
    std::ifstream   i_file;
    std::ofstream   o_file;
    std::string     line;
    size_t          pos = 0;

    i_file.open(name_i_file, std::ios::in);
    if(!i_file.is_open())
        std::cout << "The file is invalid or missing" << std::endl;
    o_file.open(name_o_file, std::ios::out);
    if (!o_file.is_open())
        std::cout << "Failed to create file" << std::endl;
    while (getline(i_file, line)){
        if (line.find(occur) != std::string::npos) {
            pos = line.find(occur);
            while (pos != std::string::npos){
                line.erase(pos, occur.length());
                line.insert(pos, replacement);
                pos = line.find(occur, pos + replacement.length());
            }
        }
        o_file << line;
    }
    o_file.close();
    i_file.close();
    return (0);
}