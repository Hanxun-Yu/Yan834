//
// Created by yuhanxun on 2018/11/6.
//

#include <stdlib.h>
#include <stdio.h>
#include "BinaryTree.h"


//BinaryTree *newBinaryTree(Data *element) {
//    BinaryTree *ret = malloc(sizeof(BinaryTree));
//    ret->data = element;
//    ret->leftTree = NULL;
//    ret->rightTree = NULL;
//    ret->printTravel = printTravel;
//    ret->addChildTree = addChildTree;
//    return ret;
//}

BinaryTree *newBinaryTree(void* val) {
    BinaryTree *ret = malloc(sizeof(BinaryTree));
    ret->data = val;
    ret->leftTree = NULL;
    ret->rightTree = NULL;
    ret->printTravel = printTravel;
    ret->addChildTree = addChildTree;
    return ret;
}


void printTravel(BinaryTree *this) {
    if(this->leftTree)
        this->leftTree->printTravel(this->leftTree);
    printf("-%p-",(this->data));
    if(this->rightTree)
        this->rightTree->printTravel(this->rightTree);
}

void addChildTree(BinaryTree *this, BinaryTree *childTree) {
//    printf("addChildTree this:%d childTree:%d\n",this->data->val,childTree->data->val);

    if(!this->leftTree) {
        this->leftTree = childTree;
    } else if(!this->rightTree) {
        this->rightTree = childTree;
    } else {
        int ra = rand()%10;
        if(ra< 5) {
            this->leftTree->addChildTree(this->leftTree,childTree);
        } else {
            this->rightTree->addChildTree(this->rightTree,childTree);
        }
    }

//    if(((Data*)this->data)->val > ((Data*)childTree->data)->val) {
////        //left
//        if(this->leftTree) {
//            this->leftTree->addChildTree(this->leftTree,childTree);
//        } else {
//            this->leftTree = childTree;
//        }
//    } else {
////        //right
//        if(this->rightTree) {
//            this->rightTree->addChildTree(this->rightTree,childTree);
//        } else {
//            this->rightTree = childTree;
//        }
//    }
}
