#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LENGTH 50

// Structure to hold student information
struct Student {
    char name[MAX_NAME_LENGTH];
    int grade;
};

// Function to input student names and grades into arrays
int inputStudents(struct Student students[], int grades[], int maxStudents) {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    if (numStudents <= 0 || numStudents > maxStudents) {
        printf("Invalid number of students.\n");
        return 0;
    }

    for (int i = 0; i < numStudents; ++i) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter grade of student %d: ", i + 1);
        scanf("%d", &grades[i]);

        // Store grade in the struct
        students[i].grade = grades[i];
    }

    return numStudents;
}

// Function to calculate the average grade of all students
float calculateAverage(int grades[], int numStudents) {
    int total = 0;

    for (int i = 0; i < numStudents; ++i) {
        total += grades[i];
    }

    if (numStudents > 0) {
        return (float)total / numStudents;
    } else {
        return 0;
    }
}

// Function to display students who scored above the average grade
void displayAboveAverage(struct Student students[], int grades[], int numStudents, float average) {
    printf("\nStudents who scored above the average grade (%.2f):\n", average);
    for (int i = 0; i < numStudents; ++i) {
        if (grades[i] > average) {
            printf("%s scored %d\n", students[i].name, grades[i]);
        }
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int grades[MAX_STUDENTS];
    int numStudents;
    float average;

    // Input student information
    numStudents = inputStudents(students, grades, MAX_STUDENTS);

    if (numStudents > 0) {
        // Calculate average grade
        average = calculateAverage(grades, numStudents);
        printf("\nAverage grade: %.2f\n", average);

        // Display students who scored above average
        displayAboveAverage(students, grades, numStudents, average);
    }

    return 0;
}
