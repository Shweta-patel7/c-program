#include <stdio.h>

#define max 50

/**
 * @brief Adds two matrices and displays the result.
 *
 * This program:
 * - Reads the dimensions of two matrices.
 * - Accepts the elements of Matrix A and Matrix B.
 * - Computes the sum of the two matrices.
 * - Displays Matrix A, Matrix B, and the resultant matrix.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int a[max][max], b[max][max], sum[max][max];
    int rows, columns;
    int i, j;

    /* Read the dimensions of the matrices */
    printf("Enter number of rows and columns of Matrix: ");
    scanf("%d %d", &rows, &columns);

    /* Read elements of Matrix A */
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Read elements of Matrix B */
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* Add the corresponding elements of both matrices */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    /* Display Matrix A */
    printf("Matrix A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /* Display Matrix B */
    printf("Matrix B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    /* Display the sum of Matrix A and Matrix B */
    printf("Sum of two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}