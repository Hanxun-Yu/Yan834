//
// Created by yuhanxun on 2018/11/6.
//

#ifndef YAN834_TYPEELEMENT_H
#define YAN834_TYPEELEMENT_H
typedef struct Data Data;

struct Data {
    char* name;
    int value;
//    char* (*getName)(Data* this);
//    int (*getValue)(Data* this);
};

//Data* newTypeElement(int value);
//Data* newTypeElement2(int value,char* name);
//char* _getName(Data* this);
//int _getValue(Data* this);

#endif //YAN834_TYPEELEMENT_H
