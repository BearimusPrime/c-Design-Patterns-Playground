#include "../src/solution/FsmDevice.hpp"

int main()
{
    using namespace FSM;
    Device device;
    device.runTask("first task");
    device.runTask("second task");
    device.coolDown();
    device.runTask("third task");
    device.stopTask();
}
