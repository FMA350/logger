#include "Radio.hpp"
#include <mutex>

using namespace LOGGER;

Radio::Radio()
{
    //
}

Radio* Radio::instance()
{
    static Radio instance;
    return &instance;
}

Channel* Radio::get(std::string channelName)
{
    std::lock_guard<std::mutex> lock(m);
    if(!_channelMap.count(channelName))
    {
        _channelMap[channelName] = std::make_shared<Channel>(channelName);
    }
    return _channelMap[channelName].get();
}
