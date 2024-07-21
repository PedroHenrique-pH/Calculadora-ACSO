cmake_minimum_required(VERSION 3.22.1)
project(calc1 VERSION 1.0.0)
add_library(
    calc1 SHARED
    calc.cpp
    calc.hpp
)

add_executable(calcu teste.cpp)

target_link_libraries(calcu PUBLIC calc1)