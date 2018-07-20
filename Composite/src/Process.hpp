#pragma once
#include "Command.hpp"

class Process
{
public:
    Process(unique_ptr<Command> dbg, unique_ptr<Command> inf, unique_ptr<Command> err):
        debug(move(dbg)), info(move(inf)), error(move(err))
    {}

    void startup()
    {
        info->execute("process started");
    }

    void doStuff()
    {
        debug->execute("just about to do stuff");
        debug->execute("something is wrong");

        error->execute("dividing by zero. Autodestruction in 3...");
    }
private:
    unique_ptr<Command> debug, info, error;
};
