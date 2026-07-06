/**
 * @file pointer_sum.c
 * @brief Demonstrates addition of two numbers using pointers.
 *
 * This program uses pointer variables to access the values of two
 * integers and computes their sum using dereferencing.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Declares two integers and pointer variables pointing to them.
 * The values are accessed using dereferencing and added together.
 *
 * @return 0 on successful execution
 */
int main()
{
    /** Pointer variables */
    int *a, *b;

    /** Integer variables */
    int x = 32, y = 54, sum = 0;

    /** Assign addresses to pointers */
    a = &x;
    b = &y;

    /** Add values using dereferencing */
    sum = *a + *b;

    printf("Sum of two numbers = %d\n", sum);

    return 0;
}