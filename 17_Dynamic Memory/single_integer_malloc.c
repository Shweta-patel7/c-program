/**
 * @file dynamic_integer.c
 * @brief Demonstrates dynamic memory allocation for a single integer.
 *
 * This program dynamically allocates memory for one integer using
 * malloc(), stores the value of a variable in the allocated memory,
 * prints the stored value, and finally releases the memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for one integer, stores the value 12
 * in the allocated memory, displays the value, and releases the
 * allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to dynamically allocated integer memory.
     */
    int *ptr = NULL;

    /**
     * @brief Integer variable whose value is copied
     *        into dynamically allocated memory.
     */
    int a = 12;

    /**
     * Allocate memory for one integer.
     */
    ptr = malloc(sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Store the value of 'a' in the dynamically allocated memory.
     */
    *ptr = a;

    /**
     * Display the value stored in dynamically allocated memory.
     */
    printf("Value = %d\n", *ptr);

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr);

    /**
     * Set the pointer to NULL to avoid a dangling pointer.
     */
    ptr = NULL;

    return 0;
}