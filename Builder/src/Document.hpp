
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Document
{
public:
    Document(string type)
    {
        document = "<" + type + " header>";
    }

    void addTable(string begin, string separator, string end, vector<string> values)
    {
        document += "\n" + begin;
        for(auto value: values)
        {
            document += value + separator;
        }
        document = document.substr(0, document.size()-separator.size());
        document += end;
    }

    void addText(string begin, vector<string> text)
    {
        for (auto line: text)
            document += "\n" + begin + line;
    }

    string toStr()
    {
        return document;
    }

private:
    string document;
};
