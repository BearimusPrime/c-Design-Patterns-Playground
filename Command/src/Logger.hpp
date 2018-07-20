#pragma once
#include <iostream>
#include <string>

using namespace std;

class Logger
{
public:
    virtual void debug(string s) = 0;
    virtual void info(string s) = 0;
    virtual void error(string s) = 0;
};
