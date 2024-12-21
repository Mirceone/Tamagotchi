#ifndef utils_hpp
#define utils_hpp

#include <iostream>


//check for Windows or Linux/macOS at compilation
inline void clear_screen() {
#ifdef _WIN32
    std::system("cls"); // Windows
#else
    std::system("clear"); // Linux/macOS
#endif
}

void pause_and_clear() {
    std::cout << std::endl << "Drücke Enter, um fortzufahren..." << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();  // Wait for Enter key
    clear_screen();  // Clear the screen
}

#endif