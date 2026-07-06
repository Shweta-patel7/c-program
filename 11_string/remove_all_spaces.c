/**
 * @file remove_spaces.c
 * @brief Removes all spaces from a string.
 *
 * This program reads a string from the user and removes all space
 * characters by shifting the remaining characters to the left.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string, removes all spaces, and prints the modified string.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i, j = 0;
    char s[100];

    printf("Enter a string: ");
    gets(s);

    /**
     * @brief Traverse the string and copy only non-space characters.
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            s[j] = s[i];
            j++;
        }
    }

    /**
     * @brief Add null character to terminate the modified string.
     */
    s[j] = '\0';

    printf("After removing spaces: %s\n", s);

    return 0;
}