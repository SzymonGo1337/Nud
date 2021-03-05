cmake_minimum_required(VERSION 3.6)
project(Nud)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

add_library(Nud STATIC 
            src/Nud.hpp
            src/Nud.cpp
            src/NudFile.hpp
            src/NudFile.cpp
            src/NudTypes.hpp
            src/NudStream.hpp
            src/NudStream.cpp
            src/NudColor.hpp
            src/NudColor.cpp
            src/NudThread.hpp
            src/NudThread.cpp
)

add_executable(Demo
               src/Demo.cpp
)

target_link_libraries(Demo Nud)