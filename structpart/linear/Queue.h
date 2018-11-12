//
// Created by yuhanxun on 2018/11/12.
//

#ifndef YAN834_QUEUE_H
#define YAN834_QUEUE_H

typedef struct {
    int val;
} QueueNode;

typedef struct {
    QueueNode **nodes;
    int count;
    int front;
    int MAXQSIZE;
} Queue;

Queue *newQueue(int MAXQSIZE);

QueueNode *getHead(Queue *queue);

QueueNode *dequeue(Queue *queue);

int inQueue(Queue *queue, QueueNode *node);

int inQueueInt(Queue *queue, int val);

int isQueueEmpty(Queue *queue);

int isQueueFull(Queue *queue);

#endif //YAN834_QUEUE_H
