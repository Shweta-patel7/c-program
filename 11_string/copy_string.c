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
void copystring(char s1[], char s2[])
{
    /** Character arrays for the original and copied strings. */
    

    /** Loop counter. */
    int i;

    /**
     * @brief Copy each character from the source string
     * to the destination string.
     */
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }

    /** Add the null terminator to complete the copied string. */
    s2[i] = '\0';

}

int main()
{
    char name[100], copy[100];
    printf("Enter string : ");
    gets(name);

    copystring(name, copy);

    printf("copied string %s\n", copy);
    
}