#include <stdio.h>

int main()
{
    int i,j;
    int a1[3];
    for (int i = 1; i <= 3; i++)
    {
        printf("array 1: %d \n", i++);
        scanf("%d", &a1[i]);
    }

    int a2[3];
    for (int j = 1; j <= 3; j++)
    {
        printf("array 2: %d \n", j++);
        scanf("%d", &a2[j]);
    }

    int a3[3];
    for (int k = 1; k <= 3; k++)
    {
        a3[k] = a1[i] + a2[j];
        int sum= a1[1]  + a2[2];
        scanf("%d", &sum);
        printf("a3= %d \n", a3[k]);
    }
    return 0;
}