#pragma once
#include <sstream>
#include <map>
#include<memory>
#include<mutex>
#include <Channel.hpp>


namespace LOGGER {

// Singleton class, grants access to all imp_loggers; can be queries from anywhere and used
    class Radio
    {
    protected:
        std::mutex m;
        std::map<std::string,std::shared_ptr<Channel>> _channelMap;
        Radio();
    public:
        static Radio* instance();
        Channel* get(std::string name);

    };
}
