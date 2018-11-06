//
// Created by yuhanxun on 2018/11/5.
//

#include <stdio.h>
#include "structpart.h"
#include "BinaryTree.h"
#include "Huffman.h"
#include "HashTable.h"
void testLinkList() {
    LinkList* linkList = create(5);
    insert(linkList,1);
    insert(linkList,2);
    insert(linkList,3);
    insert(linkList,4);
    insert(linkList,5);

    reverse(linkList);
    printSelf(linkList);

}

void testBinaryTree() {
    BinaryTree* rootTree = newBinaryTree(20);
    BinaryTree* a = newBinaryTree(15);
    BinaryTree* b = newBinaryTree(25);
    BinaryTree* c = newBinaryTree(12);
    BinaryTree* d = newBinaryTree(67);
    BinaryTree* e = newBinaryTree(45);
    rootTree->addChildTree(rootTree,a);
    rootTree->addChildTree(rootTree,b);
    rootTree->addChildTree(rootTree,c);
    rootTree->addChildTree(rootTree,d);
    rootTree->addChildTree(rootTree,e);

    rootTree->printTravel(rootTree);
}

void testHuffman() {
    HashTable* ht = hash_table_new();
    hash_table_put(ht,"a",1);
    hash_table_put(ht,"b",1);

    hash_table_put(ht,"a",2);
    hash_table_put(ht,"cawd",2);

    hash_table_put(ht,"da",2);
    hash_table_put(ht,"ada",2);
    hash_table_put(ht,"awwd",2);



    printf("a:%d\n", hash_table_get(ht,"a"));
    printf("b:%d\n", hash_table_get(ht,"b"));
    char** keys;
    int size;
    hash_table_getKeys(ht,&keys,&size);
    for(int i=0;i<size;i++) {
        printf("key:%s\n",keys[i]);
    }



}
void structpart() {
//    testLinkList();
//    testBinaryTree();
    testHuffman();
}

