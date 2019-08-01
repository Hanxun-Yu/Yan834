//
// Created by yuhanxun on 2018/11/1.
//

#ifndef YAN834_CPART_H
#define YAN834_CPART_H

#include "cpart.h"
#include "io/cpart_io_std.h"
#include "io/cpart_io_file.h"
#include "struct_union/cpart_struct_union.h"

/**
 * c语言相关入口函数
 */
void cpart();

/**
 * 基本数据类型定义及大小
 */
void defineDataType();

/**
 * 常见语法陷阱
 */
void testPrammar();

/**
 * static静态变量
 */
void testStatic();


/**
 * 控制流程if else for while
 */
//void flowControl();

/**
 * 测试 函数参数 指针
 */
void testFunPoint();

/**
 * 函数参数 指针
 */
void funPoint(int *a, int *b);

//引用传递是C++的特性,C没有
//void funReference(int &a, int &b);

/**
 * 数组和指针
 */
void arrayPoint();

/**
 * 打印int数组
 * @param arr
 * @param size
 */
void printIntArr(int *arr, int size);


/**
 * 测试二分法查找
 */
void testBinaySearch();

/**
 * 二分法查找
 * @param arr
 * @param size
 * @param key
 * @return
 */
int binarySearch(int *arr, int size, int key);


#endif //YAN834_CPART_H
