# CLI Application with Colored ASCII Art

This is a simple C++ command-line interface (CLI) application that displays ASCII art for "Dolle" with each letter in a different color.

## How Coloring Works

The application uses **ANSI escape codes** to add colors to the terminal output. ANSI escape codes are special sequences of characters that control text formatting, including colors, in terminal emulators.

### Basic Syntax
- Colors are applied using escape sequences like `\033[31m` (for red).
- The sequence starts with `\033[` (escape character), followed by a code, and ends with `m`.
- To reset formatting back to default, use `\033[0m`.

### Color Codes Used
- **Red (31)**: `\033[31m` - Used for the letter "D"
- **Green (32)**: `\033[32m` - Used for the letter "O"
- **Blue (34)**: `\033[34m` - Used for the first "L"
- **Yellow (33)**: `\033[33m` - Used for the second "L"
- **Magenta (35)**: `\033[35m` - Used for the letter "E"
- **Reset (0)**: `\033[0m` - Resets color to default

### Example in Code
In `functions.cpp`, the `printArt()` function wraps each letter's text with color codes:

```cpp
std::cout << "\033[31mXXX\033[0m   \033[32mXXX\033[0m  ...";
```

This makes "XXX" (part of "D") red, then resets, adds spaces, makes "XXX" (part of "O") green, and so on.

### Compatibility
- Works in PowerShell, Command Prompt, and most modern terminals that support ANSI colors.
- On Windows, ensure your terminal has ANSI/VT processing enabled (usually default in recent versions).
- If colors don't appear, try updating your terminal or enabling ANSI support.

## Building and Running
1. Compile: `g++ main.cpp functions.cpp -o cli.exe`
2. Run: `.\cli.exe`
3. Type commands like `art`, `help`, or `exit` at the prompt.

## Files
- `main.cpp`: Main application logic and command loop.
- `functions.cpp`: Contains `printArt()` and `printHelp()` functions.
- `functions.h`: Header file with function declarations.