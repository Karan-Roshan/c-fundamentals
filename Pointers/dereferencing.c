#include<stdio.h>

int main() {
    int x=20;
    int *ptr;
    ptr=&x;
    int deref=*ptr;
    printf("%d", deref);
    return 0;
}