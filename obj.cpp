#include "obj.hpp"

#include <fstream>
#include <iostream>


void read_obj_file(const std::string &file_name) {
    std::ifstream input_file_stream (file_name, std::fstream::in);

    std::string read_line;

    while (input_file_stream.good()) {
        std::getline(input_file_stream, read_line);

        std::cout << read_line << std::endl;
    }

    input_file_stream.close();
}
