// input angle of triangle and check whether is valid or not

#include <stdio.h>
int main()
{
    int angle1, angle2, angle3;
    printf("Enter angles of triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    int sum;
    sum = (angle1 + angle2 + angle3);

    if (sum == 180)
    {
        printf("Triangle is Valid");
    }
    else
    {
        printf("Triangle is not Valid");
    }

    return 0;
}