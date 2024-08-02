#pragma once
#include <sstream>

namespace Logger
{
    class Modulation
    {
        virtual void broadcast(std::stringstream) = 0;
    };
}
