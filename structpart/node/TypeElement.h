//
// Created by yuhanxun on 2018/11/6.
//

#ifndef YAN834_TYPEELEMENT_H
#define YAN834_TYPEELEMENT_H
typedef struct TypeElement TypeElement;
struct TypeElement {
    char* name;
    int value;
    char* (*getName)(TypeElement* this);
    int (*getValue)(TypeElement* this);
};

TypeElement* newTypeElement(int value);
TypeElement* newTypeElement2(int value,char* name);
char* _getName(TypeElement* this);
int _getValue(TypeElement* this);

#endif //YAN834_TYPEELEMENT_H
