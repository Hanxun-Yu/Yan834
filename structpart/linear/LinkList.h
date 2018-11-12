//
// Created by yuhanxun on 2018/11/5.
//

#ifndef YAN834_LINKLIST_H
#define YAN834_LINKLIST_H

typedef struct Node Node;
typedef struct LinkList LinkList;
typedef struct Node {
    int data;
    Node * next;
};

struct LinkList {
    Node* head;
    Node* tail;
    int maxSize;
    int length;
};

Node* newNode(int data);
LinkList* create(int size);
int insert(LinkList* list, int data);
int delete(LinkList* list, int data);
int isFull(LinkList* list);
int isEmpty(LinkList* list);
int reverse(LinkList* list);
void inverse(Node **h);
void printSelf(LinkList* list);


#endif //YAN834_LINKLIST_H
