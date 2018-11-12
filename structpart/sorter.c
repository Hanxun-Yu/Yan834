//
// Created by yuhanxun on 2018/11/8.
//

#include <stdio.h>
#include "sorter.h"
void insertSort(int *arr, int size);

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size) {
    int swapped;
    for(int i=0;i<size;i++) {
        swapped = 0;//swap not happened
        //ignore last item
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;//swap happened
            }
        }
        if(!swapped) {
            break;
        }
    }
}

void insertSort(int *arr, int size) {
    //We regard the item of index 0 as sorted
    //Thus i start from 1

    for (int i = 1; i < size; i++) {
        //insert to sorted
        for (int j = i; j > 0; j--) {
            if(arr[j] < arr[j-1]) {
                swap(&arr[j],&arr[j-1]);
            }
        }
    }
}

void selectSort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

void quickSort(int *arr, int size) {

}

void mergeSort(int *arr, int size) {

}

void printArr(int *arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) {
            printf(",");
        }
    }
    printf("]\n");
}
