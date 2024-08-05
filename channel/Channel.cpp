#include "Channel.hpp"
#include "FileModulation.hpp"
#include <unistd.h>

using namespace LOGGER;


Channel::Channel(std::string name)
{
    _name = name;
    append(std::make_shared<TerminalModulation>());

    append(std::make_shared<FileModulation>(std::string(get_current_dir_name()) + "/" + _name));
}
Channel::~Channel()
{
    _devices.clear();
}

void Channel::setLogLevel(uint8_t level)
{
    _level = level;
}
void Channel::append(std::shared_ptr<ModulationInterface> m)
{
    _devices.push_back(m);
}

void Channel::log(LogLevel l, std::string file, int line, std::string message, ...)
{
    if(l <= _level)
    {
        for(auto m : _devices)
        {
            m->broadcast(l,file,line,message);
        }
    }
}
