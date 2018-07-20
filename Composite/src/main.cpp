#include <memory>
#include "Command.hpp"
#include "Terminal.hpp"
#include "File.hpp"
#include "Process.hpp"

int main()
{
    Terminal terminal;
    File file("filename.txt");
    auto dbg = unique_ptr<Command>(new Command(&terminal, debug));
    auto inf = unique_ptr<Command>(new Command(&file, info));
    auto err = unique_ptr<Command>(new Command(&file, error));

    Process p(move(dbg), move(inf), move(err));
    p.startup();
    p.doStuff();
}
