cmake_minimum_required(VERSION 3.9.6)
project(Yan834 C)

set(CMAKE_C_STANDARD 11)

include_directories(cpart)
include_directories(structpart)
include_directories(structpart/hash)
include_directories(structpart/tree)

add_executable(Yan834
        cpart/cpart.c
        cpart/cpart.h
        cpart/cpart_io_file.c
        cpart/cpart_io_file.h
        cpart/cpart_io_std.c
        cpart/cpart_io_std.h
        cpart/cpart_lib_std.h
        cpart/cpart_struct_union.c
        cpart/cpart_struct_union.h
        structpart/hash/HashTable.c
        structpart/hash/HashTable.h
        structpart/tree/BinaryTree.c
        structpart/tree/BinaryTree.h
        structpart/tree/Huffman.c
        structpart/tree/Huffman.h
        structpart/tree/KVBinaryTree.c
        structpart/tree/KVBinaryTree.h
        structpart/tree/SearchBinaryTree.c
        structpart/tree/SearchBinaryTree.h
        structpart/LinkList.c
        structpart/LinkList.h
        structpart/question.c
        structpart/question.h
        structpart/sorter.c
        structpart/sorter.h
        structpart/structpart.c
        structpart/structpart.h
        structpart/TypeElement.c
        structpart/TypeElement.h
        main.c)
