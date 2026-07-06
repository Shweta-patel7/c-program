/**
 * @file min_max_array.c
 * @brief Finds the largest and smallest elements in an array.
 *
 * This program reads an integer array from the user and determines
 * both the maximum (largest) and minimum (smallest) values.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads array elements from the user, then finds and prints the
 * largest and smallest elements using comparison logic.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /** Integer array */
    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    /** Initialize largest and smallest with first element */
    int largest = a[0];
    int smallest = a[0];

    /**
     * @brief Find largest and smallest elements
     */
    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }

        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}