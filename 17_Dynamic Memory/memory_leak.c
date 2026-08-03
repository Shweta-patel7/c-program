/**
 * @file memory_leak.c
 * @brief Demonstrates memory allocation without freeing allocated memory.
 *
 * This program repeatedly allocates memory dynamically using malloc().
 * The allocated memory is not released using free(), which can result
 * in a memory leak.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for an array of 400000 integers repeatedly.
 * The allocated memory is intentionally not freed.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main()
{
    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Pointer used to store the address of dynamically allocated memory.
     */
    int *ptr;

    /**
     * Repeat the memory allocation process 10000000 times.
     */
    for (i = 0; i < 10000000; i++)
    {
        /**
         * Dynamically allocate memory for 400000 integers.
         */
        ptr = malloc(400000 * sizeof(int));

        /**
         * Check whether memory allocation was successful.
         */
        if (ptr == NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }

        /**
         * Display the number of successful memory allocations.
         */
        printf("Memory allocated: %d times\n", i + 1);

        /**
         * Memory is intentionally not freed here.
         * This causes a memory leak.
         */
        // no free(ptr); hear
    }

    return 0;
}