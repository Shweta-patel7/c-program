/**
 * @file calloc_array_copy.c
 * @brief Demonstrates calloc() and copying values into dynamically allocated memory.
 *
 * This program dynamically allocates memory for 5 integers using calloc().
 * Since calloc() initializes the allocated memory to zero, the program
 * first displays the initial values.
 *
 * The program then copies values from a static integer array into the
 * dynamically allocated memory and displays the copied values.
 *
 * Finally, the dynamically allocated memory is released using free().
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory for 5 integers using calloc(), displays the initial
 * zero-initialized values, copies values from a static array into the
 * allocated memory, displays the copied values, and finally releases
 * the allocated memory.
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
     * @brief Static array containing 5 integer values.
     */
    int a[5] = {5, 69, 5321, 21, 321};

    /**
     * @brief Pointer to dynamically allocated integer memory.
     */
    int *ptr;

    /**
     * Allocate memory for 5 integers using calloc().
     *
     * calloc() initializes all allocated memory to zero.
     */
    ptr = calloc(5, sizeof(int));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Display the values in dynamically allocated memory
     * before initialization.
     *
     * Since calloc() initializes the memory to zero,
     * all elements initially contain 0.
     */
    printf("Printing memory before initialization: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    printf("\n");

    /**
     * Copy values from the static array 'a' into
     * dynamically allocated memory.
     */
    printf("Printing memory after initialization: ");

    for (i = 0; i < 5; i++)
    {
        *(ptr + i) = a[i];

        /**
         * Display the value after copying it into
         * dynamically allocated memory.
         */
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