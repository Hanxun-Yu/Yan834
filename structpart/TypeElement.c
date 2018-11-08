//
// Created by yuhanxun on 2018/11/8.
//
#include <stdlib.h>
#include <stdio.h>
#include "TypeElement.h"

TypeElement* newTypeElement(int value) {
    return newTypeElement2(value,0);
}
TypeElement* newTypeElement2(int value,char* name){
    TypeElement* ret = malloc(sizeof(TypeElement));
    ret->value = value;
    ret->name = name;
    printf("newTypeElement2 val:%d name:%s\n",value,name);
    ret->getValue = _getValue;
    ret->getName = _getName;
    return ret;
}

char* _getName(TypeElement* this) {
    return this->name;
}
int _getValue(TypeElement* this) {
    return this->value;
}
