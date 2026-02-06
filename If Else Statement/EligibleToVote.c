// Eligible for vote or not
#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Eligible to vote \n");

        if (age >= 60)
        {
            printf("You are Senior Citizen \n");
        }
        else
        {
            printf("You are not a Senior Citizen \n");
        }
    }
    else
    {
        printf("Not Eligible to vote");
    }
    return 0;
}