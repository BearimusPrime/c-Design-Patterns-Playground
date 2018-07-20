#pragma once

#include <iostream>
#include <string>

using namespace std;

class Asset
{
public:
    Asset(string n, int a, int i, int s):
        name(n),
        agility(a),
        intelligence(i),
        strength(s)
    {}

    string getName(){return name;}
    int getAgility()const {return agility;}
    int getIntelligence()const {return intelligence;}
    int getStrength()const {return strength;}

    friend ostream& operator<<(ostream&,const Asset&);
private:
    string name;
    int agility;
    int intelligence;
    int strength;
};

ostream& operator<<(ostream& out, const Asset& a)
{
    out << a.name << ": "
        << "agility(" << a.agility << ") "
        << "intelligence(" << a.intelligence << ") "
        << "strength (" << a.strength << ")" << endl;
}
