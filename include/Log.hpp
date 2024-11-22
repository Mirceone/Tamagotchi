#include <vector>
#include <string>

using namespace std;

#ifndef log_hpp
#define log_hpp

class RunMainGame
{
private:
    vector<string> logbuch;

public:
    void add_log(const string& log);
    void get_logbuch()const;
    
};

#endif