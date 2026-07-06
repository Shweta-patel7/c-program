/**
 * @file array_merge.c
 * @brief Merges two arrays into a single array.
 *
 * This program reads two integer arrays from the user and merges them
 * into a third array by copying elements sequentially.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads two arrays from the user, merges them into a third array,
 * and displays the combined result.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    /** First array */
    int a[n1];

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    /** Second and merged arrays */
    int b[n2], c[n1 + n2];

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    /**
     * @brief Copy first array into merged array
     */
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    /**
     * @brief Copy second array into merged array
     */
    for (j = 0; j < n2; j++)
    {
        c[n1 + j] = b[j];
    }

    printf("Merged array:\n");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    printf("\n");

    return 0;
}