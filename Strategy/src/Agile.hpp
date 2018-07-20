#pragma once

#include <vector>
#include <algorithm>

#include "Asset.hpp"

using namespace std;

class Agile
{
public:
    vector<Asset> sortWorkers(const vector<Asset>& candidates)
    {
        vector<Asset> workers = candidates;
        sort(workers.begin(), workers.end(),
            [](Asset l, Asset r)
            {
                return l.getAgility() > r.getAgility();
            });
        return workers;
    }

    void print(const vector<Asset>& candidates)
    {
        int agility = candidates[0].getAgility();
        cout << "Agility " << agility << ":" << endl;
        for(auto candidate: candidates)
        {
            if (candidate.getAgility() != agility)
            {
                agility = candidate.getAgility();
                cout << "Agility " << agility << ":" << endl;
            }
            cout << candidate;
        }
    }

};
