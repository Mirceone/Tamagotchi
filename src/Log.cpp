#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Log
{
private:
    vector<string> logbuch;

public:
    void add_log(const string &log)
    {
        logbuch.push_back(log);
        cout << log << endl;
    }
    void get_logbuch()
    {
        for (const string &log : logbuch)
        {
            cout << log << endl;
        }
    }
};