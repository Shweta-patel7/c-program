/**
 * @file linear_search.c
 * @brief Implements linear search in an array.
 *
 * This program searches for an element in an integer array using
 * linear search and prints its index if found.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an array from the user, takes a search element, and
 * performs linear search to find its position.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /** Input array */
    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f, found = 0;

    printf("Enter element to find: ");
    scanf("%d", &f);

    /**
     * @brief Linear search logic
     */
    for (i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            printf("%d is found at index %d\n", f, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("%d is not found\n", f);
    }

    return 0;
}