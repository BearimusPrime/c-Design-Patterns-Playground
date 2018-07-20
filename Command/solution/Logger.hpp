#pragma once
#include <iostream>
#include <string>

using namespace std;

class Logger
{
public:
    virtual void log(string s, string (*func)(string)) = 0;
};

string debug(string s)
{
    return "DBG: " + s;
}

string info(string s)
{
    return "INF: " + s;
}

string error(string s)
{
    return "ERR: " + s;
}
