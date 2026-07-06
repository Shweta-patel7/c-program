/**
 * @file matrix_input_output.c
 * @brief Demonstrates input and output of a 2D matrix in C.
 *
 * This program reads a matrix from the user and displays it using
 * nested loops.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a 2D matrix of size r x c from the user and prints it
 * in matrix format.
 *
 * @return 0 on successful execution
 */
int main()
{
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    /** 2D matrix */
    int a[r][c];

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

    printf("Matrix is:\n");

    /**
     * @brief Display matrix elements
     */
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}