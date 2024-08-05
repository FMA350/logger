#include "FileModulation.hpp"
#include <fstream>
#include <unistd.h>
using namespace LOGGER;

FileModulation::FileModulation(std::string path)
{
    auto pid = getpid();
    _path = path + "-" + std::to_string(pid) + ".log";
    _fp = std::ofstream(_path);
}

FileModulation::~FileModulation()
{
    if(_fp.is_open())
        _fp.close();
}

void FileModulation::broadcast(LOGGER::LogLevel l, std::string file, int line, std::string message, ...)
{
    if(_fp.is_open())
        _fp << "[" << file << "]" << "::" << std::to_string(line) << " ( " << Enum2Name[l] << " ) - " << message << "\n";
}
