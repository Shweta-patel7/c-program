/**
 * @file string_length.c
 * @brief Finds the length of a string without using strlen().
 *
 * This program reads a string from the user and counts the number
 * of characters until the null character ('\0') is encountered.
 * The total number of characters is then displayed.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string, counts its length manually without using the
 * strlen() library function, and prints the length.
 *
 * @return 0 on successful execution.
 */
int length(char name[])
{
    /** Variable to store the character count. */
    int coun = 0;

    /** Loop counter. */
    int i;

    /** Character array to store the input string. */

    /**
     * @brief Count the number of characters in the string.
     */
    for (i = 0; name[i] != '\0'; i++)
    {
        coun++;
    }

    return coun;
}

int main()
{
    char name[40];
    int l;

    printf("Enter string : ");
    gets(name);

    l = length(name);
    printf("number of characters in a string = %d\n", l);

    return 0;

}