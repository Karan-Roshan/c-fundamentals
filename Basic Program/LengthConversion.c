// Convert Centimeter to Meter nad Kilometer

#include<stdio.h>

int main() {
    float cm;
    printf("Enter Length in centimeter: ");
    scanf("%f", &cm);

   float m, km;
    m=(cm/100);
    km= (cm/100000);
    printf("Length in Meter= %f m \n", m);
    printf("Length in Kilometer= %f km \n", km);
    return 0;
}