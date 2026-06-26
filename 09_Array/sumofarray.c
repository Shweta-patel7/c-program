/**
 * @file row_column_sum.c
 * @brief Program to calculate the sum of each row and column of a 5×5 matrix.
 *
 * This program initializes a 5×5 matrix with predefined values,
 * calculates the sum of each row and each column, and displays
 * the results.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Initializes a 5×5 matrix, computes the sum of each row and
 * each column, and prints the corresponding totals.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int arr[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {16, 14, 2, 6, 0}
    };

    int i, j, sum = 0;

    // Row sums
    printf("Row totals:\n");
    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 5; j++)
        {
            sum += arr[i][j];
        }
        printf("Row %d = %d\n", i + 1, sum);
    }

    // Column sums
    printf("\nColumn totals:\n");
    for (j = 0; j < 5; j++)
    {
        sum = 0;
        for (i = 0; i < 5; i++)
        {
            sum += arr[i][j];
        }
        printf("Column %d = %d\n", j + 1, sum);
    }

    return 0;
}