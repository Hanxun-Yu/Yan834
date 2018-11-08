//
// Created by yuhanxun on 2018/11/5.
//

#include <stdio.h>
#include "structpart.h"
#include "BinaryTree.h"
#include "SearchBinaryTree.h"
#include "Huffman.h"
#include "HashTable.h"
#include "sorter.h"
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
//    BinaryTree* rootTree = newBinaryTree(newTypeElement(24));
    BinaryTree* rootTree = newSearchBinaryTree(newTypeElement(24));
    BinaryTree* a = newSearchBinaryTree(newTypeElement(15));
    BinaryTree* b = newSearchBinaryTree(newTypeElement(25));
    BinaryTree* c = newSearchBinaryTree(newTypeElement(12));
    BinaryTree* d = newSearchBinaryTree(newTypeElement(67));
    BinaryTree* e = newSearchBinaryTree(newTypeElement(45));

    rootTree->addChildTree(rootTree,a);
    rootTree->addChildTree(rootTree,b);
    rootTree->addChildTree(rootTree,c);
    rootTree->addChildTree(rootTree,d);
    rootTree->addChildTree(rootTree,e);

    rootTree->printTravel(rootTree);
}

void testHuffman() {
    HashTable* ht = hash_table_new();
    hash_table_put(ht,"a1234",56);
    hash_table_put(ht,"b5645",23);

    hash_table_put(ht,"a12",45);
    hash_table_put(ht,"c7657",21);

    hash_table_put(ht,"g2321",54);
    hash_table_put(ht,"b123542",43);
    hash_table_put(ht,"n12232",23);

    KVBinaryTree* hufftree = buildHuffmanTree(ht);
    HashTable* dict = getDataDict(hufftree,1);
    hash_print_table(dict);

}

void testSort() {
    int arr[] = {24,13,56,34,73,41,53,23,12,65};
    int length = sizeof(arr)/ sizeof(int);
//    bubbleSort(arr,length);
    insertSort(arr,length);
    printArr(arr,length);
}
void structpart() {
//    testLinkList();
//    testBinaryTree();
//    testHuffman();
    testSort();
}



