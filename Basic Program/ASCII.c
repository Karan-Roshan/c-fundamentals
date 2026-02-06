// ASCII value of any input by user
// ASCII (American Standard Code for Information Interchange)
#include<stdio.h>

int main() {
    char c;
    printf("Enter any characters: ");
    scanf("%c", &c);

    int asciiValue = (int) c;

    printf("size of char %c=%d", c, asciiValue);
    return 0;
}