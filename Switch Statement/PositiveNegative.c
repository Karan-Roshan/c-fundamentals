#include <stdio.h>
int main()
{
    int n;
    printf("Enter no.: ");
    scanf("%d", &n);

    switch (n>0)
    {
    case 1:
        printf("Positive number");
        break;
        
    case 0:
        switch (n<0)
        {
        case 1:
            printf("Negative Number");
            break;

        case 0:
            printf("Equal to zero(0)");
            break;
        }

    
    }
} 