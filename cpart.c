//
// Created by yuhanxun on 2018/11/1.
//

#include "cpart.h"

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
    printf("int:%\n", sizeof(intV));
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

}

// 数组和指针
void arrayPoint() {

}