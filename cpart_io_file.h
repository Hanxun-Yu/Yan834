//
// Created by yuhanxun on 2018/11/1.
//

#ifndef YAN834_CPART_IO_FILE_H
#define YAN834_CPART_IO_FILE_H
#include <stdio.h>


// 文件操作


void writeFileOver(char* path,char* content);
void writeFileAdd(char* path,char* content);
char* readFile(char* path);

#endif //YAN834_CPART_IO_FILE_H
