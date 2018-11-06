//
// Created by yuhanxun on 2018/11/6.
//

#ifndef YAN834_BINARYTREE_H
#define YAN834_BINARYTREE_H

#include "TypeElement.h"
typedef struct BinaryTree BinaryTree;

struct BinaryTree {
    TypeElement* data;
    BinaryTree* leftTree;
    BinaryTree* rightTree;

    void (*printTravel)(BinaryTree* this);
    void (*addChildTree)(BinaryTree* this,BinaryTree* childTree);

};

//BinaryTree *newBinaryTree(TypeElement *element);
BinaryTree *newBinaryTree(int val);

void printTravel(BinaryTree* this);
void addChildTree(BinaryTree* this,BinaryTree* childTree);
#endif //YAN834_BINARYTREE_H
