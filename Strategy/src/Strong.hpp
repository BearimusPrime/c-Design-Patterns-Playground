#pragma once

#include <vector>
#include <algorithm>

#include "Asset.hpp"

using namespace std;

class Strong
{
public:
    vector<Asset> sortWorkers(const vector<Asset>& candidates)
    {
        vector<Asset> workers = candidates;
        sort(workers.begin(), workers.end(),
            [](Asset l, Asset r)
            {
                return l.getStrength() > r.getStrength();
            });
        return workers;
    }

    void print(const vector<Asset>& candidates)
    {
        int strength = candidates[0].getStrength();
        cout << "Strength " << strength << ":" << endl;
        for(auto candidate: candidates)
        {
            if (candidate.getStrength() != strength)
            {
                strength = candidate.getStrength();
                cout << "Strength " << strength << ":" << endl;
            }
            cout << candidate;
        }
    }

};
