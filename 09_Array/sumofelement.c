/**
 * @file sum_array.c
 * @brief Program to calculate the sum of elements in an array.
 *
 * This program initializes an array of integers, computes the
 * sum of all its elements, and displays the result.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Initializes an integer array, calculates the sum of its
 * elements using a loop, and prints the total sum.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int i, sum = 0, avg = 0;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (i = 0; i < 9; i++)
    {
        sum = sum + a[i];
        avg = sum / 9;
    }

    printf("Sum of elements = %d\n", sum);
    printf("average of element = %d\n", avg);

    return 0;
}