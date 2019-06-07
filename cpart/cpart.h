//
// Created by yuhanxun on 2018/11/1.
//

#ifndef YAN834_CPART_H
#define YAN834_CPART_H

#include <stdio.h>
#include "cpart.h"
#include "cpart_io_std.h"
#include "cpart_io_file.h"
#include "cpart_struct_union.h"
void cpart();

//数据类型
void defineDataType();

// 操作符合表达
// 程序结构


// 控制流程
void flowControl();

// 函数
void function();
void funPoint(int *a, int *b);
//引用传递是C++的特性,C没有
//void funReference(int &a, int &b);

// 数组和指针
void arrayPoint();

void printIntArr(int32_t *arr, int32_t size);

int binarySearch(int32_t *arr, int32_t size, int32_t key);



#endif //YAN834_CPART_H
