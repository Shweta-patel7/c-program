/**
 * @file matrix_diagonal_sum.c
 * @brief Calculates primary and secondary diagonal sums of a square matrix.
 *
 * This program reads a square matrix and computes the sum of:
 * - Primary diagonal (top-left to bottom-right)
 * - Secondary diagonal (top-right to bottom-left)
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an n x n matrix, prints it, and calculates the sums of both
 * primary and secondary diagonals.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j;
    int primary = 0, secondary = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    /** Square matrix */
    int a[n][n];

    printf("Enter matrix elements:\n");

    /**
     * @brief Input matrix elements
     */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");

    /**
     * @brief Display matrix
     */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /**
     * @brief Calculate diagonal sums
     */
    for (i = 0; i < n; i++)
    {
        primary += a[i][i];
        secondary += a[i][n - 1 - i];
    }

    printf("Sum of primary diagonal = %d\n", primary);
    printf("Sum of secondary diagonal = %d\n", secondary);

    return 0;
}