#include <iostream>
#include "functions.h"

void printArt() {
    // ANSI escape codes for colors: Red, Green, Blue, Yellow, Magenta
    std::string red = "\033[31m";
    std::string green = "\033[32m";
    std::string blue = "\033[34m";
    std::string yellow = "\033[33m";
    std::string magenta = "\033[35m";
    std::string reset = "\033[0m";

    std::cout << red << "XXX" << reset << "   " << green << "XXX" << reset << "  " << blue << "X" << reset << "     " << yellow << "X" << reset << "     " << magenta << "XXXX" << reset << " " << std::endl;
    std::cout << red << "X  X" << reset << " " << green << "X   X" << reset << " " << blue << "X" << reset << "     " << yellow << "X" << reset << "     " << magenta << "X" << reset << "    " << std::endl;
    std::cout << red << "X  X" << reset << " " << green << "X   X" << reset << " " << blue << "X" << reset << "     " << yellow << "X" << reset << "     " << magenta << "XXXX" << reset << " " << std::endl;
    std::cout << red << "X  X" << reset << " " << green << "X   X" << reset << " " << blue << "X" << reset << "     " << yellow << "X" << reset << "     " << magenta << "X" << reset << "    " << std::endl;
    std::cout << red << "XXX" << reset << "   " << green << "XXX" << reset << "  " << blue << "XXXX" << reset << "  " << yellow << "XXXX" << reset << "  " << magenta << "XXXX" << reset << " " << std::endl;
}

void printHelp() {
    std::string red = "\033[31m";
    std::string green = "\033[32m";
    std::string blue = "\033[34m";
    std::string yellow = "\033[33m";
    std::string magenta = "\033[35m";
    std::string reset = "\033[0m";

    std::cout << red << "X  X" << reset << " " << green << "XXXX" << reset << " " << blue << "X" << reset << "     " << yellow << "XXX" << reset << " " << std::endl;
    std::cout << red << "X  X" << reset << " " << green << "X   " << reset << " " << blue << "X" << reset << "     " << yellow << "X  X" << reset << "    " << std::endl;
    std::cout << red << "XXXX" << reset << " " << green << "XXXX" << reset << " " << blue << "X" << reset << "     " << yellow << "XXX" << reset << " " << std::endl;
    std::cout << red << "X  X" << reset << " " << green << "X   " << reset << " " << blue << "X" << reset << "     " << yellow << "X" << reset << "    " << std::endl;
    std::cout << red << "X  X" << reset << " " << green << "XXXX" << reset << " " << blue << "XXXX" << reset << "  " << yellow << "X" << reset << " " << std::endl;
    std::cout << std::endl;
    std::cout << "Available commands:" << std::endl;
    std::cout << "  art    - Display the homepage art" << std::endl;
    std::cout << "  help   - Show this help message" << std::endl;
    std::cout << "  exit   - Exit the application" << std::endl;
}