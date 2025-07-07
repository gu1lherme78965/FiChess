#include <thread>
#include <iostream>
#include "Engine.hpp"

void UCIProtocol(Engine& engine) {
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

void PerftProtocol(Engine& engine) {
    // engine PerftProtocol confirmation
    std::cout << "PerftProtocol active" << std::endl;

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
    Engine engine = Engine();

    // communication protocol selection
    if (input=="uci") UCIProtocol(engine);
    else if (input=="perft") PerftProtocol(engine);
}