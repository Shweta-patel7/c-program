/**
 * @file array_copy.c
 * @brief Demonstrates copying elements from one array to another.
 *
 * This program reads an array from the user and copies its elements
 * into another array using a loop, then displays the copied array.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer array, copies its elements into another array,
 * and prints the copied array.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /** Source and destination arrays */
    int a[n], b[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /**
     * @brief Copy elements from array a to array b
     */
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    printf("Elements copied from a to b:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}