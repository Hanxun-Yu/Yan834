//
// Created by yuhanxun on 2018/11/12.
//

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include "Queue.h"

Queue *newQueue(int MAXQSIZE) {
    Queue *ret = malloc(sizeof(Queue));
    ret->count = 0;
    ret->front = 0;
    ret->MAXQSIZE = MAXQSIZE;
    ret->nodes = malloc(sizeof(QueueNode*) * MAXQSIZE);
    memset(ret->nodes, 0, sizeof(QueueNode*) * MAXQSIZE);
    return ret;
}

int isQueueEmpty(Queue *queue) {
    return queue->count == 0;
}

int isQueueFull(Queue *queue) {
    return queue->count == queue->MAXQSIZE - 1;
}

QueueNode *getHead(Queue *queue) {
    QueueNode *ret = NULL;
    if (!isQueueEmpty(queue)) {
        ret = queue->nodes[queue->front];
    }

    return ret;
}

QueueNode *dequeue(Queue *queue) {
    QueueNode *ret = NULL;
    if (!isQueueEmpty(queue)) {
        ret = queue->nodes[queue->front];
        queue->front++;
        queue->front %= queue->MAXQSIZE;
        queue->count--;
    }
//    printf("dequeue front:%d, count:%d, ret:%d\n", queue->front, queue->count, ret->val);

    for (int i = 0; i < queue->MAXQSIZE; i++) {
        if (queue->nodes[i]) {
//            printf("-%d-", queue->nodes[i]->val);
        }
    }
//    printf("\n");
    return ret;
}

int inQueue(Queue *queue, QueueNode *node) {
    int ret = 0;
    if (!isQueueFull(queue)) {
        ret = 1;
        queue->nodes[(queue->front + queue->count) % queue->MAXQSIZE] = node;
        queue->count++;
    }
//    printf("inQueue node:%d ,front:%d, count:%d, ret:%d\n", node->val, queue->front, queue->count, ret);
    for (int i = 0; i < queue->MAXQSIZE; i++) {
        if (queue->nodes[i]) {
//            printf("-%d-", queue->nodes[i]->val);
        }

    }
//    printf("\n");

    return ret;
}

int inQueueInt(Queue *queue, int val) {
    int ret = 0;
    QueueNode *temp = malloc(sizeof(QueueNode));
    temp->val = val;
    ret = inQueue(queue, temp);
    if (!ret) {
        free(temp);
    }
    return ret;
}