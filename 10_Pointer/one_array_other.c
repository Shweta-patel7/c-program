/**
 * @file array_copy_pointer.c
 * @brief Demonstrates copying an array using pointers in C.
 *
 * This program copies elements from one integer array to another
 * using pointer arithmetic and then displays the copied array.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Copies elements from array 'a' to array 'b' using pointers
 * and prints the copied array.
 *
 * @return 0 on successful execution
 */
int main()
{
    /** Source array */
    int a[] = {5, 65, 6, 53, 98, 32};

    /** Array size */
    int i, l = sizeof(a) / sizeof(a[0]);

    /** Destination array */
    int b[l];

    /** Pointers to source and destination arrays */
    int *p = a, *q = b;

    /**
     * @brief Copy elements from a to b using pointers
     */
    for (i = 0; i < l; i++)
    {
        *(q + i) = *(p + i);
    }

    printf("Copied array:\n");

    /**
     * @brief Display copied array
     */
    for (i = 0; i < l; i++)
    {
        printf("%d ", *(q + i));
    }

    printf("\n");

    return 0;
}