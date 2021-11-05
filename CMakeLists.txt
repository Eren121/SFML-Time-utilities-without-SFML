cmake_minimum_required(VERSION 3.12.4)
project(sfml-time LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(SRC
    src/Clock.cpp  src/FPSCounter.cpp  src/Time.cpp  src/Timer.cpp
    include/Clock.hpp  include/FPSCounter.hpp  include/Time.hpp  include/Timer.hpp)

add_library(sfml-time ${SRC})
target_include_directories(sfml-time PUBLIC include)


################## Test

enable_testing()
add_executable(sfml-time-test test/main.cpp)
target_link_libraries(sfml-time-test sfml-time)
add_test(NAME sfml-time-test COMMAND sfml-time-test)