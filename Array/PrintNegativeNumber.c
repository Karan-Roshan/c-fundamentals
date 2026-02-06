// print all negative number in array

#include <stdio.h>

int main()
{
    int arr[10] = {3, 4, -1, -4, 5, -9, -76, 87, 98, -100};

    for (int i = 0; i < 10; i++)
    {
        if ( arr[i]<0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}