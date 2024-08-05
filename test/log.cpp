#include "Radio.hpp"
#include "Modulation.hpp"
#include <sstream>


int main(int argv, char*argc[])
{
    auto logger = LOGGER::Radio::instance();
    // This will create test_channel, two default modulations (file and Output) and log the message
    logger->get("test_channel")->INFO("Hello world!");
    // An error and a warning messages.
    logger->get("test_channel")->ERROR("An error message!");
    logger->get("test_channel")->WARNING("A warning message!");
    // The following message will not be logged as our channels log only info, warnings, and errors by default.
    logger->get("test_channel")->DEBUG("A debug message!");
    // Let's increase the log level to include debug messages.
    auto test_logger = logger->get("test_channel");
    test_logger->setLogLevel(LOGGER::LogLevel::Debug);
    // This message will be now logged.
    logger->get("test_channel")->DEBUG("Another debug message!");
    return 0;
}
