//
// Created by yuhanxun on 2018/11/1.
//

#include "cpart.h"
#include "common.h"

void cpart() {
    //基本数据类型定义及大小
    defineDataType();

    //常见语法陷阱
    testPrammar();

    //静态变量
    testStatic();

    //测试 函数参数 指针
    testFunPoint();

    //数组与指针
    arrayPoint();

    //测试 二分法查找
    testBinaySearch();


//    stdIn();

//    writeFileOver("/cygdrive/d/test_openfile.txt","abcd1234\n2dwadwa\n3dawdw");
//    readFile("/cygdrive/d/test_openfile.txt");

//    readFile("/Users/xunxun/testc.txt");

    structT();
//    structMemory();
//    unionT();

}

void testPrammar() {
    //--k的值-----------------------------------------------
    printModuleStart("k的值");
    int i = 0;
    int f = 0;
    int k = 0;
    k = 2 + i, f + 4;
    printf("k:%d\n", k);
    printModuleEnd("k的值");
    //-------------------------------------------------


    //--char ASCII码偏移-----------------------------------------------
    printModuleStart("char ASCII码偏移");
    char ch = 'c';
    printf("c:%c\n", ch >= 'a' && ch <= 'z' ? ch - 32 + 1 : ch);
    printModuleEnd("char ASCII码偏移");

    //-------------------------------------------------


    //--y的值-----------------------------------------------
    printModuleStart("y的值");
    double x, y;
    x = 2;
    y = x + 2 / 3;
    printf("y:%f\n", y);
    printModuleEnd("y的值");
    //-------------------------------------------------


    //--2种定义方式长度一样吗?-----------------------------------------------
    printModuleStart("2种定义方式长度一样吗?");
    static char xx[] = "12345";
    char yy[] = {'1', '2', '3', '4', '5'};
    printf("xx:%d yy:%d\n", sizeof(xx), sizeof(yy));
    printModuleEnd("2种定义方式长度一样吗?");
    //-------------------------------------------------


    //--p指向的字符是谁-----------------------------------------------
    printModuleStart("p指向的字符是谁?");
    char a[30] = "myfirstschoolday", *p;
    p = a;
    p += 7;
    printf("%c\n", *p);
    printModuleEnd("p指向的字符是谁?");
    //-------------------------------------------------


    //--优先级问题-----------------------------------------------
    printModuleStart("优先级问题?");
    int num4 = 4;
    int num5 = 5;
    int ret = 3;
    ret *= num4 + num5;
    printf("%d\n", ret);
    printModuleEnd("优先级问题?");
    //-------------------------------------------------

}

void defineStatic() {
    static int haha = 0;
    println("testStatic start:%d", haha);
    haha = 1;
    println("testStatic end:%d", haha);
}

void testStatic() {
    printModuleStart("testStatic");
    defineStatic();
    defineStatic();
    printModuleEnd("testStatic");
}

void defineDataType() {
    printModuleStart("defineDataType");
    //数字类型
    char charV;//1字节
    short shortV;//2
    int intV;//4
    float floatV;//4
    double doubleV;//8
    long long llongV;//8


    //以下如果是64位机器大小x2
    long longV;//4(8)
    long int lIntV;//4(8)
    long double ldoubleV;//8(16)

    signed char signedCharV;
    signed int signedIntV;

    printf("char:%d\n", sizeof(charV));
    printf("short:%d\n", sizeof(shortV));
    printf("int:%d\n", sizeof(intV));
    printf("float:%d\n", sizeof(floatV));
    printf("double:%d\n", sizeof(doubleV));
    printf("long long:%d\n", sizeof(llongV));
    printf("long:%d\n", sizeof(longV));
    printf("long int:%d\n", sizeof(lIntV));
    printf("long double:%d\n", sizeof(ldoubleV));

    printModuleEnd("defineDataType");

}



void funPoint(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void testFunPoint() {
    printModuleStart("testFunPoint");

    int a = 2, b = 3;
    funPoint(&a, &b);
    println("a=%d,b=%d", a, b);

    printModuleEnd("testFunPoint");

}


void arrayPoint() {
    printModuleStart("arrayPoint");


    int arr[] = {1, 2, 3};
    int arr2[3] = {1, 2, 3, 4};

    printIntArr(arr, sizeof(arr) / sizeof(arr[0]));
    printIntArr(arr2, sizeof(arr2) / sizeof(arr2[0]));

    int *point = arr;
    int *point2 = arr;

    printIntArr(point, sizeof(arr) / sizeof(arr[0]));
    printIntArr(point2, sizeof(arr2) / sizeof(arr2[0]));

    printModuleEnd("arrayPoint");
}

void printIntArr(int *arr, int size) {
    printf("printIntArr:{");
    for (int i = 0; i < size; i++) {
        printf(" %d", arr[i]);
        if (i != size - 1)
            printf(",");
    }
    printf("}\n");

}

void testBinaySearch() {
    printModuleStart("testBinaySearch");

    //二分法查找
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    println("binarySearch:%d", binarySearch(arr, 13, 8));

    printModuleEnd("testBinaySearch");

}

int binarySearch(int32_t *arr, int32_t size, int32_t key) {

    int ret = -1;
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == arr[mid]) {
            ret = mid;
            break;
        } else if (key > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ret;
}
