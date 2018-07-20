#pragma once

#include <vector>
#include <algorithm>

#include "Asset.hpp"

using namespace std;

class Smart
{
public:
    vector<Asset> sortWorkers(const vector<Asset>& candidates)
    {
        vector<Asset> workers = candidates;
        sort(workers.begin(), workers.end(),
            [](Asset l, Asset r)
            {
                return l.getIntelligence() > r.getIntelligence();
            });
        return workers;
    }

    void print(const vector<Asset>& candidates)
    {
        int intelligence = candidates[0].getIntelligence();
        cout << "Intelligence " << intelligence << ":" << endl;
        for(auto candidate: candidates)
        {
            if (candidate.getIntelligence() != intelligence)
            {
                intelligence = candidate.getIntelligence();
                cout << "Intelligence " << intelligence << ":" << endl;
            }
            cout << candidate;
        }
    }

};
