#include <iostream>
#include "solution/UpdaterProxy.hpp"


using namespace std;

int main(){
    UpdaterProxy updater;
    char choice = 'a';
    while (choice != 'e'){
        cout << "r- run\nu- check for updates\ne- exit" << endl;
        cin >> choice; cin.ignore();
        switch (choice){
        case 'r':
            cout << "hello world" << endl;
            break;
        case 'u':
	    updater.checkForUpdates();
            break;
        }
    }
}
