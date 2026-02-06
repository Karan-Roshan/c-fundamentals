// Time zone converter

#include <stdio.h>

int main()
{
    float current_time, offset, converted_time;

    printf("Enter the current time (in hours): ");
    scanf("%f", &current_time);

    printf("Enter the time zone offset (in hours): ");
    scanf("%f", &offset);

    converted_time = current_time + offset;

    if (converted_time >= 24)
    {
        converted_time -= 24;
    }
    else if (converted_time < 0)
    {
        converted_time += 24;
    }

    printf("The converted time in the target time zone is: %f hours \n", converted_time);

    return 0;
}
