//
// Created by yuhanxun on 2019/8/1.
//

#ifndef YAN834_COMMON_H
#define YAN834_COMMON_H

#include <stdio.h>
#include <stdarg.h>

void println(const char *cmd, ...) {
//    printf("%s %s ", __DATE__, __TIME__);
    va_list args;       //定义一个va_list类型的变量，用来储存单个参数
    va_start(args, cmd); //使args指向可变参数的第一个参数
    vprintf(cmd, args);  //必须用vprintf等带V的
    va_end(args);       //结束可变参数的获取
    printf("\n");
}

void printModuleStart(char *name) {
    println("*");
    println("**");
    println("*** Module: %s *** START ***", name);
}

void printModuleEnd(char *name) {
    println("*** Module: %s *** END ***", name);
    println("**");
    println("*");
}

#endif //YAN834_COMMON_H
