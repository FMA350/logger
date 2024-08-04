#include "Channel.hpp"
#include "Modulation.hpp"

using namespace LOGGER;


Channel::Channel()
{
    _devices.push_back(std::make_shared<TerminalModulation>());
}

void Channel::log(LogLevel l, std::string file, int line, std::string message, ...)
{
    for(auto m : _devices)
    {
        m->broadcast(l,file,line,message);
    }
}
