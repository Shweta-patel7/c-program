/**
 * @file string_reverse.c
 * @brief Reverses a given string.
 *
 * This program reads a string, calculates its length, and reverses it
 * in-place using the swapping technique.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string from the user, computes its length, reverses it using
 * swapping, and displays both original and reversed strings.
 *
 * @return 0 on successful execution
 */
int main()
{
    int i, l = 0;
    char s[10], temp;

    printf("Enter a string: ");
    gets(s);

    printf("Before reversing string: %s\n", s);

    /**
     * @brief Calculate length of string
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        l++;
    }

    /**
     * @brief Reverse string using swapping
     */
    for (i = 0; i < l / 2; i++)
    {
        temp = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = temp;
    }

    printf("Reverse of string: %s\n", s);

    return 0;
}