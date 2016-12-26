#pragma once

class Server {
private:

    int socket;

public:
    
    Server();
    ~Server();

    void run();

};
