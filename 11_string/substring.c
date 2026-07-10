/**
 * @file find_substring.c
 * @brief Finds the position of a substring inside a string.
 *
 * This program reads a main string and a substring from the user.
 * It uses the strstr() function to search for the first occurrence
 * of the substring in the main string and displays its position.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads a string and a substring from the user, searches for the
 * substring using strstr(), and prints the index position if found.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char s[200];
    char sub[100];
    char *result;

    /**
     * @brief Read main string from user.
     */
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    /**
     * @brief Read substring to search.
     */
    printf("Enter word which needs to be found: ");
    fgets(sub, sizeof(sub), stdin);

    /* Remove newline character added by fgets() */
    sub[strcspn(sub, "\n")] = '\0';

    /**
     * @brief Search for substring.
     *
     * strstr() returns a pointer to the first occurrence of sub
     * in s. If the substring is not present, it returns NULL.
     */
    result = strstr(s, sub);

    if (result != NULL)
    {
        /**
         * Pointer subtraction gives the index position of substring.
         */
        printf("Substring found at position: %ld\n", result - s);
    }
    else
    {
        printf("Substring not found.\n");
    }

    return 0;
}