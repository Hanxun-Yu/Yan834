//
// Created by yuhanxun on 2018/11/1.
//

#ifndef YAN834_CPART_STRUCT_UNION_H
#define YAN834_CPART_STRUCT_UNION_H
// 结构和共用体
typedef struct People People;
struct People {
  char* name;
  int age;
};
void structT();
void unionT();
void printPeopleType(People people);
void printPeopleTypePoint(People* people);
void printPeopleStuct(struct People people);
void printPeopleStuctPoint(struct People* people);


union Common{
    int one;
    int two;
    char str[40];
};

#endif //YAN834_CPART_STRUCT_UNION_H
