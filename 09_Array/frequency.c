/**
 * @file array_frequency.c
 * @brief Calculates frequency of each element in an array.
 *
 * This program counts how many times each element appears in an array
 * and prints the frequency of each unique element.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user, calculates frequency of each element
 * using an auxiliary array, and displays the results.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /** Input array and frequency tracking array */
    int a[n], freq[n];

    printf("Enter %d elements:\n", n);

    /**
     * Initialize frequency array with -1 (unprocessed state)
     */
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    /**
     * @brief Calculate frequency of each element
     */
    for (i = 0; i < n; i++)
    {
        if (freq[i] == 0)
            continue;

        count = 1;

        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                freq[j] = 0;   // mark duplicate as counted
            }
        }

        freq[i] = count;
    }

    printf("Element Frequency\n");

    /**
     * @brief Display frequency of each unique element
     */
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d\t%d\n", a[i], freq[i]);
        }
    }

    return 0;
}