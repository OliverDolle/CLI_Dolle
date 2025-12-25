# CLI Dolle

A simple C++ command-line interface (CLI) application that displays colored ASCII art for "Dolle".

## Features

- Display colored ASCII art
- Interactive command prompt
- Help menu
- Tools menu

## Commands

- `art`: Display the colored ASCII art
- `help`: Show available commands
- `tools`: Access tools menu
- `exit`: Quit the application

## Building and Running

1. Ensure you have a C++ compiler (e.g., g++) installed.
2. Compile the program:
   ```
   g++ main.cpp functions.cpp tools.cpp -o cli.exe
   ```
3. Run the executable:
   ```
   .\cli.exe
   ```

## Files

- `main.cpp`: Main application entry point
- `functions.cpp`: Implementation of art and help functions
- `functions.h`: Header for functions
- `tools.cpp`: Implementation of tools menu
- `tools.h`: Header for tools
- `Coloring.md`: Detailed explanation of coloring mechanism

## Requirements

- C++ compiler (GCC, Clang, MSVC, etc.)
- Terminal that supports ANSI escape codes for colors