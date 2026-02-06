// Search element from an array

#include <stdio.h>

int main()
{
    // int arr[] = {1, 3, 5, 6, 7, 3, 4, -1, -4, 5, -9, -76, 87, -98, -100};

    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d element: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    printf("Enter element to search: \n");
    scanf("%d", &num);

    if (arr[n] == num)
    {
        printf("Element Matched with array");
        break;
    }
    else
    {
        printf("Element not Matched with array");
    }
    return 0;
}