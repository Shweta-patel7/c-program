/**
 * @file malloc_vs_calloc.c
 * @brief Demonstrates the difference between malloc() and calloc().
 *
 * This program dynamically allocates memory for 5 integers using both
 * malloc() and calloc().
 *
 * malloc() allocates memory without initializing its contents.
 * calloc() allocates memory and initializes all bytes to zero.
 *
 * @note The memory allocated by malloc() must be initialized before
 *       its values are read. Reading uninitialized memory results in
 *       undefined behavior.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for 5 integers using malloc() and calloc(),
 * initializes the malloc()-allocated memory before reading it,
 * displays the values from both memory blocks, and finally releases
 * the allocated memory using free().
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to memory allocated using malloc().
     */
    int *p1;

    /**
     * @brief Pointer to memory allocated using calloc().
     */
    int *p2;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * Allocate memory for 5 integers using malloc().
     *
     * malloc() does not initialize the allocated memory.
     */
    p1 = malloc(5 * sizeof(int));

    /**
     * Allocate memory for 5 integers using calloc().
     *
     * calloc() initializes all allocated memory to zero.
     */
    p2 = calloc(5, sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (p1 == NULL || p2 == NULL)
    {
        printf("Memory allocation failed\n");

        /**
         * Free any memory that was successfully allocated.
         */
        free(p1);
        free(p2);

        return 1;
    }

    /**
     * Initialize the memory allocated by malloc().
     *
     * malloc() does not initialize memory, so values must be
     * assigned before they are read.
     */
    for (i = 0; i < 5; i++)
    {
        *(p1 + i) = 0;
    }

    /**
     * Display the values stored in malloc()-allocated memory.
     */
    printf("Printing malloc after initialization: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(p1 + i));
    }

    /**
     * Display the values stored in calloc()-allocated memory.
     *
     * calloc() initializes the allocated memory to zero.
     */
    printf("\nPrinting calloc without initialization: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(p2 + i));
    }

    printf("\n");

    /**
     * Release the memory allocated using malloc().
     */
    free(p1);

    /**
     * Release the memory allocated using calloc().
     */
    free(p2);

    /**
     * Set pointers to NULL to avoid dangling pointers.
     */
    p1 = NULL;
    p2 = NULL;

    return 0;
}