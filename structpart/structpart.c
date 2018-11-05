//
// Created by yuhanxun on 2018/11/5.
//

#include <stdio.h>
#include "structpart.h"
void testLinkList() {
    LinkList* linkList = create(5);
    insert(linkList,1);
    insert(linkList,2);
    insert(linkList,3);
    insert(linkList,4);
    insert(linkList,5);

    reverse(linkList);
    printSelf(linkList);

}
void structpart() {
    testLinkList();
}

