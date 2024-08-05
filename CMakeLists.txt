cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(logger LANGUAGES CXX)

include_directories(radio)
include_directories(channel)
include_directories(modulation)
include_directories(test)

file(GLOB log_SRC
    "radio/Radio.hpp"
    "radio/Radio.cpp"
    "channel/Channel.hpp"
    "channel/Channel.cpp"
    "modulation/Modulation.hpp"
    "modulation/Modulation.cpp"
    "modulation/FileModulation.hpp"
    "modulation/FileModulation.cpp"

    "test/log.cpp")

add_custom_target(log)
add_executable(log_test ${log_SRC})
add_dependencies(log log_test)
