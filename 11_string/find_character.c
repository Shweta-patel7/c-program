/**
 * @file find_character.c
 * @brief Finds the position of a character in a string.
 *
 * This program reads a string and a character from the user.
 * It uses the strchr() library function to search for the first
 * occurrence of the given character in the string.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Takes a string and a character as input, searches for the character
 * using strchr(), and displays its position if found.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char s[200];
    char ch;
    char *result;

    /**
     * @brief Read string input from the user.
     */
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    /* Remove newline character added by fgets() */
    s[strcspn(s, "\n")] = '\0';

    /**
     * @brief Read character to search.
     */
    printf("Character to be found: ");
    scanf("%c", &ch);

    /**
     * @brief Find the first occurrence of character in string.
     *
     * strchr() returns a pointer to the first occurrence of the
     * character, or NULL if the character is not present.
     */
    result = strchr(s, ch);

    if (result != NULL)
    {
        /**
         * Pointer subtraction gives the index position of the character.
         */
        printf("Character %c is found at position: %ld\n", ch, result - s);
    }
    else
    {
        printf("Character %c is not found\n", ch);
    }

    return 0;
}