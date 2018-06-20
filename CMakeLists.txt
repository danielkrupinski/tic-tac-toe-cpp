cmake_minimum_required(VERSION 3.10.2)
project(tic-tac-toe-cpp)

set(CMAKE_BUILD_TYPE Release)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")
set(CMAKE_CXX_FLAGS_RELEASE "-std=c++17 -m64 -Ofast -flto -march=native -funroll-loops -fno-builtin -s")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_executable(tic-tac-toe-cpp ${SOURCES})
