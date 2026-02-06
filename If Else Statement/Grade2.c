// Determining Grade based on Percentage - Method 2

#include <stdio.h>
int main()
{
    float per;
    printf("Enter your Percentage: ");
    scanf("%f", &per);

    if (per >= 91 && per <= 100)
    {
        printf("Grade A");
    }
    else if (per >= 71 && per <= 90)
    {
        printf("Grade B");
    }
    else if (per >= 51 && per <= 70)
    {
        printf("Grade C");
    }
    else if (per >= 31 && per <= 50)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}