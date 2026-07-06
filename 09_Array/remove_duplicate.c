/**
 * @file remove_duplicates.c
 * @brief Removes duplicate elements from an array.
 *
 * This program reads an integer array and removes duplicate elements
 * by shifting elements to the left when duplicates are found.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user, removes duplicate elements in-place,
 * and prints the resulting array without duplicates.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j, k;

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
     * @brief Remove duplicate elements
     *
     * If duplicate is found, shift elements left and reduce size.
     */
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;   // reduce array size
                j--;   // recheck shifted element
            }
        }
    }

    printf("Array after removing duplicates:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}