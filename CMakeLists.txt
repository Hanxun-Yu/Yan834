cmake_minimum_required(VERSION 3.12)
project(Yan834 C)

set(CMAKE_C_STANDARD 99)
include_directories(.)
add_executable(Yan834 main.c cpart.h cpart_struct_union.h cpart_io_std.h cpart_io_file.h cpart_lib_std.h)