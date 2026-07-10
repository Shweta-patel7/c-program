/**
 * @file string_operations.c
 * @brief Demonstrates basic string operations in C.
 *
 * This program performs various string operations using standard
 * library functions:
 * - strlen()  : Finds the length of a string.
 * - strcpy()  : Copies one string into another.
 * - strcat()  : Concatenates two strings.
 * - strcmp()  : Compares two strings.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads two strings from the user and performs length calculation,
 * copying, concatenation, and comparison operations.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char s1[100], s2[200], s3[100];
    int len;
    int result;

    /**
     * @brief Input two strings from the user.
     */
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter string s2: ");
    fgets(s2, sizeof(s2), stdin);

    /* Remove newline characters added by fgets() */
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    /**
     * @brief Calculate string length.
     */
    len = strlen(s1);
    printf("Length of string: %d\n", len);

    /**
     * @brief Copy s1 into s3.
     */
    strcpy(s3, s1);
    printf("String 1 copied to string 3: %s\n", s3);

    /**
     * @brief Compare two strings.
     */
    result = strcmp(s1, s2);

    if (result == 0)
    {
        printf("String s1 and s2 are same\n");
    }
    else if (result > 0)
    {
        printf("s1 is greater than s2\n");
    }
    else
    {
        printf("s1 is less than s2\n");
    }

    /**
     * @brief Concatenate s2 at the end of s1.
     */
    strcat(s1, s2);
    printf("Joining two strings: %s\n", s1);

    return 0;
}