/**
 * @file dynamic_matrix_multiplication.c
 * @brief Performs multiplication of two dynamically allocated matrices.
 *
 * This program dynamically allocates memory for two input matrices,
 * checks whether matrix multiplication is possible, accepts matrix
 * elements from the user, and calculates the product of the two matrices.
 *
 * The resulting matrix is also dynamically allocated. Finally, all
 * dynamically allocated memory is released using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for two matrices and their result matrix.
 * The program checks the matrix multiplication condition, reads matrix
 * elements, performs multiplication, displays all matrices, and releases
 * dynamically allocated memory.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Number of rows in matrix 1.
     */
    int r1;

    /**
     * @brief Number of rows in matrix 2.
     */
    int r2;

    /**
     * @brief Number of columns in matrix 1.
     */
    int c1;

    /**
     * @brief Number of columns in matrix 2.
     */
    int c2;

    /**
     * @brief Double pointer for dynamically allocated matrix 1.
     */
    int **matrix1;

    /**
     * @brief Double pointer for dynamically allocated matrix 2.
     */
    int **matrix2;

    /**
     * @brief Double pointer for dynamically allocated result matrix.
     */
    int **matrix3;

    /**
     * @brief Loop counters for rows and columns.
     */
    int i, j;

    /**
     * @brief Stores the calculated value of each result matrix element.
     */
    int sum = 0;

    /**
     * Read dimensions of matrix 1.
     */
    printf("enter number of row in matrix 1 : ");
    scanf("%d", &r1);

    printf("enter number of column in matrix 1 : ");
    scanf("%d", &c1);

    /**
     * Read dimensions of matrix 2.
     */
    printf("enter number of row in matrix 2 : ");
    scanf("%d", &r2);

    printf("enter number of column in matrix 2 : ");
    scanf("%d", &c2);

    /**
     * Matrix multiplication is possible only when the number of
     * columns in matrix 1 is equal to the number of rows in matrix 2.
     */
    if (c1 != r2)
    {
        printf("matrix can not able to multiply");
        return 0;
    }

    /**
     * Allocate memory for the row pointers of matrix 1.
     */
    matrix1 = (int **)malloc(sizeof(int *) * r1);

    /**
     * Allocate memory for each row of matrix 1.
     */
    for (i = 0; i < r1; i++)
    {
        matrix1[i] = (int *)malloc(sizeof(int) * c1);
    }

    /**
     * Read elements of matrix 1.
     */
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("entre valus for matrix 1 %d %d: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    /**
     * Display matrix 1.
     */
    printf("\nmatrix 1 \n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", matrix1[i][j]);
        }

        printf("\n");
    }

    /**
     * Allocate memory for the row pointers of matrix 2.
     */
    matrix2 = (int **)malloc(sizeof(int *) * r2);

    /**
     * Allocate memory for each row of matrix 2.
     */
    for (i = 0; i < r2; i++)
    {
        matrix2[i] = (int *)malloc(sizeof(int) * c2);
    }

    /**
     * Read elements of matrix 2.
     */
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("entre valus for matrix 1 %d %d: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    /**
     * Display matrix 2.
     */
    printf("\nmatrix 2 \n");

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", matrix2[i][j]);
        }

        printf("\n");
    }

    /**
     * Allocate memory for the row pointers of the result matrix.
     *
     * The result matrix has r1 rows and c2 columns.
     */
    matrix3 = (int **)malloc(sizeof(int *) * r1);

    /**
     * Allocate memory for each row of the result matrix.
     */
    for (i = 0; i < r1; i++)
    {
        matrix3[i] = (int *)malloc(sizeof(int) * c2);
    }

    /**
     * Perform matrix multiplication.
     *
     * Each element of matrix3 is calculated as:
     *
     * matrix3[i][j] = sum of matrix1[i][k] * matrix2[k][j]
     */
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            sum = 0;

            for (int k = 0; k < c1; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }

            matrix3[i][j] = sum;
        }
    }

    /**
     * Display the result matrix.
     */
    printf("\nmatrix 3 is multiply of 2 matrix \n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", matrix3[i][j]);
        }

        printf("\n");
    }

    printf("\n");

    /**
     * Free memory allocated for matrix 1.
     */
    for (i = 0; i < r1; i++)
    {
        free(matrix1[i]);
    }

    free(matrix1);

    /**
     * Free memory allocated for matrix 2.
     *
     * Matrix 2 contains r2 rows, so the loop must run from
     * 0 to r2 - 1.
     */
    for (i = 0; i < r2; i++)
    {
        free(matrix2[i]);
    }

    free(matrix2);

    /**
     * Free memory allocated for matrix 3.
     */
    for (i = 0; i < r1; i++)
    {
        free(matrix3[i]);
    }

    free(matrix3);

    return 0;
}