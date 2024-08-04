#include "Modulation.hpp"
#include <iostream>
using namespace LOGGER;

void TerminalModulation::broadcast(LOGGER::LogLevel l, std::string file, int line, std::string message, ...)
{
    std::cout << "[" << file << "]" << "::" << std::to_string(line) << " ( " << Enum2Name[l] << " ) - " << message << "\n";
}
