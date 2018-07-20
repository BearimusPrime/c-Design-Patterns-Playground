#pragma once
#include <Updater.hpp>
#include <iostream>
class UpdaterProxy
{
private:
    Updater* Update;

public:
    void checkForUpdates()
    {
	try{
	if(Update == nullptr)Update = new Updater{};
	Update->checkForUpdates();
	}
	catch(...)
	{
	    std::cout<<"ERROR 420"<<std::endl;
	    //delete Update;
	    Update = nullptr;
	}


        }
    ~UpdaterProxy() {
	    if(Update != nullptr) delete Update;}
};




