#pragma once
#include "../solution/Logger.hpp"
#include "../solution/Command.hpp"
#include <string>

class Process
{
public:
    Process(unique_ptr<Logger> t, unique_ptr<Logger> f):term(move(t)), file(move(f))
    {}

    void startup(unique_ptr<Command> com)
    {
	cmd = std::move(com);
    }

    void doStuff(std::string s)
    {
	cmd->execute(s);
    }
private:
    unique_ptr<Command> cmd;
    unique_ptr<Logger> term;
    unique_ptr<Logger> file;
};
