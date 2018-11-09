//
// Created by yuhanxun on 2018/11/9.
//

#include <stdlib.h>
#include <stdio.h>

typedef struct ElemType ElemType;
struct ElemType {
    int data;
};

typedef struct NodeList NodeList;
struct NodeList {
    ElemType data;
    NodeList *next;
};

typedef struct LinkList2 LinkList2;
struct LinkList2 {
    LinkList2 *left;
    LinkList2 *right;
    ElemType data;
};

NodeList *getLeafNode(LinkList2 *tree, NodeList *nodeList);

LinkList2 *newLinkList2(ElemType elemType) {
    LinkList2 *t1 = malloc(sizeof(LinkList2));
    t1->data = elemType;
    return t1;
}

NodeList * head;
void right2LeftBinaryTreeLeaf() {

    ElemType e1 = {1};
    ElemType e2 = {2};
    ElemType e3 = {3};
    ElemType e4 = {4};
    ElemType e5 = {5};
    ElemType e6 = {6};
    ElemType e7 = {7};
    ElemType e8 = {8};
    ElemType e9 = {9};
    ElemType e10 = {10};
    ElemType e11 = {11};


    LinkList2 *t1 = newLinkList2(e1);
    LinkList2 *t2 = newLinkList2(e2);
    LinkList2 *t3 = newLinkList2(e3);
    LinkList2 *t4 = newLinkList2(e4);
    LinkList2 *t5 = newLinkList2(e5);
    LinkList2 *t6 = newLinkList2(e6);
    LinkList2 *t7 = newLinkList2(e7);
    LinkList2 *t8 = newLinkList2(e8);
    LinkList2 *t9 = newLinkList2(e9);
    LinkList2 *t10 = newLinkList2(e10);
    LinkList2 *t11 = newLinkList2(e11);


    t4->left = t5;

    t4->right = t3;

    t2->left = t4;
    t2->right = t1;
    t7->left = t2;

    t7->right = t8;
    t8->left = t9;
    t8->right = t10;

    t10->left = t6;
    t6->right = t11;

    printf("left:%p right:%p\n", t4->left, t4->right);

    //top t7;
    getLeafNode(t7, NULL);
    do {
        printf("data:%d\n", head->data.data);
        head = head->next;
    } while (head);

}

NodeList *getLeafNode(LinkList2 *tree, NodeList *nodeList) {
    if (tree) {
        if (tree->right) {
            nodeList = getLeafNode(tree->right, nodeList);
        }

        if (tree->left) {
            nodeList = getLeafNode(tree->left, nodeList);
        }

        if (!tree->right && !tree->left) {
            NodeList *newNode = malloc(sizeof(NodeList));
            newNode->next = NULL;
            newNode->data = tree->data;
            if (nodeList)
                nodeList->next = newNode;
            else
                head = newNode;

            return newNode;
        }
    }
    return  nodeList;
}