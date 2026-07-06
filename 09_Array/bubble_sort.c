/**
 * @file bubble_sort.c
 * @brief Implements Bubble Sort algorithm to sort an array.
 *
 * This program sorts an integer array in ascending order using
 * the Bubble Sort technique by repeatedly swapping adjacent elements.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user, sorts it using Bubble Sort,
 * and displays the sorted array.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /**
     * @brief Bubble sort logic
     *
     * Repeatedly compares adjacent elements and swaps them
     * if they are in the wrong order.
     */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}