#include <iostream>
#include <string>
#include "functions.h"
#include "tools.h"

int main(int argc, char* argv[]) {
    printArt();
    std::cout << "Welcome to the CLI! Type 'help' for commands or 'exit' to quit." << std::endl;

    std::string command;
    while (true) {
        std::cout << "\033[36m> \033[0m";  // Cyan prompt
        std::getline(std::cin, command);
        if (command == "exit") {
            break;
        } else if (command == "art") {
            printArt();
        } else if (command == "help") {
            printHelp();
        } else if (command == "tools") {
            toolsMenu();
        } else {
            std::cout << "Unknown command. Type 'help' for available commands." << std::endl;
        }
    }
    std::cout << "Goodbye!" << std::endl;
    return 0;
}