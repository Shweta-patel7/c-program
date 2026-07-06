/**
 * @file matrix_transpose.c
 * @brief Computes and displays the transpose of a matrix.
 *
 * This program reads a matrix of size r x c, computes its transpose,
 * and prints both the original and transposed matrices.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a matrix from the user, computes its transpose using row-column
 * swapping, and displays both matrices.
 *
 * @return 0 on successful execution
 */
int main()
{
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    /** Original matrix and transpose matrix */
    int a[r][c], t[c][r];

    printf("Enter matrix elements:\n");

    /**
     * @brief Input matrix elements
     */
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /**
     * @brief Compute transpose of matrix
     *
     * Swap rows and columns: t[j][i] = a[i][j]
     */
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("Matrix is:\n");

    /**
     * @brief Display original matrix
     */
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Matrix is:\n");

    /**
     * @brief Display transpose matrix
     */
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}