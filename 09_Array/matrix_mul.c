/**
 * @file matrix_multiplication.c
 * @brief Program to perform multiplication of two matrices.
 *
 * This program reads two matrices from the user, checks whether
 * matrix multiplication is possible, computes the product matrix,
 * and displays the resultant matrix.
 */

#include <stdio.h>

#define max 50

/**
 * @brief Main function of the program.
 *
 * Reads the dimensions and elements of two matrices, verifies
 * whether they are compatible for multiplication, performs
 * matrix multiplication, and prints the resultant matrix.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int a[max][max], b[max][max], product[max][max];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    int sum = 0;

    // Matrix A input
    printf("Enter number of rows and columns of Matrix A: ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Matrix B input
    printf("Enter number of rows and columns of Matrix B: ");
    scanf("%d %d", &brows, &bcolumns);

    if (acolumns != brows)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < brows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            sum = 0;
            for (k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}