/**
 * @file second_largest.c
 * @brief Finds the second largest element in an array.
 *
 * This program sorts the array in ascending order using a simple
 * sorting technique and then prints the second largest element.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user, sorts it in ascending order,
 * and prints the second largest element.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j, temp;

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
     * @brief Sorting logic (ascending order)
     *
     * Simple comparison-based sorting.
     */
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    /**
     * @brief Second largest element
     *
     * After sorting, second largest is at index n-2.
     */
    printf("Second largest element = %d\n", a[n - 2]);

    return 0;
}