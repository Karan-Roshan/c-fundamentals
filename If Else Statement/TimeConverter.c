// Time Converter
// Convert second into hours, minutes, seconds

#include<stdio.h>

int main() {
    int sec;
    printf("Enter seconds: ");
    scanf("%d", &sec);

    int hours, minutes, seconds;
    hours = sec / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    seconds = sec % 60;

    printf("Time: %d: %d: %d", hours, minutes, seconds);

    return 0;
}