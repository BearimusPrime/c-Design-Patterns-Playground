#include <memory>
#include <string>

#include "Strong.hpp"
#include "Smart.hpp"
#include "Agile.hpp"

class Workers
{
public:
    vector<Asset> get(const vector<Asset>& candidates, string s)
    {
        if (s == "strong")
        {
            Strong s;
            vector<Asset> result = s.sortWorkers(candidates);
            s.print(result);
            return result;
        }
        if (s == "agile")
        {
            Agile a;
            vector<Asset> result = a.sortWorkers(candidates);
            a.print(result);
            return result;
        }
        if (s == "smart")
        {
            Smart s;
            vector<Asset> result = s.sortWorkers(candidates);
            s.print(result);
            return result;
        }
        else
        {
            cout << "bad choice: " << s << endl;
            return {};
        }
    }
};
