/**
 * @file count_words.c
 * @brief Counts the number of words in a string.
 *
 * This program reads a string from the user and counts the number of
 * words present in it. A word is considered a sequence of characters
 * separated by spaces or newline characters.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads a string from the user, checks each character to identify the
 * beginning of a word, and displays the total word count.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char s1[100];
    int i;
    int words = 0;

    /**
     * @brief Get string input from the user.
     */
    printf("Enter string: ");
    fgets(s1, sizeof(s1), stdin);

    /* Remove newline character added by fgets() */
    s1[strcspn(s1, "\n")] = '\0';

    /**
     * @brief Count words in the string.
     *
     * A word is counted when:
     * - It is the first character and not a space.
     * - The current character is not a space and the previous character
     *   is a space.
     */
    for (i = 0; s1[i] != '\0'; i++)
    {
        if ((i == 0 && s1[i] != ' ') ||
            (s1[i] != ' ' && s1[i - 1] == ' '))
        {
            words++;
        }
    }

    printf("Number of words: %d\n", words);

    return 0;
}