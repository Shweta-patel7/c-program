/**
 * @file dynamic_2d_array.c
 * @brief Dynamically allocates and manages a 2D integer array.
 *
 * This program dynamically allocates memory for a two-dimensional
 * integer array using a double pointer. The user enters the number
 * of rows and columns, followed by the array elements.
 *
 * The program then displays the entered matrix and releases all
 * dynamically allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for a two-dimensional integer array,
 * accepts values from the user, displays the matrix, and finally
 * releases all allocated memory.
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
     * @brief Double pointer used to dynamically allocate the 2D array.
     */
    int **array;

    /**
     * @brief Loop counters for rows and columns.
     */
    int i, j;

    /**
     * Read the number of rows from the user.
     */
    printf("enter number of row : ");
    scanf("%d", &row);

    /**
     * Read the number of columns from the user.
     */
    printf("enter number of column : ");
    scanf("%d", &col);

    /**
     * Allocate memory for an array of row pointers.
     *
     * Each element of array will point to one row of the 2D array.
     */
    array = (int **) malloc(sizeof(int *) * row);

    /**
     * Allocate memory for each row.
     *
     * Each row contains 'col' integer elements.
     */
    for (i = 0; i < row; i++)
    {
        array[i] = (int *) malloc(sizeof(int) * col);
    }

    /**
     * Read values for each element of the 2D array.
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