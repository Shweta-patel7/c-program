/**
 * @file string_copy.c
 * @brief Copies one string into another without using strcpy().
 *
 * This program reads a string from the user and copies it
 * character by character into another array. The copied string
 * is then displayed on the screen.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string, copies it into another character array
 * without using the strcpy() library function, and prints
 * the copied string.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /** Character arrays for the original and copied strings. */
    char name[40], copy[40];

    /** Loop counter. */
    int i;

    printf("Enter string : ");
    gets(name);

    /**
     * @brief Copy each character from the source string
     * to the destination string.
     */
    for (i = 0; name[i] != '\0'; i++)
    {
        copy[i] = name[i];
    }

    /** Add the null terminator to complete the copied string. */
    copy[i] = '\0';

    /** Display the copied string. */
    printf("Copy of string : %s", copy);

    return 0;
}