#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int length = strlen(inputString);
    int i, j;
    int isPalindrome = 1; // Flag to track palindrome status

    // Using two pointers approach to check for palindrome
    for (i = 0, j = length - 1; i < j; ++i, --j)
    {
        // Ignore non-alphabetic characters
        while (!isalpha(inputString[i]))
        {
            ++i;
            continue;
        }
        while (!isalpha(inputString[j]))
        {
            --j;
            continue;
        }

        // Convert characters to lowercase for comparison
        char char1 = tolower(inputString[i]);
        char char2 = tolower(inputString[j]);

        if (char1 != char2)
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("The entered string is a palindrome.\n");
    }
    else
    {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}
