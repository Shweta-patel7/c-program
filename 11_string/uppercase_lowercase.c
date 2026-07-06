/**
 * @file string_case_conversion.c
 * @brief Converts uppercase letters to lowercase and lowercase letters to uppercase.
 *
 * This program reads a string from the user, first converts all uppercase
 * letters to lowercase, displays the result, and then converts all lowercase
 * letters to uppercase and displays the final result.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string, converts uppercase letters to lowercase,
 * prints the result, then converts lowercase letters to uppercase
 * and prints the final result.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i;
    char s1[100];

    printf("Enter string: ");
    gets(s1);

    /** Convert uppercase letters to lowercase */
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            // add 32 becouse ASSCII value of A = 65 and a = 97 different is 32
            s1[i] = s1[i] + 32;
        }
    }

    printf("Uppercase to lowercase: %s\n", s1);

    /** Convert lowercase letters to uppercase */
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
    }

    printf("Lowercase to uppercase: %s\n", s1);

    return 0;
}