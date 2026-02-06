// natural number

#include <stdio.h>

int main()
{
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        printf("%d \n", i);
    }
return 0;
}