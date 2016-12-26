#include "input_args.h"

#include <string>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <exception>
#include <stdexcept>

input_struct get_args(int argc, char** argv) {
    
    input_struct inputs;

    if (argc < 2 || argc > 3) {
        throw invalid_argument("Wrong number of command line arguments");
    }

    string mode(argv[1]);

    if (mode != "-s" &&
            mode != "-a" &&
            mode != "-h" &&
            mode != "--single" &&
            mode != "--alloy" &&
            mode != "--help") {
        throw invalid_argument("Unknow mode type");
    }

    if (mode == "-s" || mode == "--single") {
        inputs.mode = 's';
    }

    if (mode == "-a" || mode == "--alloy") {
        inputs.mode = 'a';
    }

    if (mode == "-h" || mode == "--help") {
        inputs.mode = 'h';
    }

    if (argc == 3) {
        if (is_number(argv[2])) {
            inputs.data = atoi(argv[2]);
        }
        else {
            throw invalid_argument("2nd argument must be an unsigned number");
        }
    }
    else {
        inputs.data = -1;
    }

    return inputs;
}

bool is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](char c) { return !std::isdigit(c); }) == s.end();
}

void print_help() {
}
