// Accept student names and their grades and store this information in an array.Calculate the average grade of all the students using a separate function. Identify and display students who scored above the average grade using another function.

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LENGTH 50

struct Student
{
    char name[MAX_NAME_LENGTH];
    int grade;
};

void calculateAverage(struct Student students[], int numStudents)
{
    int total = 0;
    float average;

    for (int i = 0; i < numStudents; ++i)
    {
        total += students[i].grade;
    }

    if (numStudents > 0)
    {
        average = (float)total / numStudents;
        printf("Average grade: %.2f\n", average);
        for (int i = 0; i < numStudents; ++i)
        {
            if (students[i].grade > average)
            {
                printf("%s scored above the average with a grade of %d\n", students[i].name, students[i].grade);
            }
        }
    }
    else
    {
        printf("No students to calculate average.\n");
    }
}

int main()
{
    struct Student students[MAX_STUDENTS];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents <= 0 || numStudents > MAX_STUDENTS)
    {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (int i = 0; i < numStudents; ++i)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter Total Marks of student %d: ", i + 1);
        scanf("%d", &students[i].grade);
    }

    calculateAverage(students, numStudents);

    return 0;
}
