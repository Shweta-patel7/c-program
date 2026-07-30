/**
 * @file malloc_uninitialized.c
 * @brief Demonstrates the behavior of memory allocated using malloc().
 *
 * This program dynamically allocates memory for four integers using
 * malloc(). It first displays the contents of the allocated memory
 * before initialization, then accepts four integer values from the user,
 * displays the initialized values, and finally releases the allocated
 * memory using free().
 *
 * @note Memory allocated using malloc() is not initialized.
 *       Therefore, reading its contents before assigning values to it
 *       results in indeterminate values.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for four integers, displays the contents before
 * initialization, stores user-provided values, displays the initialized
 * values, and releases the allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Pointer to dynamically allocated integer memory.
     */
    int *ptr = NULL;

    /**
     * Allocate memory for four integers using malloc().
     */
    ptr = malloc(4 * sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Display the contents of the allocated memory before initialization.
     *
     * @warning The memory allocated by malloc() is uninitialized.
     *          Its contents are indeterminate and should not be
     *          read before assigning valid values.
     */
    printf("Print values before initialization: ");

    for (i = 0; i < 4; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    printf("\n");

    /**
     * Read four integer values from the user and store them
     * in the dynamically allocated memory.
     */
    printf("Initialize values: ");

    for (i = 0; i < 4; i++)
    {
        scanf("%d", (ptr + i));
    }

    /**
     * Display the values after initialization.
     */
    printf("Values after initialization: ");

    for (i = 0; i < 4; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    printf("\n");

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