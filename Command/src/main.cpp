#include <memory>
#include "../solution/Logger.hpp"
#include "File.hpp"
#include "Terminal.hpp"
#include "Process.hpp"

int main()
{
    auto term = unique_ptr<Logger>(new Terminal());
    auto file = unique_ptr<Logger>(new File("filename.txt"));

    Process p(move(term), move(file));
    //p.startup();
    p.doStuff("JD");
}
