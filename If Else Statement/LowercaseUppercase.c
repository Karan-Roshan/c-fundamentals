// Check whether a character is uppercase or lowercase

#include<stdio.h>
int main() {
    char ch;
    printf("Enter alphabet: ");
    scanf("%c", &ch);

    if (ch>='A' && ch<='Z') {
        printf("Uppercase");
    }
    else if (ch>='a' && ch<='z') {
        printf("Lowercase");
    }
    else {
        printf("Error! Enter Correct Alphabet");
    }
    return 0;
}