#include <stdio.h>
#include <string.h>

// create struct with personal variable
struct person
{
    char name[50];
    int cityNo;
    float salary;
} person1, person2;

int main()
{
    // assign value to name of person1
    strcpy(person1.name, "Karan Roshan");
    strcpy(person2.name, "Roshan Kumar");

    // assign values to other person1 variables
    person1.cityNo = 1984;
    person1.salary = 2500;

    person2.cityNo = 2000;
    person2.salary = 5000;

    // print struct variables
    printf("Name: %s \n", person1.name);
    printf("Citizenship No.: %d \n", person1.cityNo);
    printf("Salary: %2f \n", person1.salary);

    printf("\n");

    printf("Name: %s \n", person2.name);
    printf("Citizenship No.: %d \n", person2.cityNo);
    printf("Salary: %2f \n", person2.salary);
    return 0;
}