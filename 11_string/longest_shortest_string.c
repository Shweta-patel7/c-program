/**
 * @file longest_shortest_string.c
 * @brief Finds the longest and shortest string from a list of strings.
 *
 * This program accepts multiple strings from the user, compares their
 * lengths, and displays the string with the maximum and minimum length.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads the number of strings, stores them in a two-dimensional
 * character array, finds the longest and shortest strings using
 * string length comparison, and displays the results.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int n;
    int i;

    /**
     * @brief Read number of strings from the user.
     */
    printf("Enter number of strings: ");
    scanf("%d", &n);

    /**
     * @brief Array of strings.
     *
     * Stores n strings, each having a maximum length of 99 characters
     * plus the null terminator.
     */
    char str[n][100];

    int longest = 0;
    int shortest = 0;

    /**
     * @brief Input strings from the user.
     */
    printf("Enter %d strings:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%99s", str[i]);
    }

    /**
     * @brief Find longest and shortest strings.
     *
     * Compares the length of each string with the current longest
     * and shortest strings and updates their indexes accordingly.
     */
    for (i = 1; i < n; i++)
    {
        if (strlen(str[i]) > strlen(str[longest]))
        {
            longest = i;
        }

        if (strlen(str[i]) < strlen(str[shortest]))
        {
            shortest = i;
        }
    }

    /**
     * @brief Display results.
     */
    printf("\nLongest string: %s", str[longest]);
    printf("\nLength: %zu", strlen(str[longest]));

    printf("\n\nShortest string: %s", str[shortest]);
    printf("\nLength: %zu\n", strlen(str[shortest]));

    return 0;
}