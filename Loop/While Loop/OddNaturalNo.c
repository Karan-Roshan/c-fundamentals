// odd natural number etween 1 to n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}