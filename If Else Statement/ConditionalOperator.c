// Find the numuber is even or odd
// numbers using conditionl operator

#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    (a%2==0) ? printf("Even") : printf("Odd");

    return 0;
}