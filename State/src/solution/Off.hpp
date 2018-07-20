#pragma once
#include "State.hpp"
#include <iostream>

namespace FSM
{

class Off : public DeviceState
{
public:
    Off(StateTransitionFunc stateTransitionFunc,
         std::shared_ptr<std::string> sharedTaskName)
        :DeviceState(stateTransitionFunc, sharedTaskName)
    {
    }

    void runTask(std::string name) override
    {
	std::cout<<"COOOOO????"<<std::endl;
	stateTransition(RUN);
    }

    void stopTask() override
    {
	stateTransition(OFF);    }

    void coolDown() override
    {
	stateTransition(OFF);   }
};

}
