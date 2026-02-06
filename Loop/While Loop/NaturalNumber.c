// print natural number 1 to n

#include <stdio.h>

int main()
{
    int n;
    printf("Enter limit: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}