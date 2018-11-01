#include <stdio.h>
void sum(int *a, int *b);

int main() {
    printf("Hello, World!\n");

    int a = 4;
    int b = 5;
    sum(&a,&b);
    printf("sum:%d",a);
    return 0;
}

void sum(int *a, int *b) {
    *a = *a+*b;
}