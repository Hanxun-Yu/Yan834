cmake_minimum_required(VERSION 3.12)
project(Yan834 C)

set(CMAKE_C_STANDARD 99)
include_directories(. cpart)
aux_source_directory(./cpart cpart_list)
add_executable(Yan834
        main.c
        ${cpart_list})