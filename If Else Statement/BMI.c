// Calculate Body mass index

#include <stdio.h>

int main()
{
    float weight, height; // weight in kilograms & height in meters
    printf("Enter weight & height resp.: ");
    scanf("%f %f", &weight, &height);

    float BMI = weight / (height * height);
    printf("BMI of the person= %f \n", BMI);

    if (BMI < 18.5)
    {
        printf("Underweight");
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("Normal Weight");
    }
    else if (BMI >= 25 && BMI <= 29.9)
    {
        printf("Overweight");
    }
    else
    {
        printf("Obese");
    }
    return 0;
}