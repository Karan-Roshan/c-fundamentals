// Compute sum of first n natural number

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter limit: "); //n=limit
    scanf("%d", &n);

    int sum = 0;

    for (i = 0; i <= n; i = i + 1)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}