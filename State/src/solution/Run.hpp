#pragma once
#include "State.hpp"
#include <string>
#include <memory>
#include <iostream>

namespace FSM
{

class Run : public DeviceState
{
public:
    Run(StateTransitionFunc stateTransitionFunc,
          std::shared_ptr<std::string> sharedTaskName)
        : DeviceState(stateTransitionFunc, sharedTaskName)

    {
    }

    void runTask(std::string name) override
    {
	std::cout<<"JAA????????????"<<std::endl;
	stateTransition(OVERHEATED);
    }

    void stopTask() override
    {
	stateTransition(OFF);
    }
    void coolDown() override
    {
	stateTransition(RUN);

    }
};

}
