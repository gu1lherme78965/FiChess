#include <thread>
#include <iostream>

void UCIProtocol() {
    // engine identification and protocol confirmation
    std::cout << "id name FiChess" << std::endl;
    std::cout << "id author Guilherme Figueiredo" << std::endl;
    std::cout << "uciok" << std::endl;

    // initial parameter setup
    std::string input;
    bool running = true;

    // main comunication loop
    while (running) {
        std::cin >> input;

        // command detection and response
        if (input=="quit") {
            running = false;
        } else if (input=="isready") {
            std::cout << "readyok" << std::endl;
        }
    }
}

void PerftProtocol() {
    // engine PerftProtocol confirmation
    std::cout << "PerftProtocol active";

    // initial parameter setup
    std::string input;
    bool running = true;

    // main comunication loop
    while (running) {
        std::cin >> input;

        // command detection and response
        if (input=="quit") {
            running = false;
        }
    }
}

int main() {
    // initial parameter setup
    std::string input;
    bool running = true;
    std::cin >> input;

    // communication protocol selection
    if (input=="uci") UCIProtocol();
    else if (input=="perft") PerftProtocol();
}