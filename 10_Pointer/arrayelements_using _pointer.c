/**
 * @file array_pointer_traversal.c
 * @brief Demonstrates array traversal using pointers.
 *
 * This program uses a pointer to traverse an integer array and
 * prints all its elements without using array indexing.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Initializes an integer array and uses a pointer to iterate
 * through the array elements. The pointer is incremented to
 * access each element sequentially.
 *
 * @return 0 on successful execution
 */
int main()
{
    /** Integer array */
    int a[] = {1, 6, 3, 98, 65, 78, 67};

    /** Pointer to traverse the array */
    int *p = a;

    /** Number of elements in the array */
    int len = sizeof(a) / sizeof(a[0]);

    /**
     * @brief Traverse array using pointer arithmetic.
     */
    for (p = a; p < a + len; p++)
    {
        printf("Value of array = %d\n", *p);
    }

    return 0;
}