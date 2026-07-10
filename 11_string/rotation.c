/**
 * @file string_rotation.c
 * @brief Checks whether two strings are rotations of each other.
 *
 * This program determines whether the second string is a rotation of
 * the first string. Two strings are rotations if the second string can
 * be obtained by shifting characters of the first string.
 *
 * Example:
 * Input  : ABCD
 *          CDAB
 * Output : Strings are rotations of each other.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads two strings, checks their lengths, creates a temporary string
 * by concatenating the first string with itself, and searches for the
 * second string inside it using strstr().
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char s1[100];
    char s2[100];
    char temp[200];

    /**
     * @brief Read two strings from the user.
     */
    printf("Enter 1 string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter 2 string: ");
    fgets(s2, sizeof(s2), stdin);

    /* Remove newline characters added by fgets() */
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    /**
     * @brief Rotated strings must have equal length.
     */
    if (strlen(s1) != strlen(s2))
    {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    /**
     * @brief Concatenate s1 with itself.
     *
     * Any rotation of s1 will appear as a substring in s1+s1.
     */
    strcpy(temp, s1);
    strcat(temp, s1);

    /**
     * @brief Check whether s2 exists in the combined string.
     */
    if (strstr(temp, s2) != NULL)
    {
        printf("The strings are rotations of each other.\n");
    }
    else
    {
        printf("The strings are not rotations of each other.\n");
    }

    return 0;
}