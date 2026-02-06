// copy all elements of one array to another

#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter size of an array: ");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];

    printf("Enter %d element in arr1: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\n");

    printf("Element of arr1:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Element of arr2:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}