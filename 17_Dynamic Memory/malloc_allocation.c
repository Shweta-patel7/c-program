/**
 * @file dynamic_array.c
 * @brief Demonstrates dynamic memory allocation using malloc().
 *
 * This program dynamically allocates memory for an integer array
 * based on the number of elements entered by the user.
 * It then accepts values from the user, stores them in dynamically
 * allocated memory, displays the values, and finally releases the
 * allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Reads the number of integers required from the user, dynamically
 * allocates memory using malloc(), stores user-provided values,
 * displays the stored values, and releases the allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if invalid input is provided or memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Number of integers to be dynamically allocated.
     */
    int n;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Pointer to dynamically allocated integer memory.
     */
    int *ptr;

    /**
     * Ask the user for the number of integers.
     */
    printf("Enter number of values to be added in memory: ");
    scanf("%d", &n);

    /**
     * Check whether the requested number of elements is valid.
     */
    if (n <= 0)
    {
        printf("Invalid number of values\n");
        return 1;
    }

    /**
     * Dynamically allocate memory for n integers.
     */
    ptr = malloc(n * sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    /**
     * Display the starting address of the allocated memory.
     */
    printf("Address of memory: %p\n", (void *)ptr);

    /**
     * Read values from the user and store them
     * in the dynamically allocated memory.
     */
    printf("Enter values: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    /**
     * Display all values stored in dynamically allocated memory.
     */
    printf("Values in memory: ");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    printf("\n");

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr);

    return 0;
}