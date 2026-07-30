cmake_minimum_required(VERSION 3.30)
project(SortingTheSelectedHalfOfVector)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG 11.0.2
)

FetchContent_MakeAvailable(fmt)

add_executable(SortingTheSelectedHalfOfVector main.cpp)
target_link_libraries(SortingTheSelectedHalfOfVector fmt)