cmake_minimum_required(VERSION 3.17)
project(asciiclock C)

set(CMAKE_C_STANDARD 11)

add_executable(asciiclock src/main.c src/asciichars.c src/asciichars.h src/main.h src/asciiutils.c src/asciiutils.h)