//
// Created by yuhanxun on 2018/11/8.
//

#include <stdlib.h>
#include <memory.h>
#include "Huffman.h"

int remove2Minimum(KVBinaryTree **tree, int size, KVBinaryTree **minimum1, KVBinaryTree **minimum2);

void addNewTree(KVBinaryTree **tree, int size, KVBinaryTree *newTree);


KVBinaryTree *buildHuffmanTree(HashTable *ht) {

    char **keys;
    int size;
    hash_table_getKeys(ht, &keys, &size);

    KVBinaryTree *trees[size];
    memset(trees,0,size * sizeof(KVBinaryTree*));
    for (int i = 0; i < size; i++) {
        if (keys[i]) {
            printf("key:%s data:%d\n", keys[i], hash_table_get(ht, keys[i]));
            trees[i] = newKVBinaryTree(newTypeElement2(hash_table_get(ht, keys[i]),keys[i]));
        }
    }

    //find 2 minimum weight
    KVBinaryTree *minimum1 = NULL;
    KVBinaryTree *minimum2 = NULL;
    KVBinaryTree *newTree = NULL;

    while (remove2Minimum(trees, size, &minimum1, &minimum2)) {
        newTree = newKVBinaryTree(newTypeElement(minimum1->data->value + minimum2->data->value));
        newTree->leftTree = minimum1;
        newTree->rightTree = minimum2;
        addNewTree(trees, size, newTree);
    }
    newTree->printTravel(newTree);
    printf("\n");

    return newTree;
}

/**
 *
 * @param tree
 * @param minimum1
 * @param minimum2
 * @return if tree empty after removing return 0, else return 1
 */
int remove2Minimum(KVBinaryTree **tree, int size, KVBinaryTree **minimum1, KVBinaryTree **minimum2) {
    printf("remove2Minimum:%p,%d\n", tree, size);
    int min1Index = -1;
    int min2Index = -1;
    int isNotNullNum = 0;
    for (int i = 0; i < size; i++) {
        if (!tree[i]) {
            continue;
        }
        isNotNullNum++;

        if (min1Index == -1) {
            min1Index = i;
        } else {

            if (tree[i]->data->value < tree[min1Index]->data->value) {
                min2Index = min1Index;
                min1Index = i;
            } else if (min2Index == -1 || tree[i]->data->value < tree[min2Index]->data->value)
                min2Index = i;
        }
    }
    *minimum1 = tree[min1Index];
    *minimum2 = tree[min2Index];
    printf("minimum1:%d\n", tree[min1Index]->data->value);
    printf("minimum2:%d\n", tree[min2Index]->data->value);
    tree[min1Index] = NULL;
    tree[min2Index] = NULL;

    for(int i=0;i<size;i++) {
        if(tree[i]) {
            printf("[%d]%d,",i,tree[i]->data->value);
        } else {
            printf("[%d]null,",i);
        }
    }
    printf("\n");
    if (isNotNullNum == 1) {
        return 0;
    } else {
        return 1;
    }
}

void addNewTree(KVBinaryTree **tree, int size, KVBinaryTree *newTree) {
    for(int i=0;i<size;i++) {
        if(!tree[i]) {
            tree[i] = newTree;
            break;
        }
    }
}

/**
 *
 * @param huffmanTree
 * @return L->0 R->1  isNotLeaf-> -1
 */
int isLoRLeaf(BinaryTree* huffmanTree,int encode) {
    if(huffmanTree->leftTree) {
        encode = encode*10;
        isLoRLeaf(huffmanTree->leftTree,encode);
    }
}

HashTable* getDataDict(KVBinaryTree* huffmanTree, int encode) {
    if(!huffmanTree) {
        return NULL;
    }
    HashTable* leftTable = NULL;
    HashTable* rightTable = NULL;
    HashTable* ret = hash_table_new();

    //L->0 R->1
    if (huffmanTree->leftTree) {
        leftTable = getDataDict(huffmanTree->leftTree,encode*10);
    }

    if(huffmanTree->rightTree) {
        rightTable = getDataDict(huffmanTree->rightTree,encode*10 +1);
    }

    if(!huffmanTree->leftTree && !huffmanTree->rightTree) {

        printf("Leaf:[%s:%d]\n",huffmanTree->data->name,encode);
        hash_table_put(ret,huffmanTree->data->name,encode)
        return ret;
    } else {
        if(leftTable) {
            char **keys;
            int size;
            hash_table_getKeys(leftTable, &keys, &size);
            for(int i=0;i<size;i++) {
                if(keys[i]) {
                    hash_table_put(ret,keys[i],hash_table_get(leftTable,keys[i]));
                }
            }
        }

        if(rightTable) {
            char **keys;
            int size;
            hash_table_getKeys(rightTable, &keys, &size);
            for(int i=0;i<size;i++) {
                if(keys[i]) {
                    hash_table_put(ret,keys[i],hash_table_get(rightTable,keys[i]));
                }
            }
        }
        return ret;
    }
}

