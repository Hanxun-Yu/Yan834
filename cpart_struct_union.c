//
// Created by yuhanxun on 2018/11/2.
//

#include <stdio.h>
#include "cpart_struct_union.h"

void structT() {
    People peopleType;
    peopleType.name = "PeterType";
    peopleType.age = 10;

    printPeopleType(peopleType);
    printPeopleTypePoint(&peopleType);

    struct People peopleStruct;
    peopleStruct.name = "PeterStruct";
    peopleStruct.age = 12;
    printPeopleStuct(peopleStruct);
    printPeopleStuctPoint(&peopleStruct);


}
void unionT() {
    union Common C;
    C.one = 1;
    printf("one:%d\n",C.one);

    C.two = 2;
    printf("two:%d\n",C.two);

    C.str[0] = 'A';

    C.str[1] = 'B';
    C.str[2] = 'C';

    printf("one:%d\n",C.one);
    printf("two:%d\n",C.two);
    printf("str:%s\n",C.str);

}
void printPeopleType(People people){
    printf("printPeopleType name:%s",people.name);
    printf("\n");
    printf("printPeopleType age:%d",people.age);
    printf("\n");
}
void printPeopleTypePoint(People* people){
    printf("printPeopleTypePoint name:%s",people->name);
    printf("\n");
    printf("printPeopleTypePoint age:%d",people->age);
    printf("\n");
}
void printPeopleStuct(struct People people){
    printf("printPeopleStuct name:%s",people.name);
    printf("\n");
    printf("printPeopleStuct age:%d",people.age);
    printf("\n");
}
void printPeopleStuctPoint(struct People* people){
    printf("printPeopleStuctPoint name:%s",people->name);
    printf("\n");
    printf("printPeopleStuctPoint age:%d",people->age);
    printf("\n");
}
