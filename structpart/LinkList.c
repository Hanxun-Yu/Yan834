//
// Created by yuhanxun on 2018/11/5.
//

#include <stdlib.h>
#include <stdio.h>
#include "LinkList.h"

LinkList *create(int maxSize) {
    LinkList *ret = malloc(sizeof(LinkList));
    ret->maxSize = maxSize;
    ret->length = 0;
    ret->head = NULL;
    ret->tail = NULL;
    return ret;
}

int insert(LinkList *list, int data) {
    int ret = 0;
    Node *dataNode = malloc(sizeof(Node));
    dataNode->data = data;
    dataNode->next = NULL;
    if (!isFull(list)) {
        if (list->head == NULL) {
            list->head = dataNode;
        }

        if (list->tail == NULL) {
            list->tail = dataNode;
        } else {
            list->tail->next = dataNode;
            list->tail = dataNode;
            list->tail->next = NULL;
        }
        list->length++;
    }
    return ret;
}

int delete(LinkList *list, int data) {
    int ret = 0;
    if (!isEmpty(list)) {
        Node *item = list->head;
        Node *prev = NULL;//循环中上一次的结点
        do {
            if (item->data == data) {
                //与需要删除的数据一致

                if (prev != NULL) {
                    //上一次结点不为空,不在头部

                    //next 赋值给上一次的next
                    prev->next = item->next;
                    free(item);
                    list->length--;
                    break;
                } else {
                    //在头部
                    list->head = NULL;
                    list->tail = NULL;
                    list->length = 0;
                }
                ret = 1;
            } else {
                prev = item;
            }
        } while (NULL != (item = item->next));
    }

    return ret;
}

int isFull(LinkList *list) {
    if (list->length == list->maxSize) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty(LinkList *list) {
    return list->length == 0;
}

void printSelf(LinkList *list) {
    if (isEmpty(list)) {
        printf("[]");
    } else {
        printf("[");

        Node *item = list->head;
        do {
            printf("%d", item->data);
            if (item->next) {
                printf(",");
            }
        } while (NULL != (item = item->next));
        printf("]");
    }
    printf("\n");
}

int reverse(LinkList *list) {
    int ret = 0;

    if (!isEmpty(list)) {
        Node *item = list->head;
        Node* prev = NULL;
        Node* tmpNext = NULL;
        printf("dd\n");
        do {
            //把我的原下一个给tmp
            tmpNext = item->next;
            if(!prev) {
                list->tail = item;
                item->next = NULL;
            } else {
                //next指向上一个
                item->next = prev;
            }

            prev = item;
            list->head = item;

            printf("item:%d\n",item->data);
            if(item->next)
                printf("item next:%d\n",item->next->data);
            if(tmpNext)
                printf("tmpNext:%d\n",tmpNext->data);

        } while (NULL != (item = tmpNext));
    }
    return ret;
}


