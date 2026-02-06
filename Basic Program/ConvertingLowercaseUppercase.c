// Converting lowercase to uppercase & vice-versa

#include <stdio.h>
#include <ctype.h>

int main()
{
    char Ch;
    printf("Enter character: ");
    scanf("%c", &Ch);

    if (Ch>='a' && Ch<='z') 
    {
        char uppercaseCh = toupper(Ch);
        printf("uppercase of %c is %c \n", Ch, uppercaseCh);
    }
else 
{
    char lowercaseCh = tolower(Ch);
printf("lowercase of %c is %c \n", Ch, lowercaseCh);
}

    return 0;
}