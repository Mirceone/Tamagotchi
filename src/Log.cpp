#include <vector>
#include <string>
#include <iostream>
#include "../include/Log.hpp"

void Log::add_log(const std::string& log) {
    logbuch.push_back(log);
}

// Print all log entries
void Log::get_logbuch() const {
    for (const auto& entry : logbuch) {
        std::cout << entry << std::endl;
    }
}
