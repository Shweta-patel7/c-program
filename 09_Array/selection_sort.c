/**
 * @file selection_sort.c
 * @brief Implements Selection Sort algorithm to sort an array.
 *
 * This program sorts an integer array in ascending order using
 * the selection sort technique by repeatedly selecting the smallest
 * element and placing it at the correct position.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user, sorts it using selection sort,
 * and prints the sorted array in ascending order.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j, min, temp;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    /** Input array */
    int a[n];

    printf("Enter %d elements of array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /**
     * @brief Selection sort logic
     *
     * Finds the minimum element in the unsorted part
     * and swaps it with the first unsorted element.
     */
    for (i = 0; i < n - 1; i++)
    {
        min = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        /** Swap minimum element with current position */
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf("Sorted array in ascending order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}