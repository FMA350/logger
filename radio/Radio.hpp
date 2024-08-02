#pragma once
// Singleton class, grants access to all imp_loggers; can be queries from anywhere and used
#include <sstream>
#include <Channel.hpp>

namespace Logger {
    enum LogLeve{
        ERROR,
        WARNING,
        INFO,
        DEBUG
    };


    class Radio
    {
        public:
        static Radio* instance();
        Channel* get(std::string name);

    };
}
