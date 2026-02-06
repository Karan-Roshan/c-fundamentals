// Sum of even numbers

#include <stdio.h>

int main()
{
    int num, count = 1, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &num);

    while (count <= num)
    {
        if (count % 2 == 0)
        {
            sum = sum + count;
        }
        count++;
    }
    printf("Sum of Even numbers from 1 to %d is %d\n", num, sum);
    return 0;
}