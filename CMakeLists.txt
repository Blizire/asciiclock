cmake_minimum_required(VERSION 3.17)
project(asciiclock C)

set(CMAKE_C_STANDARD 11)

add_executable(asciiclock main.c asciichars.c asciichars.h main.h asciiutils.c asciiutils.h)