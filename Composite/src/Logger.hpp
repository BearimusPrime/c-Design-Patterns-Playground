#pragma once
#include <iostream>
#include <string>

using namespace std;

class Logger
{
public:
    virtual void log(string s, void(*func)(string, ostream&)) = 0;
};

void debug(string s, ostream& out)
{
    out << "DBG: " << s << endl;
}

void info(string s, ostream& out)
{
    out << "INF: " << s << endl;
}

void error(string s, ostream& out)
{
    out << "ERR: " << s << endl;
}
