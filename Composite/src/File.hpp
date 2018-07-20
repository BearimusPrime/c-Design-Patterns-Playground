#pragma once

#include <string>
#include <fstream>

#include "Logger.hpp"

using namespace std;

class File: public Logger
{
public:
    File(string f)
    {
        outputFile.open(f);
    }

    void log(string s, void(*func)(string, ostream&)) override
    {
        func(s, outputFile);
    }

    ~File()
    {
        outputFile.close();
    }
private:
    ofstream outputFile;
};
