//
// Created by yuhanxun on 2018/11/6.
//

#ifndef YAN834_HUFFMAN_H
#define YAN834_HUFFMAN_H

#include "HashTable.h"
#include "KVBinaryTree.h"
#include <stdio.h>

KVBinaryTree* buildHuffmanTree(HashTable* ht);

HashTable* getDataDict(KVBinaryTree* huffmanTree,int encode);

#endif //YAN834_HUFFMAN_H
