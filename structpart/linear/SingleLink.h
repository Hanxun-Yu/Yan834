//
// Created by xunxun on 2019/9/2.
//

#ifndef YAN834_SINGLELINK_H
#define YAN834_SINGLELINK_H

#include <Data.h>
#include <stddef.h>
#include <stdlib.h>

typedef struct Node Node;


struct Node {
    Node *next;
    Data data;
};

Node *createSingleLink(int *array, int length) {
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
    return ret;
}

Node *reverse(Node *head) {

}


#endif //YAN834_SINGLELINK_H
