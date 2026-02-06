// taking integers values from the user and perform arithmetic operations

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);

    int sum, sub, mult, div, mod;
    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;
    mod = a % b;

    printf("Sum = %d \n", sum);
    printf("sub = %d \n", sub);
    printf("mult = %d \n", mult);
    printf("div = %d \n", div);
    printf("mod = %d \n", mod);
    return 0;
}