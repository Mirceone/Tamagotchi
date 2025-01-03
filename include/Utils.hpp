#ifndef utils_hpp
#define utils_hpp

#include <iostream>
#include <limits>  // Include this for numeric_limits

// Check for Windows or Linux/macOS at compilation
inline void clear_screen() {
#ifdef _WIN32
    // Use ANSI escape codes if supported
    if (std::system(" ") == 0) {
        std::cout << "\033[2J\033[1;1H";
    } else {
        // Fallback to cls
        std::system("cls");
    }
#else
    std::system("clear"); // Linux/macOS
#endif
    std::cout.flush(); // Ensure the buffer is flushed
}

inline void pause_and_clear() {
    std::cout << std::endl << "Drücke Enter, um fortzufahren..." << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();  // Wait for Enter key
    clear_screen();  // Clear the screen
}

#endif