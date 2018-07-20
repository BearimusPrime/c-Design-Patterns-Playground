#pragma once

#include <string>

#include "../solution/Logger.hpp"

using namespace std;

class Terminal: public Logger
{
public:
    virtual void log(string s, string (*func)(string))
    {

    }

    void debug(string s)
    {
        cout << "DBG: " << s << endl;
    }
    void info(string s)
    {
        cout << "INF: " << s << endl;
    }
    void error(string s)
    {
        cout << "ERR: " << s << endl;
    }
};
