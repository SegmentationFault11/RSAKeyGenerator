#include <iostream>
#include <hetopt.h>

using namespace std;

void print_help();

int main(int argc, char** argv) {

    input_struct inputs = get_args(argc, argv);

    if (inputs.mode == 's') {
        cout << "This would have printed one key pair" << endl;
    }
    else {
        Server server;
        server.run(inputs.data);
    }

    return 0;
}

void print_help() {
    cout << "Help" << endl;
}
