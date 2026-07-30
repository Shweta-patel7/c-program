/**
 * @file realloc_address.c
 * @brief Demonstrates how the memory address can change after realloc().
 *
 * This program dynamically allocates memory for 5 integers using malloc().
 * It then resizes the allocated memory to hold 10 integers using realloc()
 * and displays the memory address before and after reallocation.
 *
 * The address may remain the same if the existing memory block can be
 * expanded in place, or it may change if a new memory block is required.
 *
 * Finally, the allocated memory is released using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for 5 integers using malloc(), displays the initial
 * memory address, resizes the memory to hold 10 integers using realloc(),
 * displays the new memory address, and releases the allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation or reallocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to the initially allocated memory.
     */
    int *p1;

    /**
     * @brief Pointer to the memory returned by realloc().
     */
    int *p2;

    /**
     * Allocate memory for 5 integers using malloc().
     */
    p1 = malloc(5 * sizeof(int));

    /**
     * Check whether malloc() was successful.
     */
    if (p1 == NULL)
    {
        printf("Memory is not allocated\n");
        return 1;
    }

    /**
     * Display the address of the memory before reallocation.
     */
    printf("Address before realloc: %p\n", (void *)p1);

    /**
     * Resize the allocated memory from 5 integers to 10 integers.
     *
     * realloc() may return the same address or a different address.
     */
    p2 = realloc(p1, 10 * sizeof(int));

    /**
     * Check whether realloc() was successful.
     *
     * If realloc() fails, the original memory pointed to by p1
     * remains valid and must be released.
     */
    if (p2 == NULL)
    {
        printf("Memory reallocation failed\n");
        free(p1);
        return 1;
    }

    /**
     * Display the address of the memory after reallocation.
     */
    printf("Address after realloc: %p\n", (void *)p2);

    /**
     * Release the dynamically allocated memory.
     */
    free(p2);

    /**
     * Set the pointer to NULL to avoid a dangling pointer.
     */
    p2 = NULL;

    return 0;
}