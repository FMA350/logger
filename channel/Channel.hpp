#pragma once
#include <cstdint>
#include <memory>
#include <list>
#include "Modulation.hpp"

#define ERROR(msg) log(LOGGER::LogLevel::Error, __FILE__, __LINE__, msg)
#define WARNING(msg) log(LOGGER::LogLevel::Warning, __FILE__, __LINE__, msg)
#define INFO(msg) log(LOGGER::LogLevel::Info, __FILE__, __LINE__, msg)
#define DEBUG(msg) log(LOGGER::LogLevel::Debug, __FILE__, __LINE__, msg)

namespace LOGGER
{
    class Channel{
    protected:
        std::string _name;
        uint8_t _level = LogLevel::Info;
        std::list<std::shared_ptr<ModulationInterface>> _devices;
    public:
        Channel(std::string name);
        ~Channel();

        void setLogLevel(uint8_t);
        void append(std::shared_ptr<ModulationInterface>);

        // unstructured logging
        void log(LogLevel l, std::string file, int line, std::string message, ...);
        // TODO: Structured logging
        // void _log(structured_log message);
    };

}
