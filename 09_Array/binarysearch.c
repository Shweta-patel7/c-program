/**
 * @file binary_search.c
 * @brief Implements binary search on a sorted array.
 *
 * This program searches for an element in a sorted integer array
 * using the binary search algorithm and reports its index if found.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a sorted array from the user, takes a search element,
 * and performs binary search to find its position.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, f, low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &f);

    low = 0;
    high = n - 1;

    /**
     * @brief Binary search logic
     */
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == f)
        {
            printf("%d found at index %d\n", f, mid);
            found = 1;
            break;
        }
        else if (a[mid] < f)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == 0)
    {
        printf("%d not found in the array\n", f);
    }

    return 0;
}