//
// Created by yuhanxun on 2018/11/6.
//

#include <stdlib.h>
#include <stdio.h>
#include "BinaryTree.h"


//BinaryTree *newBinaryTree(TypeElement *element) {
//    BinaryTree *ret = malloc(sizeof(BinaryTree));
//    ret->data = element;
//    ret->leftTree = NULL;
//    ret->rightTree = NULL;
//    ret->printTravel = printTravel;
//    ret->addChildTree = addChildTree;
//    return ret;
//}

BinaryTree *newBinaryTree(int val) {
    BinaryTree *ret = malloc(sizeof(BinaryTree));
    TypeElement *element = malloc(sizeof(TypeElement));
    element->val = val;
    ret->data = element;
    ret->leftTree = NULL;
    ret->rightTree = NULL;
    ret->printTravel = printTravel;
    ret->addChildTree = addChildTree;
    return ret;
}


void printTravel(BinaryTree *this) {
    if(this->leftTree)
        this->leftTree->printTravel(this->leftTree);
    printf("-%d-",this->data->val);
    if(this->rightTree)
        this->rightTree->printTravel(this->rightTree);
}

void addChildTree(BinaryTree *this, BinaryTree *childTree) {
//    printf("addChildTree this:%d childTree:%d\n",this->data->val,childTree->data->val);

    if(this->data->val > childTree->data->val) {
//        printf("addChildTree left\n");
//        //left
        if(this->leftTree) {
//            printf("left:%d\n",this->leftTree->data->val);
            this->leftTree->addChildTree(this->leftTree,childTree);
        } else {
//            printf("left:null");
            this->leftTree = childTree;
        }
    } else {
//        printf("addChildTree right\n");

//        //right
        if(this->rightTree) {
//            printf("right:%d\n",this->rightTree->data->val);
            this->rightTree->addChildTree(this->rightTree,childTree);
        } else {
//            printf("right:null\n");
            this->rightTree = childTree;
        }
    }
}
