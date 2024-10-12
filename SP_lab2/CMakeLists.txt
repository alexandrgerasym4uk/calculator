cmake_minimum_required(VERSION 3.29.6)

project(SP_lab2)

set(CMAKE_CXX_STANDARD 20)

add_library(calculator STATIC src/calculator.cpp)

target_include_directories(calculator PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(SP_lab2 src/main.cpp)

target_link_libraries(SP_lab2 calculator)

set(CMAKE_MAKE_PROGRAM "ninja")