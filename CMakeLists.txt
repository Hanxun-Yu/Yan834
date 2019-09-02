cmake_minimum_required(VERSION 3.9.6)
project(Yan834 C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(cpart)
include_directories(structpart)
include_directories(structpart/hash)
include_directories(structpart/tree)
include_directories(structpart/node)
include_directories(structpart/linear)



add_executable(Yan834
        cpart/cpart.c
        cpart/cpart.h
        cpart/io/cpart_io_file.c
        cpart/io/cpart_io_file.h
        cpart/io/cpart_io_std.c
        cpart/io/cpart_io_std.h
        cpart/struct_union/cpart_struct_union.c
        cpart/struct_union/cpart_struct_union.h
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
        structpart/linear/LinkList.c
        structpart/linear/LinkList.h
        structpart/question/question.c
        structpart/question/question.h
        structpart/sort/sorter.c
        structpart/sort/sorter.h
        structpart/structpart.c
        structpart/structpart.h
        structpart/node/Data.c
        structpart/node/Data.h
        main.c structpart/linear/Queue.c structpart/linear/Queue.h include/common.h structpart/linear/SingleLink.h structpart/linear/LoopLink.h structpart/linear/BiDirectionLink.h)
