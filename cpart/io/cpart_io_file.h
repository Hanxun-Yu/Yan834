//
// Created by yuhanxun on 2018/11/1.
//

#ifndef YAN834_CPART_IO_FILE_H
#define YAN834_CPART_IO_FILE_H
#include <stdio.h>

// 文件操作
/**
 * 文件写入 覆盖重写
 * @param path
 * @param content
 */
void writeFileOver(char* path,char* content);

/**
 * 文件写入 追加
 * @param path
 * @param content
 */
void writeFileAdd(char* path,char* content);

/**
 * 文件读取
 * @param path
 * @return
 */
char* readFile(char* path);

#endif //YAN834_CPART_IO_FILE_H
