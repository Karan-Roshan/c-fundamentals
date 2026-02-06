// Check whether is Even or Odd

#include <stdio.h>

int main()
{
    int n;
    printf("Enter no.: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}