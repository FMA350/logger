#include "Radio.hpp"
#include "Modulation.hpp"
#include <sstream>


int main(int argv, char*argc[])
{
    auto logger = LOGGER::Radio::instance();
    logger->get("test_channel")->INFO("Hello world!");
    logger->get("test_channel")->ERROR("An error message!");
    logger->get("test_channel")->WARNING("A warning message!");
    logger->get("test_channel")->DEBUG("A debug message!");
    return 0;
}
