/**
 * @file calloc_array.c
 * @brief Demonstrates dynamic memory allocation using calloc().
 *
 * This program dynamically allocates memory for an integer array
 * using calloc(). It accepts the number of elements from the user,
 * stores values in the allocated memory, displays the values, and
 * finally releases the allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Reads the number of elements from the user, allocates memory
 * for the required number of integers using calloc(), accepts
 * integer values, displays the stored values, and releases the
 * allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if invalid input is provided or memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Number of elements to allocate.
     */
    int n;

    /**
     * @brief Pointer to dynamically allocated integer memory.
     */
    int *p;

    /**
     * Ask the user for the number of elements.
     */
    printf("Enter number of elements: ");
    scanf("%d", &n);

    /**
     * Check whether the number of elements is valid.
     */
    if (n <= 0)
    {
        printf("Invalid number of elements\n");
        return 1;
    }

    /**
     * Dynamically allocate memory for n integers.
     *
     * calloc() allocates memory for n elements, each having
     * the size of an integer. Unlike malloc(), calloc()
     * initializes all allocated bytes to zero.
     */
    p = calloc(n, sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (p == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Display the starting address of the allocated memory.
     */
    printf("Address of memory: %p\n", (void *)p);

    /**
     * Read integer values from the user and store them
     * in the dynamically allocated memory.
     */
    printf("Enter elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    /**
     * Display the values stored in dynamically allocated memory.
     */
    printf("Memory elements: ");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }

    printf("\n");

    /**
     * Release the dynamically allocated memory.
     */
    free(p);

    return 0;
}