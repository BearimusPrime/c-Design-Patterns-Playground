#pragma once
#include <string>
#include <memory>
#include <map>
#include "State.hpp"
#include "solution/Off.hpp"
#include "solution/Run.hpp"
#include "solution/Overheated.hpp"

namespace FSM
{

class Device
{
public:
    Device()
    {
        createStatesMap();
        currentState = allStates[OFF];
    }

    void runTask(std::string name)
    {
        currentState->runTask(name);
    }

    void stopTask()
    {
        currentState->stopTask();
    }

    void coolDown()
    {
        currentState->coolDown();
    }

private:
    void createStatesMap()
    {
        StateTransitionFunc transition = [this](State state)
        {
            this->currentState = allStates[state];
        };

        auto sharedName = std::make_shared<std::string>();

        allStates[OFF] = std::make_shared<Off>(transition, sharedName);
        allStates[RUN] = std::make_shared<Run>(transition, sharedName);
        allStates[OVERHEATED] = std::make_shared<Overheated>(transition, sharedName);
    }

    std::map<State, std::shared_ptr<DeviceState>> allStates;
    std::shared_ptr<DeviceState> currentState;
};

}
