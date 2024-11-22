#ifndef Log_hpp
#define Log_hpp

#include <vector>
#include <string>

class Log {
private:
    std::vector<std::string> logbuch; // Logbook to store log messages

public:
    // Add a log entry
    void add_log(const std::string& log);

    // Print all log entries
    void get_logbuch() const;
};

#endif