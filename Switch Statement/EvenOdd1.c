// Prinf Even or Odd
#include <stdio.h>

int main()
{
    int n;
    printf("Enter no.: ");
    scanf("%d", &n);

    switch (n % 2)
    {
    case 0:
        printf("Even");
        break;

    default:
        printf("Odd");
    }
    return 0;
}