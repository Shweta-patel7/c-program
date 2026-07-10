/**
 * @file string_pointer.c
 * @brief Demonstrates string manipulation using pointers.
 *
 * This program reads a string from the user, displays each character
 * using a pointer, and converts all lowercase characters to uppercase
 * using pointer traversal.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief Main function.
 *
 * The function uses a character pointer to traverse a string,
 * display individual characters, and convert lowercase letters
 * into uppercase letters.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[100];
    char *p;

    /**
     * @brief Read string input from the user.
     */
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline character added by fgets() */
    str[strcspn(str, "\n")] = '\0';

    /**
     * @brief Initialize pointer with the address of first character.
     */
    p = str;

    printf("Original string: %s\n", str);

    /**
     * @brief Display each character using pointer traversal.
     */
    printf("Characters of string: ");

    while (*p != '\0')
    {
        printf("%c ", *p);
        p++;
    }

    /**
     * @brief Reset pointer to the beginning of the string.
     */
    p = str;

    printf("\nUppercase of string: ");

    /**
     * @brief Convert lowercase characters to uppercase.
     */
    while (*p != '\0')
    {
        *p = toupper((unsigned char)*p);
        p++;
    }

    printf("%s\n", str);

    return 0;
}