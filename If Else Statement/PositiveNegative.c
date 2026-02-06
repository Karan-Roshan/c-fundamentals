// Check whether a number is negative, positiive and equal to zero
#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive number");
    }
    else if (num < 0)
    {
        printf("Negative number");
    }
    else
    {
        printf("Equal to Zero");
    }
    return 0;
}