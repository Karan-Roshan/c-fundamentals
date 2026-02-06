// Check whether a alphabet is vowels or not

#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter any alphabet: ");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || 
    alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}