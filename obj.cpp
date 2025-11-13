#include "obj.hpp"

#include <fstream>
#include <iostream>


void read_obj_file(const std::string &file_name) {
    std::fstream file_stream (file_name, std::fstream::in);

    std::string read_line;

    while (file_stream.good()) {
        std::getline(file_stream, read_line);

        std::cout << read_line << std::endl;
    }

    file_stream.close();
}
