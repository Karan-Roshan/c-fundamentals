// print all lower case of a alphabet

#include <stdio.h>

int main()
{
    char ch = 'a';

    while (ch <= 'z')
    {
        printf("%c ", ch);
        ch++;
    }
    return 0;
}