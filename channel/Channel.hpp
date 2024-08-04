#pragma once
#include <cstdint>
#include <memory>
#include <list>
#include <sstream>
#include "Modulation.hpp"

#define ERROR(msg) log(LOGGER::LogLevel::Error, __FILE__, __LINE__, msg)
#define WARNING(msg) log(LOGGER::LogLevel::Warning, __FILE__, __LINE__, msg)
#define INFO(msg) log(LOGGER::LogLevel::Info, __FILE__, __LINE__, msg)
#define DEBUG(msg) log(LOGGER::LogLevel::Debug, __FILE__, __LINE__, msg)

namespace LOGGER
{
    class Channel{
    protected:
        std::list<std::shared_ptr<ModulationInterface>> _devices;
    public:
        Channel();
        // unstructured logging
        void log(LogLevel l, std::string file, int line, std::string message, ...);

        // TODO: Structured logging
        // void _log(structured_log message);
    };

}
