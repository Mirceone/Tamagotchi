#ifndef utils_hpp
#define utils_hpp

#include <iostream>

inline void clear_screen() {
#ifdef _WIN32
    std::system("cls"); // Windows
#else
    std::system("clear"); // Linux/macOS
#endif
}

#endif