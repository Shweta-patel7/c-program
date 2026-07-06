/**
 * @file symmetric_matrix.c
 * @brief Checks whether a matrix is symmetric.
 *
 * This program reads a square matrix, computes its transpose,
 * and checks whether the matrix is equal to its transpose.
 * If yes, the matrix is symmetric.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a matrix, computes its transpose, displays both matrices,
 * and checks whether the matrix is symmetric.
 *
 * @return 0 on successful execution
 */
int main()
{
    int r, c, i, j;
    int count = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    /** Symmetric matrix must be square */
    if (r != c)
    {
        printf("Matrix is not symmetric.\n");
        return 0;
    }

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
     */
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    printf("\nOriginal Matrix:\n");

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

    printf("\nTranspose Matrix:\n");

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

    /**
     * @brief Check symmetry condition
     *
     * A matrix is symmetric if A[i][j] == A[j][i]
     */
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != t[i][j])
            {
                count = 0;
                break;
            }
        }

        if (count == 0)
        {
            break;
        }
    }

    if (count == 1)
    {
        printf("\nMatrix is symmetric.\n");
    }
    else
    {
        printf("\nMatrix is not symmetric.\n");
    }

    return 0;
}