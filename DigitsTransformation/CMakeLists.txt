cmake_minimum_required(VERSION 3.30)
project(DigitsTransformation)

set(CMAKE_CXX_STANDARD 23)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         11.0.2
)

FetchContent_MakeAvailable(fmt)

add_executable(DigitsTransformation main.cpp)
target_link_libraries(DigitsTransformation fmt)
