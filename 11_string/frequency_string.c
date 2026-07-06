/**
 * @file character_frequency.c
 * @brief Counts the frequency of each character in a string.
 *
 * This program reads a string from the user and counts how many times
 * each character appears. Duplicate characters are marked with '*'
 * so they are not counted again.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string, counts the frequency of each character,
 * and prints the result.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i, j, count;
    char s[100];

    printf("Enter a string: ");
    gets(s);

    /**
     * @brief Traverse each character of the string.
     */
    for (i = 0; s[i] != '\0'; i++)
    {
        /**
         * @brief Skip characters already counted.
         */
        if (s[i] == '*')
            continue;

        count = 1;

        /**
         * @brief Search for duplicate characters.
         */
        for (j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] == s[j])
            {
                count++;

                /**
                 * @brief Mark duplicate character as visited.
                 */
                s[j] = '*';
            }
        }

        /**
         * @brief Display character and its frequency.
         */
        if (s[i] != '*')
        {
            printf("%c = %d\n", s[i], count);
        }
    }

    return 0;
}