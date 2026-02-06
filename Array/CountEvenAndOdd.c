// Count total number of even elements in array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d element: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int Even = 0;
    int Odd = 0;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            Even++;
        }
        else {
            Odd++;
        }
    }
    printf("No. of Even element in array = %d \n", Even);
    printf("No. of Odd element in array = %d \n", Odd);
    return 0;
}