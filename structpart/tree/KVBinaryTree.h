//
// Created by yuhanxun on 2018/11/8.
//

#ifndef YAN834_KVBINARYTREE_H
#define YAN834_KVBINARYTREE_H


#include "BinaryTree.h"

typedef struct KVBinaryTree KVBinaryTree;
struct KVBinaryTree {
    TypeElement *data;
    KVBinaryTree *leftTree;
    KVBinaryTree *rightTree;

    void (*printTravel)(KVBinaryTree *this);

};
KVBinaryTree* newKVBinaryTree(TypeElement* typeElement);
void printKVBinaryTreeTravel(KVBinaryTree *this);

#endif //YAN834_KVBINARYTREE_H
