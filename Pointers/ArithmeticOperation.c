// arithmetic operation using pointers

#include<stdio.h>

int main() {
    int n1, n2, ptr1, ptr2;
    printf("Enter number1(n1) & number2 (n2): ");
    scanf("%d %d", &n1, &n2);

    ptr1=&n1;
    ptr2=&n2;

    int sum = (*ptr1) + *ptr2;

    printf("Sum=%d", sum);

    return 0;
}