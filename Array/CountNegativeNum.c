// Count the negative no. in array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    printf("Enter %d element: ", n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    printf("No. of negative number in array is %d", count);
    return 0;
}

// 3 4 -1 -4 5 -9 -76 87 -98 -100