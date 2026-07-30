/**
 * @file realloc_array.c
 * @brief Demonstrates dynamic memory allocation using malloc() and realloc().
 *
 * This program first allocates memory for 5 integers using malloc().
 * It accepts 5 integer values from the user and displays them.
 *
 * The program then increases the allocated memory to hold 8 integers
 * using realloc(). The user enters 3 additional values, and finally
 * all 8 values are displayed.
 *
 * The allocated memory is released using free() at the end.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for 5 integers using malloc(), stores and displays
 * 5 values, then resizes the memory to hold 8 integers using realloc().
 * Three additional values are then stored and all 8 values are displayed.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation or reallocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to the initially allocated memory.
     */
    int *ptr1;

    /**
     * @brief Pointer to the resized memory block.
     */
    int *ptr2;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * Allocate memory for 5 integers using malloc().
     */
    ptr1 = malloc(5 * sizeof(int));

    /**
     * Check whether malloc() was successful.
     */
    if (ptr1 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    /**
     * Display the starting address of the allocated memory.
     */
    printf("Address for malloc: %p\n", (void *)ptr1);

    /**
     * Read 5 integer values from the user and store them
     * in the dynamically allocated memory.
     */
    printf("Enter 5 values: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", (ptr1 + i));
    }

    /**
     * Display the 5 values stored in the allocated memory.
     */
    printf("Values in memory: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }

    /**
     * Resize the allocated memory to hold 8 integers.
     *
     * realloc() may move the memory block to a new location.
     * The original 5 values are preserved.
     */
    ptr2 = realloc(ptr1, 8 * sizeof(int));

    /**
     * Check whether realloc() was successful.
     */
    if (ptr2 == NULL)
    {
        printf("\nMemory reallocation failed\n");

        /**
         * The original memory pointed to by ptr1 is still valid
         * when realloc() fails, so it must be released.
         */
        free(ptr1);

        return 1;
    }

    /**
     * Display the new address after reallocation.
     */
    printf("\nAddress for realloc: %p\n", (void *)ptr2);

    /**
     * Read 3 additional values into the newly allocated memory.
     */
    printf("Enter 3 more values: ");

    for (i = 5; i < 8; i++)
    {
        scanf("%d", (ptr2 + i));
    }

    /**
     * Display all 8 values stored in the resized memory block.
     */
    printf("Print full memory: ");

    for (i = 0; i < 8; i++)
    {
        printf("%d\t", *(ptr2 + i));
    }

    printf("\n");

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr2);

    return 0;
}