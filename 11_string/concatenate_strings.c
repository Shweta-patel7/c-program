/**
 * @file string_concatenation.c
 * @brief Concatenates two strings without using the strcat() function.
 *
 * This program reads two strings from the user. It demonstrates
 * string concatenation using the standard library function strcat()
 * (commented out) and also performs concatenation manually by copying
 * the characters of the second string to the end of the first string.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function of the program.
 *
 * Reads two strings, calculates their lengths, concatenates the second
 * string to the first string without using strcat(), and prints the
 * concatenated string.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /** Arrays to store input strings. */
    char s1[30], s2[10];

    printf("Enter string 1 : ");
    scanf("%29s", s1);

    printf("Enter string 2 : ");
    scanf("%9s", s2);

    /** Example using strcat() (commented). */
    // strcat(s1, s2);
    // printf("Print with strcat: %s\n", s1);

    /** Variables to store string lengths and loop counter. */
    int len1, len2, i;

    /** Calculate lengths of both strings. */
    len1 = strlen(s1);
    len2 = strlen(s2);

    /**
     * @brief Copy each character of s2 to the end of s1.
     */
    for (i = 0; i < len2; i++)
    {
        s1[len1 + i] = s2[i];
    }

    /** Add null terminator to complete the concatenated string. */
    s1[len1 + len2] = '\0';

    /** Display the concatenated string. */
    printf("Print without using strcat : %s\n", s1);

    return 0;
}