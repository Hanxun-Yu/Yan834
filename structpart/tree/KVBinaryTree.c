//
// Created by yuhanxun on 2018/11/8.
//

#include <stdlib.h>
#include <stdio.h>
#include "KVBinaryTree.h"

int getValue(KVBinaryTree *this);

char *getName(KVBinaryTree *this);

KVBinaryTree *newKVBinaryTree(TypeElement *typeElement) {
    KVBinaryTree *ret = malloc(sizeof(KVBinaryTree));
    ret->data = typeElement;
    ret->leftTree = NULL;
    ret->rightTree = NULL;
    ret->printTravel = printKVBinaryTreeTravel;

}

void printKVBinaryTreeTravel(KVBinaryTree *this) {
    if (this->leftTree)
        this->leftTree->printTravel(this->leftTree);
    printf("-[%s:%d]-", getName(this), getValue(this));
    if (this->rightTree)
        this->rightTree->printTravel(this->rightTree);
}

int getValue(KVBinaryTree *this) {
    return this->data->getValue(this->data);
}

char *getName(KVBinaryTree *this) {
    return this->data->getName(this->data);
}