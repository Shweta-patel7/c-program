/**
 * @file dynamic_2d_array_row_sum.c
 * @brief Dynamically allocates a 2D array and calculates the sum of each row.
 *
 * This program dynamically allocates memory for a two-dimensional integer
 * array using malloc(). It accepts the number of rows and columns from
 * the user, reads the array elements, displays the matrix, calculates
 * and displays the sum of each row, and finally releases all dynamically
 * allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates a two-dimensional integer array, accepts values
 * from the user, displays the array, calculates the sum of each row,
 * and releases the allocated memory.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Number of rows in the 2D array.
     */
    int row;

    /**
     * @brief Number of columns in the 2D array.
     */
    int col;

    /**
     * @brief Double pointer used for dynamic 2D array allocation.
     */
    int **array;

    /**
     * @brief Loop counters for rows and columns.
     */
    int i, j;

    /**
     * @brief Stores the sum of elements in the current row.
     */
    int sum = 0;

    /**
     * Read the number of rows from the user.
     */
    printf("enter number of row : ");
    scanf("%d", &row);

    /**
     * Read the number of columns from the user.
     */
    printf("enter number of columns : ");
    scanf("%d", &col);

    /**
     * Allocate memory for an array of row pointers.
     */
    array = (int **) malloc(sizeof(int *) * row);

    /**
     * Allocate memory for each row of the 2D array.
     */
    for (i = 0; i < row; i++)
    {
        array[i] = (int *) malloc(sizeof(int) * col);
    }

    /**
     * Read elements of the 2D array from the user.
     */
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("enter value for %d %d : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    /**
     * Display the elements of the 2D array.
     */
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", array[i][j]);
        }

        printf("\n");
    }

    /**
     * Calculate and display the sum of each row.
     */
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum += array[i][j];
        }

        /**
         * Display the sum of the current row.
         */
        printf("sum of %d row : %d\n", i + 1, sum);

        /**
         * Reset sum before calculating the next row.
         */
        sum = 0;
    }

    printf("\n");

    /**
     * Free the memory allocated for each row.
     */
    for (i = 0; i < row; i++)
    {
        free(array[i]);
    }

    /**
     * Free the memory allocated for the array of row pointers.
     */
    free(array);

    /**
     * Set the pointer to NULL to avoid a dangling pointer.
     */
    array = NULL;

    return 0;
}