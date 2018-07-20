#include <iostream>

using namespace std;

class Updater{
public:
    Updater(){throw 666;}
    void checkForUpdates(){
        cout << "checking for updates" << endl;
    }
};
