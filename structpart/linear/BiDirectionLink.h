//
// Created by xunxun on 2019/9/2.
//

#ifndef YAN834_BIDIRECTIONLINK_H
#define YAN834_BIDIRECTIONLINK_H

#include <node/Data.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node {
    Node* next;
    Node* prior;
    Data data;
};

Node *createBiDirectionLink(int *array, int length) {
    Node *ret = NULL;
    Node *lastNode = NULL;

    for (int i = 0; i < length; i++) {
        Node *node = (Node *) malloc(sizeof(Node));
        node->data.value = array[i];
        node->next = NULL;
        node->prior = NULL;

        if (lastNode == NULL) {
            ret = node;
        } else {
            lastNode->next = node;
            node->prior = lastNode;
        }
        lastNode = node;
    }

    return ret;
}
#endif //YAN834_BIDIRECTIONLINK_H
