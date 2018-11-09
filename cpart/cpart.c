//
// Created by yuhanxun on 2018/11/1.
//

#include "cpart.h"

void testStatic();

void cpart() {
    //defineDataType();

//    function();
//    arrayPoint();
//    stdIn();

//    writeFileOver("/cygdrive/d/test_openfile.txt","abcd1234");
//    readFile("/cygdrive/d/test_openfile.txt");

//    structT();
//    unionT();


    //-------------------------------------------------

    int i = 0;
    int f = 0;
    int k = 0;
    k = 2 + i, f + 4;
    printf("k:%d\n", k);
    //-------------------------------------------------
    char ch = 'c';
    printf("c:%c\n", ch >= 'a' && ch <= 'z' ? ch - 32 + 1 : ch);
    //-------------------------------------------------
    double x, y;
    x = 2;
    y = x + 2 / 3;
    printf("y:%f\n", y);
    //-------------------------------------------------
    static char xx[] = "12345";
    char yy[] = {'1', '2', '3', '4', '5'};
    printf("xx:%d yy:%d\n", sizeof(xx), sizeof(yy));
    //-------------------------------------------------
    char a[30] = "myfirstschoolday", *p;
    p = a;
    p += 7;
    printf("%c\n", *p);
    //-------------------------------------------------
//    int gama = 0;
//    while (gama = 2) {
//
//    }
    //-------------------------------------------------

    testStatic();
    testStatic();

    //-------------------------------------------------
    int haha = 4;
    int heihei = 5;
    int ret = 3;
    ret *=haha + heihei;
    printf("%d\n", ret);


    //-------------------------------------------------
}

void testStatic() {
    static int haha = 0;
    printf("haha1:%d\n", haha);
    haha = 1;
    printf("haha2:%d\n", haha);

}

//数据类型
void defineDataType() {

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


}


// 控制流程
void flowControl() {

}

// 函数
void function() {
    int a = 1;
    int b = 2;
    funPoint(&a, &b);
    printf("function a=%d,b=%d\n", a, b);
}

void funPoint(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


// 数组和指针
void arrayPoint() {
    int arr[] = {1, 2, 3};
    int arr2[3] = {1, 2, 3, 4};

    printIntArr(arr, sizeof(arr) / sizeof(arr[0]));
    printIntArr(arr2, sizeof(arr2) / sizeof(arr2[0]));

    int *point = arr;
    int *point2 = arr;

    printIntArr(point, sizeof(arr) / sizeof(arr[0]));
    printIntArr(point2, sizeof(arr2) / sizeof(arr2[0]));

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