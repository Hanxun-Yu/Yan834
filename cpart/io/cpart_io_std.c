//
// Created by yuhanxun on 2018/11/2.
//
#include "cpart_io_std.h"

void getputChar() {
    //getchar()
    //putchar()
    //换行也算在内了,所以只能输入5个
    printf("Please input 10 characters!\n");
    for (int i = 0; i < 10; i++) {
        char c = getchar();
        putchar(c);
    }
    printf("End!\n");
}

void getsputs() {
    //gets()
    //puts()
    printf("Please input 1 line characters!\n");
    char str[100];
    gets(str);
    printf("Your enter:");
    puts(str);
}

void scanfT() {
    char str[100];
    int i;
    printf("Enter a value twice:");
    scanf("%s %d", str, &i);
    printf("Your enter:%s %d\n", str, i);
}


void stdIn() {
    int i = 3;
    while (i-- > 0) {
        getsputs();
    }
//        getputChar();
//    getsputs();
//    scanfT();

}

void stdOut() {

}