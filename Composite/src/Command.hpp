#pragma once
#include <string>
#include "Logger.hpp"

using namespace std;

class Command
{
public:
    Command(Logger* obj = 0, void(*met)(string, ostream&) = 0)
    {
        object = obj;
        method = met;
    }

    void execute(string s)
    {
        (object->log)(s, method);
    }
private:
    Logger* object;
    void(*method)(string, ostream&);
};
