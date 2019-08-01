//
// Created by yuhanxun on 2018/11/9.
//

#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <linear/Queue.h>
#include "question.h"

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

NodeList *head;

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
    return nodeList;
}

int Max(Node *f) {
    if (!f)
        return 0;
    if (f->next) {
        int temp = Max(f->next);
        if (temp > f->data)
            return temp;
        else
            return f->data;
    } else {
        return f->data;
    }
}

int Num(Node *f) {
    if (!f)
        return 0;
    if (f->next) {
        int num = Num(f->next);
        return num + 1;
    } else {
        return 1;
    }

}

Node *Search(Node *f, int x) {
    if (!f)
        return 0;
    if (f->data != x) {
        if (f->next)
            return Search(f->next, x);
        else
            return 0;
    } else {
        return f;
    }
}

void linkMaxNumSearch() {
    Node *a = newNode(20);
    a->next = newNode(30);
    a->next->next = newNode(34);
    a->next->next->next = newNode(25);
    a->next->next->next->next = newNode(120);
    printf("120:%p\n", a->next->next->next->next);
    a->next->next->next->next->next = newNode(34);
    a->next->next->next->next->next->next = newNode(39);
    a->next->next->next->next->next->next->next = newNode(50);
    a->next->next->next->next->next->next->next->next = 0;

    //Max
    printf("max:%d\n", Max(a));
    printf("num:%d\n", Num(a));
    printf("num:%p\n", Search(a, 120));

    inverse(&a);
    do {
        printf("-%d-", a->data);
        a = a->next;
    } while (a);
    printf("\n");

}

int findScore(char *data);

int getScore() {
    const char *path = "/cygdrive/d/test_readfile_getdata.txt";
    remove(path);
    FILE *wfp = fopen(path, "w");
    fputs("MAN 56\n", wfp);
    fputs("FEM 34\n", wfp);
    fputs("MAN 56\n", wfp);
    fputs("FEM 12\n", wfp);
    fputs("MAN 87\n", wfp);
    fputs("FEM 56\n", wfp);
    fputs("MAN 84\n", wfp);
    fputs("FEM 56\n", wfp);
    fputs("MAN 34\n", wfp);
    fputs("FEM 89\n", wfp);
    fputs("MAN 95\n", wfp);
    fputs("MAN 100\n", wfp);
    fputs("FEM 45\n", wfp);
    fputs("MAN 38\n", wfp);
    fputs("MAN 94\n", wfp);
    fclose(wfp);


    FILE *fp = fopen(path, "r");
    char buff[10];
    int score[50];
    int index = 0;
    while (!feof(fp)) {
        memset(buff, -1, 10);
        fgets(buff, 10, fp);
        score[index++] = findScore(buff);
    }


}

int findScore(char *data) {

    char c = -1;
    int index = 0;
    int start = 0;
    char subScore[4];
    int subScoreIndex = 0;
    do {
        c = data[index];
        if (start) {
            subScore[subScoreIndex++] = c;
        }

        if (c == ' ') {
            start = 1;
            subScoreIndex = 0;
        }


    } while (data[++index] != '\n');
    return atoi(subScore);

}

void inputNum() {
    int arr[10];
    int time = 10;
    int index = 0;
    char buff[10];
    while (time-- > 0) {
        memset(buff, 0, 10);
        printf("please input:");
        arr[index++] = atoi(gets(buff));
    }


    for (int i = 0; i < 10; i++) {
        printf("data:%d\n", arr[i]);
    }
}


void YangHuiTriangle(int N) {
    Queue *queue = newQueue(N + 1);
    inQueueInt(queue, 1);

    for (int i = 0; i < N; i++) {
        printf("line %d:", i);
        inQueueInt(queue, 1);

        int spaceTime = N - i;
        while (spaceTime-- > 0) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            int temp = dequeue(queue)->val;
            printf("%d ", temp);
            int head = getHead(queue)->val;
//            printf("%d ", head);
            inQueueInt(queue, temp + head);
        }
        printf("%d\n", dequeue(queue)->val);
        inQueueInt(queue, 1);
    }
}


















