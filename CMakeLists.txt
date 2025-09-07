cmake_minimum_required(VERSION 4.0)
project(afl_1 C)

set(CMAKE_C_STANDARD 23)

add_executable(afl_1 main.c
        hammering.c
        hammering.h)
