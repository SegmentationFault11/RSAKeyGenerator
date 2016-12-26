#pragma once

#include <iostream>
#include <cstring>

using namespace std;

struct input_struct {
    char mode;
    int data;
};

input_struct get_args(int, char**);

bool is_number(const std::string& s);

void print_help();
