// Temperature Converter

#include <stdio.h>

int main()
{
    float C;
    printf("Enter degree in Celcius: ");
    scanf("%f", &C);

    float F;
    printf("Enter degree in Fahrenheit: ");
    scanf("%f", &F);

    float f;
    f = (C * 9) / 5 + 32;

    float c;
    c = (f - 32) * 5 / 9;

    printf("Temperature in Degree Celcius = %f degree Celcius \n", f);
    printf("Temperature in Degree Fahrenheit = %f degree Fahrenheit \n", c);
    return 0;
}