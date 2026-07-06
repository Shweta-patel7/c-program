/**
 * @file palindrome_string.c
 * @brief Checks whether a given string is a palindrome.
 *
 * This program reads a string, creates its reversed version, and compares
 * it with the original string to determine whether it is a palindrome.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string from the user, reverses it, and compares it with the
 * original string to check if it is a palindrome.
 *
 * @return 0 on successful execution
 */
int main()
{
    int i, l, flag = 0;
    char s1[100], s2[100], temp;

    printf("Enter string: ");
    gets(s1);

    /**
     * @brief Copy original string into another array
     */
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }

    l = strlen(s1);

    /**
     * @brief Reverse the original string
     */
    for (i = 0; i < l / 2; i++)
    {
        temp = s1[i];
        s1[i] = s1[l - 1 - i];
        s1[l - 1 - i] = temp;
    }

    /**
     * @brief Compare original and reversed string
     */
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("String is not palindrome\n");
    }
    else
    {
        printf("String is palindrome\n");
    }

    return 0;
}