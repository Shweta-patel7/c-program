/**
 * @file array_of_strings.c
 * @brief Stores and displays multiple names using an array of strings.
 *
 * This program accepts the number of names from the user, stores each
 * name in a two-dimensional character array, and then displays all
 * stored names.
 */

#include <stdio.h>
#include <string.h>

/**
 * @brief Main function.
 *
 * The function reads the number of names, takes names as input using
 * fgets(), stores them in a 2D character array, and prints the stored
 * names.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int n, i;

    /**
     * @brief Read the number of names to store.
     */
    printf("Enter number of names to add in string: ");
    scanf("%d", &n);

    /**
     * @brief Two-dimensional character array to store names.
     *
     * First dimension represents the number of names.
     * Second dimension represents the maximum length of each name.
     */
    char name[n][100];

    printf("Enter names:\n");

    /* Clear newline character left by scanf() */
    getchar();

    /**
     * @brief Input names from the user.
     */
    for (i = 0; i < n; i++)
    {
        printf("Name %d: ", i + 1);

        fgets(name[i], sizeof(name[i]), stdin);

        /* Remove newline character added by fgets() */
        name[i][strcspn(name[i], "\n")] = '\0';
    }

    /**
     * @brief Display all stored names.
     */
    printf("\nStored names:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}