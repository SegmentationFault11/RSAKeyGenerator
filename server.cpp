#include "server.h"
#include "socket_functions.h"

void Server::run(int port) {
    
    int server_soc = setup_socket(port);

    int client_soc;
    while (client_soc = accept_socket(server_soc)) {
        thread th(handle_query, client_soc);
    }
}
