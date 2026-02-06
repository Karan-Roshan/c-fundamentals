// To check whether a character is alphabet or not

#include<stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
        printf("Character is alphabet");
    }
    else {
        printf("Character is not alphabet");
    }
}