//
// Created by yuhanxun on 2018/11/8.
//

#include <stdio.h>
#include "SearchBinaryTree.h"


BinaryTree* newSearchBinaryTree(TypeElement* typeElement) {
    BinaryTree* ret = newBinaryTree(typeElement);
    ret->addChildTree = addChildSearchBinaryTree;
    ret->printTravel = printSearchBinaryTreeTravel;
    return ret;
}

void addChildSearchBinaryTree(BinaryTree *this, BinaryTree *childTree) {
    printf("addChildSearchBinaryTree\n");
    if(((TypeElement*)this->data)->getValue(this->data) > ((TypeElement*)childTree->data)->getValue(childTree->data)) {
//        //left
        if(this->leftTree) {
            this->leftTree->addChildTree(this->leftTree,childTree);
        } else {
            this->leftTree = childTree;
        }
    } else {
//        //right
        if(this->rightTree) {
            this->rightTree->addChildTree(this->rightTree,childTree);
        } else {
            this->rightTree = childTree;
        }
    }
}

void printSearchBinaryTreeTravel(BinaryTree* this) {
    if(this->leftTree)
        this->leftTree->printTravel(this->leftTree);
    printf("-%d-",(((TypeElement*)this->data))->getValue(this->data));
    if(this->rightTree)
        this->rightTree->printTravel(this->rightTree);
}
