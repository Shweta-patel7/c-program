/**
 * @file dynamic_array.c
 * @brief Demonstrates dynamic memory allocation for an integer array.
 *
 * This program dynamically allocates memory for 5 integers using
 * malloc(). It accepts 5 integer values from the user, stores them
 * in dynamically allocated memory, prints the values, and finally
 * releases the allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for 5 integers, reads values from
 * the user, displays the stored values, and releases the allocated
 * memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to dynamically allocated integer memory.
     */
    int *p = NULL;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * Allocate memory for 5 integers.
     */
    p = malloc(5 * sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (p == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Read 5 integer values from the user and store them
     * in dynamically allocated memory.
     */
    printf("Enter values: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }

    /**
     * Display the values stored in dynamically allocated memory.
     */
    printf("Printing values: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(p + i));
    }

    printf("\n");

    /**
     * Release the dynamically allocated memory.
     */
    free(p);

    /**
     * Set the pointer to NULL to avoid a dangling pointer.
     */
    p = NULL;

    return 0;
}