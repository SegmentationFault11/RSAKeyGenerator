#pragma once

#include <iostream>
#include <cstring>

struct input_struct {
    char mode;
    int data;
};

input_struct get_args(int, char**);

void print_help();
