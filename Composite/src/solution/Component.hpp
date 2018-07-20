#pragma once

#include <string>

using namespace std;

class Component
{
public:
    virtual void execute(string s) = 0;
};
