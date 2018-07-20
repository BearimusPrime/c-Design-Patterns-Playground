#pragma once
#include <vector>
#include <string>
#include "Document.hpp"

using namespace std;

class Builder
{
public:
    virtual void addTable(vector<string>) = 0;
    virtual void addText(vector<string>) = 0;

    Builder(string type):document(type)
    {}

    Document getDocument()
    {
        return document;
    }
protected:
    Document document;
};
