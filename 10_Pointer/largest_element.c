/**
 * @file max_element_pointer.c
 * @brief Finds the largest element in an array using pointers.
 *
 * This program iterates through an integer array using pointer
 * arithmetic and finds the maximum (largest) value.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Initializes an array, uses a pointer to traverse it, and
 * determines the largest element using comparison logic.
 *
 * @return 0 on successful execution
 */
int main()
{
    /** Integer array */
    int a[] = {45, 9, 63, 6, 65, 98};

    /** Pointer to array */
    int *p = a;

    /** Number of elements in array */
    int l = sizeof(a) / sizeof(a[0]);

    /** Loop variable */
    int i;

    /** Variable to store maximum value */
    int max = *p;

    /**
     * @brief Find largest element using pointer traversal.
     */
    for (i = 0; i < l; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    printf("Largest value is %d\n", max);

    return 0;
}