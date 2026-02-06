// Check whether a no. divisible by 5 & 11
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 11 == 0)
    {
        printf("No. is divisible by 5 & 11");
    }
    else
    {
        printf("No. is not divisible by 5 & 11;");
    }
    return 0;
}