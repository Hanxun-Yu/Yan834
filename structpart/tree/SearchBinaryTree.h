//
// Created by yuhanxun on 2018/11/8.
//

#ifndef YAN834_SEARCHBINARYTREE_H
#define YAN834_SEARCHBINARYTREE_H

#include "BinaryTree.h"
/**
 * 排序树必须有数值 这里用TypeElement
 * @param typeElement
 * @return
 */
BinaryTree* newSearchBinaryTree(TypeElement* typeElement) ;
void printSearchBinaryTreeTravel(BinaryTree *this);
void addChildSearchBinaryTree(BinaryTree *this, BinaryTree *childTree);


#endif //YAN834_SEARCHBINARYTREE_H

