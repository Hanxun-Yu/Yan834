//
// Created by yuhanxun on 2018/11/5.
//

#include <stdio.h>
#include "structpart.h"
#include "BinaryTree.h"
#include "SearchBinaryTree.h"
#include "Huffman.h"
#include "HashTable.h"
#include "sort/sorter.h"
#include "question/question.h"
#include "Queue.h"

void testLinkList() {
    LinkList *linkList = create(5);
    insert(linkList, 1);
    insert(linkList, 2);
    insert(linkList, 3);
    insert(linkList, 4);
    insert(linkList, 5);

    reverse(linkList);
    printSelf(linkList);

}

void testBinaryTree() {
//    BinaryTree* rootTree = newBinaryTree(newTypeElement(24));
    BinaryTree *rootTree = newSearchBinaryTree(newTypeElement(24));
    BinaryTree *a = newSearchBinaryTree(newTypeElement(15));
    BinaryTree *b = newSearchBinaryTree(newTypeElement(25));
    BinaryTree *c = newSearchBinaryTree(newTypeElement(12));
    BinaryTree *d = newSearchBinaryTree(newTypeElement(67));
    BinaryTree *e = newSearchBinaryTree(newTypeElement(45));

    rootTree->addChildTree(rootTree, a);
    rootTree->addChildTree(rootTree, b);
    rootTree->addChildTree(rootTree, c);
    rootTree->addChildTree(rootTree, d);
    rootTree->addChildTree(rootTree, e);

    rootTree->printTravel(rootTree);
}

void testHuffman() {
    HashTable *ht = hash_table_new();
    hash_table_put(ht, "a1234", 56);
    hash_table_put(ht, "b5645", 23);

    hash_table_put(ht, "a12", 45);
    hash_table_put(ht, "c7657", 21);

    hash_table_put(ht, "g2321", 54);
    hash_table_put(ht, "b123542", 43);
    hash_table_put(ht, "n12232", 23);

    KVBinaryTree *hufftree = buildHuffmanTree(ht);
    HashTable *dict = getDataDict(hufftree, 1);
    hash_print_table(dict);

}

void testSort() {
    int arr[] = {24, 13, 56, 34, 73, 41, 53, 23, 12, 65};
    int length = sizeof(arr) / sizeof(int);
//    bubbleDoubleDirSort(arr, length);
//    insertSort(arr, length);
//    shellSort(arr,length);
    quickSort(arr,length);
    printArr(arr, length);
}

void testQueue() {
    Queue *queue = newQueue(10);
    inQueueInt(queue, 1);
    inQueueInt(queue, 2);

    inQueueInt(queue, 3);

    dequeue(queue);

    inQueueInt(queue, 4);

    inQueueInt(queue, 5);

    inQueueInt(queue, 6);

    inQueueInt(queue, 7);
    dequeue(queue);

    inQueueInt(queue, 8);

    inQueueInt(queue, 9);

    inQueueInt(queue, 0);

    inQueueInt(queue, 11);
    dequeue(queue);

    inQueueInt(queue, 13);

    inQueueInt(queue, 15);

    inQueueInt(queue, 14);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    inQueueInt(queue, 14);
    inQueueInt(queue, 14);
    inQueueInt(queue, 14);
    inQueueInt(queue, 14);

    for(int i=0;i<queue->MAXQSIZE;i++) {
        printf("-%d-",queue->nodes[i]->val);
    }

}

void structpart() {
//    testLinkList();
//    testBinaryTree();
//    testHuffman();
//    testSort();

    //right2LeftBinaryTreeLeaf();
//    linkMaxNumSearch();
//    getScore();
//    inputNum();
//    testQueue();
//    YangHuiTriangle(10);
    yanghui2(10);
}



