//
// Created by yuhanxun on 2018/11/2.
//
#include "cpart_io_file.h"

void writeFileOver(char *path, char *content) {
    //w 写入
    FILE *file = fopen(path, "w");

    printf("open file:%p\n", file);
    int count = 0;

    //写入一个字符
    count = fputc('a', file);
    printf("fputc:%d\n", count);
    fputc('\n', file);

    //写入一个字符串
    count = fputs(content, file);
    printf("fputs:%d\n", count);
    fputc('\n', file);

    //写入一个格式化字符串
    count = fprintf(file, "fprintf:%s,%d", content, 5);
    printf("fprintf:%d\n", count);
    fputc('\n', file);


    fclose(file);
}

void writeFileAdd(char *path, char *content) {
    //a 写入
    FILE *file = fopen(path, "a");

    printf("open file:%p\n", file);
    int count = 0;

    //写入一个字符
    count = fputs(content, file);
    printf("fputc:%d\n", count);
    fputc('\n', file);
    fclose(file);
}

char *readFile(char *path) {
    FILE *file = fopen(path, "r");
    printf("open file:%p\n", file);
    //fgetc
    printf("fgetc:%c\n", fgetc(file));

    //fgets
    char buff2[100];
    fgets(buff2,255,file);
    printf("fgets:%s\n",buff2 );
    fgets(buff2,255,file);
    printf("fgets:%s\n",buff2 );

    char buff[100];
    fscanf(file,"ss:%s",buff);
    //fscanf
    printf("fscanf:%s\n",buff);
    fscanf(file,"ss:%s",buff);

    fclose(file);

}