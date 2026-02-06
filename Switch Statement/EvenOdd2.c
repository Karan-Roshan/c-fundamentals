#include <stdio.h>

int main()
{
    char alphabet;
    printf("Enter alphabet: ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Vowel");
        break;

    default:
        printf("Consonant");
    }
    return 0;
}