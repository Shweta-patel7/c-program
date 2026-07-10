/**
 * @file string_compression.c
 * @brief Compresses a string using run-length encoding.
 *
 * This program reads a string from the user and compresses it by
 * replacing consecutive repeated characters with the character followed
 * by the number of repetitions.
 *
 * Example:
 * Input  : aaabbc
 * Output : a3b2c1
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads a string, counts consecutive occurrences of each character,
 * and prints the compressed form of the string.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[200];
    int i, count;

    /**
     * @brief Read string from user.
     */
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline character added by fgets() */
    str[strcspn(str, "\n")] = '\0';

    printf("Compressed string: ");

    /**
     * @brief Compress consecutive repeating characters.
     *
     * The loop counts repeated characters and prints the character
     * along with its frequency.
     */
    for (i = 0; str[i] != '\0'; i++)
    {
        count = 1;

        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");

    return 0;
}