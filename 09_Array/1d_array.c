/**
 * @file array_multiplication.c
 * @brief Program to multiply each element of an array by 5.
 *
 * This program initializes an array of integers, multiplies each
 * element by 5, and displays the resulting values.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Initializes an integer array, multiplies each element by 5,
 * prints the results, and terminates successfully.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int i;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (i = 0; i < 9; i++)
    {
        printf("%d ", a[i] * 5);
    }

    printf("\n");

    return 0;
}