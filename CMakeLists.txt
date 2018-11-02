cmake_minimum_required(VERSION 3.12)
project(Yan834 C)

set(CMAKE_C_STANDARD 99)
include_directories(.)
add_executable(Yan834 main.c cpart.c cpart_io_std.c cpart_io_file.c cpart_struct_union.c)