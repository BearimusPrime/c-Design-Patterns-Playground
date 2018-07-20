#pragma once
#include <string>
#include <functional>
#include <iostream>
#include <memory>

namespace FSM
{

enum State
{
    OFF = 1,
    RUN = 2,
    OVERHEATED = 3
};


typedef std::function<void (State)> StateTransitionFunc;

class DeviceState
{
public:
    DeviceState(StateTransitionFunc stateTransitionFunc,
                std::shared_ptr<std::string> taskName)
        : stateTransitionFunc(stateTransitionFunc),
          taskName(taskName)
    {}

    virtual void runTask(std::string name) = 0;
    virtual void stopTask() = 0;
    virtual void coolDown() = 0;

    virtual ~DeviceState() {}

private:
   StateTransitionFunc stateTransitionFunc;

protected:
    void stateTransition(State newState)
    {
        //std::cout << "DEBUGLOG: state transition to:" << newState << "\n";
        stateTransitionFunc(newState);
    }
    std::shared_ptr<std::string> taskName;
};

}

