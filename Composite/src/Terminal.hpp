#pragma once

#include <string>

#include "Logger.hpp"

using namespace std;

class Terminal: public Logger
{
public:
    void log(string s, void(*func)(string, ostream&)) override
    {
        func(s, cout);
    }
};
