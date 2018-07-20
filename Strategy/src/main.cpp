#include <iostream>
#include <memory>

#include "Asset.hpp"
#include "Workers.hpp"

using namespace std;

int main()
{
    vector<Asset> candidates {Asset("Grzegorz", 1,2,3), Asset("Ewa",2,3,1), Asset("Adam", 3,1,2)};

    Workers workers;

    cout << "looking for strong workers:" << endl;
    workers.get(candidates, "strong");
    cout << endl;

    cout << "looking for agile workers:" << endl;
    workers.get(candidates, "agile");
    cout << endl;

    cout << "looking for smart workers:" << endl;
    workers.get(candidates, "smart");
    cout << endl;
}
