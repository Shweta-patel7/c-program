/**
 * @file first_non_repeated_character.c
 * @brief Finds the first non-repeated character in a string.
 *
 * This program reads a string from the user and finds the first
 * character that appears only once in the string using a frequency
 * counting array.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * The function counts the frequency of each character in the string
 * and then searches for the first character whose frequency is one.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char s[200];
    int count[256] = {0};
    int i;

    /**
     * @brief Read string from the user.
     */
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    /* Remove newline character added by fgets() */
    s[strcspn(s, "\n")] = '\0';

    /**
     * @brief Count frequency of each character.
     *
     * The ASCII value of each character is used as an index
     * in the count array.
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        count[(unsigned char)s[i]]++;
    }

    /**
     * @brief Find the first character with frequency equal to one.
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        if (count[(unsigned char)s[i]] == 1)
        {
            printf("First non-repeated character: %c\n", s[i]);
            return 0;
        }
    }

    printf("No non-repeated character found\n");

    return 0;
}