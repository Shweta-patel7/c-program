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
char conetstring (char s1[], char s2[])
{
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
}

int main()
{
    char str1[100], str2[50];
    printf("enter string 1 : ");
    scanf("%99s", str1);

    printf("enter string 2 : ");
    scanf("%49s", str2);

    conetstring(str1, str2);
    printf("string is comcatenate : %s\n", str1);

    return 0;

}