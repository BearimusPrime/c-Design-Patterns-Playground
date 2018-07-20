#pragma once

#include <string>
#include <fstream>

#include "../solution/Logger.hpp"

using namespace std;

class File: public Logger
{
public:
    File(string f)
    {
        outputFile.open(f);
    }

    void debug(string s)
    {
        outputFile << "DBG: " << s << endl;
    }
    void info(string s)
    {
        outputFile << "INF: " << s << endl;
    }
    void error(string s)
    {
        outputFile << "ERR: " << s << endl;
    }
private:
    ofstream outputFile;
};
