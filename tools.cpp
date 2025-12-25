#include <iostream>
#include "tools.h"

void toolsMenu() {
    while(true) {
        std::string red = "\033[31m";
    std::string green = "\033[32m";
    std::string blue = "\033[34m";
    std::string yellow = "\033[33m";
    std::string magenta = "\033[35m";
    std::string reset = "\033[0m";

    std::cout << red << "XXXXX" << reset << " " << green << " XXX " << reset << " " << blue << " XXX " << reset << "  " << yellow << "X   " << reset << "  " << magenta << " XXXX" << reset << " " << std::endl;
    std::cout << red << "  X  " << reset << " " << green << "X   X" << reset << " " << blue << "X   X" << reset << "  " << yellow << "X   " << reset << "  " << magenta << "X    " << reset << " " << std::endl;
    std::cout << red << "  X  " << reset << " " << green << "X   X" << reset << " " << blue << "X   X" << reset << "  " << yellow << "X   " << reset << "  " << magenta << " XXX " << reset << " " << std::endl;
    std::cout << red << "  X  " << reset << " " << green << "X   X" << reset << " " << blue << "X   X" << reset << "  " << yellow << "X   " << reset << "  " << magenta << "    X" << reset << " " << std::endl;
    std::cout << red << "  X  " << reset << " " << green << " XXX " << reset << " " << blue << " XXX " << reset << "  " << yellow << "XXXX" << reset << "  " << magenta << "XXXX " << reset << " " << std::endl;
        std::cout << "Tools Menu:" << std::endl;
        std::cout << "1. Tool A" << std::endl;
        std::cout << "2. Tool B" << std::endl;
        std::cout << "3. Back to Main Menu" << std::endl;
        std::cout << "\033[36mSelect an option (1-3): \033[0m";  // Cyan prompt

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Tool A selected." << std::endl;
            // Implement Tool A functionality here
        } else if (choice == 2) {
            std::cout << "Tool B selected." << std::endl;
            // Implement Tool B functionality here
        } else if (choice == 3) {
            break; // Exit the tools menu
        } else {
            std::cout << "Invalid option. Please try again." << std::endl;
        }
    }
}