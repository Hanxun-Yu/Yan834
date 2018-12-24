//
// Created by yuhanxun on 2018/11/8.
//

#include <stdio.h>
#include <stdlib.h>
#include "sorter.h"

void insertSort(int *arr, int size);

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size) {
    int swapped;
    for (int i = 0; i < size; i++) {
        swapped = 0;//swap not happened
        //ignore last item
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;//swap happened
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void bubbleDoubleDirSort(int *arr, int size) {
    int swapped = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = 1;//swap happened
            }
        }

        for (int k = size - 2 - i; k > i; k--) {
            if (arr[k] < arr[k - 1]) {
                swap(&arr[k], &arr[k - 1]);
                swapped = 1;//swap happened
            }
        }
        if (!swapped) {
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
            if (arr[j] < arr[j - 1]) {
                swap(&arr[j], &arr[j - 1]);
            } else {
                break;
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

/**
 *
 * @param arr
 * @param size
 * @return
 */
int quickSort(int *arr, int size) {
    int base = arr[0];
    int spaceIndex = 0;

    int i = 1;
    int j = size - 1;
    int isLeft = 0;
    int calIndex = 0;
    while (j > i) {
        if (isLeft) {
            calIndex = i++;
        } else {
            calIndex = j--;
        }
        if ((arr[calIndex] < base && calIndex > spaceIndex)
            || (arr[calIndex] > base && calIndex < spaceIndex)) {
            arr[spaceIndex] = arr[calIndex];
            arr[calIndex] = 0;
            spaceIndex = calIndex;
            isLeft = !isLeft;
            continue;
        }
    }
    arr[spaceIndex] = base;
    if (size > 2) {
        quickSort(arr, spaceIndex);
        quickSort(&arr[spaceIndex + 1], size - spaceIndex - 1);
    }
    return 0;

}

void mergeSort(int *arr, int size) {

}

void shellSort(int *arr, int size) {
    int increment = size;
    do {
        increment = increment / 3 + 1;

        for (int i = 0; i < increment; i++) {
            int loopCount = size / increment + 1;
            printf("loopCount:%d increment:%d\n", loopCount, increment);
            for (int j = increment; j < size; j += increment) {
                for (int k = j; k > 0; k -= increment) {
                    if (arr[k] < arr[k - increment]) {
                        swap(&arr[k], &arr[k - increment]);
                        printArr(arr, size);
                    } else {
                        break;
                    }
                }
            }
        }
    } while (increment > 1);
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
