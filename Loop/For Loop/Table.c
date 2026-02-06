// table of n number

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter integer: ");
    scanf("%d", &n);

    int range; 
    printf("Enter range: ");
    scanf("%d", &range);

    for (i = 1; i <= range; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;
}