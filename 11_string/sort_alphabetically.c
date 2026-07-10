/**
 * @file sort_strings.c
 * @brief Sorts a list of strings in alphabetical order.
 *
 * This program accepts multiple strings from the user, sorts them
 * using lexicographical order with strcmp(), and displays the sorted
 * list of strings.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * Reads the number of words and stores them in a two-dimensional
 * character array. The strings are compared using strcmp() and
 * swapped using strcpy() to arrange them in ascending order.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int n;
    int i;
    int j;
    char temp[100];

    /**
     * @brief Read number of strings from the user.
     */
    printf("Enter number of words: ");
    scanf("%d", &n);

    /**
     * @brief Array of strings.
     *
     * Stores n strings, each with a maximum size of 99 characters
     * plus the null terminator.
     */
    char str[n][100];

    /* Clear newline character left by scanf() */
    getchar();

    /**
     * @brief Input strings from the user.
     */
    printf("Enter words:\n");

    for (i = 0; i < n; i++)
    {
        printf("Word %d: ", i + 1);

        fgets(str[i], sizeof(str[i]), stdin);

        /* Remove newline character added by fgets() */
        str[i][strcspn(str[i], "\n")] = '\0';
    }

    /**
     * @brief Sort strings using comparison and swapping.
     *
     * Uses strcmp() to compare two strings. If the first string is
     * greater than the second string, they are exchanged using a
     * temporary array.
     */
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    /**
     * @brief Display sorted strings.
     */
    printf("\nString after sorting:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}