//
// Created by xunxun on 2019/9/2.
//

#ifndef YAN834_LOOPLINK_H
#define YAN834_LOOPLINK_H


#include <node/Data.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    Data data;
    Node* next;
};

Node *createLoopLink(int *array, int length) {
    Node *ret = NULL;
    Node *lastNode = NULL;

    for (int i = 0; i < length; i++) {
        Node *node = (Node *) malloc(sizeof(Node));
        node->data.value = array[i];
        node->next = NULL;

        if (lastNode == NULL) {
            ret = node;
        } else {
            lastNode->next = node;
        }
        lastNode = node;
    }
    lastNode->next = ret;

    return ret;
}

#endif //YAN834_LOOPLINK_H
