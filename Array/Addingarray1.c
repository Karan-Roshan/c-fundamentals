#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the arrays: \n");
    scanf("%d", &size);

    int arr1[size], arr2[size], result[size];

    printf("Enter elements of the first array: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr1[i]);

    printf("Enter elements of the second array: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr2[i]);

    printf("Sum of the arrays: \n");
    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[1];
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
