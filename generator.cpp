#include <iostream>

#include "input_args.h"

using namespace std;

int main(int argc, char** argv) {

    input_struct inputs;
    try {
        inputs = get_args(argc, argv);
    }
    catch (const invalid_argument& ia) {
        cerr << "Invalid input: " << ia.what() << endl;
        print_help();
        exit(-1);
    }

    if (inputs.mode == 's') {
        cout << "This would have printed one key pair" << endl;
    }
    else if (inputs.mode == 'a') {
        //Server server;
        //server.run(inputs.data);
    }
    else {
        print_help();
    }

    return 0;
}
