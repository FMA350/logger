#pragma once
#include <filesystem>
#include <chrono>
#include <ctime>
#include <fstream>
#include "Modulation.hpp"

namespace LOGGER
{
    // Implementation of Modulation that prints to file
    class FileModulation : public ModulationInterface
    {
        private:
            std::filesystem::path _path;
            std::ofstream _fp;
        public:
            virtual void broadcast(LOGGER::LogLevel l, std::string file, int line, std::string message, ...) override;
            FileModulation(std::string path);
            ~FileModulation();

    };
}
