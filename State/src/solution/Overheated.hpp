#pragma once
#include "State.hpp"
#include <iostream>

namespace FSM
{

class Overheated : public DeviceState
{
public:
    Overheated(StateTransitionFunc stateTansitionFunc,
         std::shared_ptr<std::string> sharedTaskName)
        :DeviceState(stateTansitionFunc, sharedTaskName)
    {
    }

    void runTask(std::string name) override
    {
	std::cout<<"COOOOOOOOOOOOOOOOO???????????"<<std::endl;
	stateTransition(OVERHEATED);
    }

    void stopTask() override
    {
	stateTransition(OVERHEATED);
	return;
    }

    void coolDown() override
    {
	std::cout << "Cooling down\n";
	stateTransition(OFF);
    }
};

}
