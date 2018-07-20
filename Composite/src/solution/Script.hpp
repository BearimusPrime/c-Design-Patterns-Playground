#pragma once

#include <vector>
#include <string>
#include <memory>

#include "Component.hpp"

using namespace std;

class Script: public Component
{
public:
    void add(unique_ptr<Component> c)
    {
        children.push_back(move(c));
    }

    void execute(string s)
    {
        for (auto& child: children)
        {
            child->execute(s);
        }
    }
private:
    vector<unique_ptr<Component>> children;
};
