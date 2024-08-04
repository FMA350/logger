#pragma once
#include <sstream>

namespace LOGGER
{
    enum LogLevel {
        Error,
        Warning,
        Info,
        Debug
    };

    static const std::string Enum2Name[4] = {"Error","Warning","Info","Debug"};


    class ModulationInterface
    {
        public:
        virtual void broadcast(LOGGER::LogLevel l, std::string file, int line, std::string message, ...) = 0;
    };


    class TerminalModulation : public ModulationInterface
    {
        virtual void broadcast(LOGGER::LogLevel l, std::string file, int line, std::string message, ...) override;
    };
}
