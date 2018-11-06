cmake_minimum_required(VERSION 3.12)
project(Yan834 C)

set(CMAKE_C_STANDARD 99)
include_directories(. cpart structpart structpart/tree structpart/hash)
aux_source_directory(./cpart cpart_list)
aux_source_directory(./structpart structpart_list)

add_executable(Yan834
        main.c
        ${cpart_list}
        ${structpart_list}
        structpart/LinkList.h structpart/LinkList.c structpart/structpart.h structpart/structpart.c structpart/tree/BinaryTree.h structpart/TypeElement.h structpart/tree/BinaryTree.c structpart/tree/Huffman.h structpart/hash/HashTable.h structpart/hash/HashTable.c)