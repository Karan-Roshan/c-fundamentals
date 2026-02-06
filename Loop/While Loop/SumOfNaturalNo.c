// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    int sum = 0;

    int i = 1;

    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
    return 0;
}