// Input marks of five subject . Calculat percentage and give grade

#include <stdio.h>
int main()
{
    float phy, chem, bio, maths, comp;
    printf("Enter Subject marks: ");
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &maths, &comp);

    float total;
    total = (phy + chem + bio + maths + comp);
    printf("Total marks obtain is %f \n", total);

    float per;
    per = (total*100)/500;
    printf("Percentage is %f \n", per);

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