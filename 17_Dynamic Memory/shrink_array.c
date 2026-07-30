/**
 * @file realloc_shrink.c
 * @brief Demonstrates shrinking dynamically allocated memory using realloc().
 *
 * This program dynamically allocates memory for 10 integers using malloc().
 * It accepts 10 integer values from the user and displays all 10 values.
 *
 * The allocated memory is then resized from 10 integers to 5 integers
 * using realloc(). The first 5 values are preserved and displayed.
 *
 * Finally, the dynamically allocated memory is released using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for 10 integers, reads and displays 10 values,
 * shrinks the allocated memory to hold only 5 integers using realloc(),
 * displays the remaining 5 values, and releases the allocated memory.
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
     * Allocate memory for 10 integers using malloc().
     */
    p1 = malloc(10 * sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (p1 == NULL)
    {
        printf("Memory is not allocated\n");
        return 1;
    }

    /**
     * Read 10 integer values from the user.
     */
    printf("Enter 10 values: ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", (p1 + i));
    }

    /**
     * Display all 10 values before shrinking the memory.
     */
    printf("Printing without shrink: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d\t", *(p1 + i));
    }

    /**
     * Shrink the allocated memory from 10 integers to 5 integers.
     *
     * realloc() preserves the first 5 integer values.
     */
    p2 = realloc(p1, 5 * sizeof(int));

    /**
     * Check whether realloc() was successful.
     *
     * If realloc() fails, the original memory pointed to by p1
     * is still valid and must be released.
     */
    if (p2 == NULL)
    {
        printf("\nMemory reallocation failed\n");
        free(p1);
        return 1;
    }

    /**
     * Display the first 5 values after shrinking the memory.
     */
    printf("\nPrinting after shrink: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(p2 + i));
    }

    printf("\n");

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