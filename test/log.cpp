#include "Radio.hpp"
#include "Modulation.hpp"
#include <sstream>


int main(int argv, char*argc[])
{
    auto logger = LOGGER::Radio::instance();
    logger->get("test_channel")->INFO("Hello world!");
    logger->get("test_channel")->ERROR("The message!");
    return 0;
}
