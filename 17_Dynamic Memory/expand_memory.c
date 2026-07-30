/**
 * @file malloc_realloc_array.c
 * @brief Demonstrates dynamic memory allocation using malloc() and realloc().
 *
 * This program initially allocates memory for 3 integers using malloc()
 * and copies values from array 'a' into the dynamically allocated memory.
 *
 * The allocated memory is then resized to hold 6 integers using realloc().
 * The values from array 'b' are copied into the newly allocated portion
 * of the memory.
 *
 * Finally, all 6 values are displayed and the dynamically allocated
 * memory is released using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for 3 integers using malloc(), stores values from
 * array 'a', resizes the memory to hold 6 integers using realloc(),
 * stores additional values from array 'b', displays all 6 values,
 * and releases the allocated memory.
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
     * @brief Pointer to the resized memory block.
     */
    int *p2;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief First array containing 3 integer values.
     */
    int a[3] = {21, 48, 8};

    /**
     * @brief Second array containing 3 additional integer values.
     */
    int b[3] = {56, 6, 32};

    /**
     * Allocate memory for 3 integers using malloc().
     */
    p1 = malloc(3 * sizeof(int));

    /**
     * Check whether malloc() was successful.
     */
    if (p1 == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Copy the values from array 'a' into dynamically
     * allocated memory.
     */
    for (i = 0; i < 3; i++)
    {
        *(p1 + i) = a[i];
    }

    /**
     * Display the values stored in malloc()-allocated memory.
     */
    printf("Malloc memory: ");

    for (i = 0; i < 3; i++)
    {
        printf("%d\t", *(p1 + i));
    }

    /**
     * Resize the allocated memory to hold 6 integers.
     *
     * realloc() preserves the existing 3 values.
     */
    p2 = realloc(p1, 6 * sizeof(int));

    /**
     * Check whether realloc() was successful.
     */
    if (p2 == NULL)
    {
        printf("\nMemory reallocation failed\n");

        /**
         * If realloc() fails, the original memory pointed to
         * by p1 is still valid and must be freed.
         */
        free(p1);

        return 1;
    }

    /**
     * Copy the values from array 'b' into the newly
     * allocated portion of the memory.
     *
     * b[0] -> p2[3]
     * b[1] -> p2[4]
     * b[2] -> p2[5]
     */
    for (i = 3; i < 6; i++)
    {
        *(p2 + i) = b[i - 3];
    }

    /**
     * Display all 6 values stored after realloc().
     */
    printf("\nAfter realloc memory: ");

    for (i = 0; i < 6; i++)
    {
        printf("%d\t", *(p2 + i));
    }

    printf("\n");

    /**
     * Release the dynamically allocated memory.
     */
    free(p2);

    /**
     * Set pointers to NULL to avoid dangling pointers.
     */
    p1 = NULL;
    p2 = NULL;

    return 0;
}