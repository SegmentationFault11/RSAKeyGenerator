#include <iostream>
#include <getopt.h>

using namespace std;

void print_help();

int main(int argc, char** argv) {

    try {
        input_struct inputs = get_args(argc, argv);
    }
    catch (const invalid_argument& ia) {
        cerr << ia.what() << endl;
        print_help();
        exit(-1);
    }

    if (inputs.mode == 's') {
        cout << "This would have printed one key pair" << endl;
    }
    else if (inputs.mode == 'a') {
        Server server;
        server.run(inputs.data);
    }
    else {
        print_help();
    }

    return 0;
}

void print_help() {
    cout << "Help" << endl;
}
