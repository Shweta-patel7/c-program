/**
 * @file use_after_free.c
 * @brief Demonstrates accessing dynamically allocated memory after free().
 *
 * This program dynamically allocates memory for an integer array,
 * copies values from a static array into the allocated memory, and
 * displays the values before and after calling free().
 *
 * The program also demonstrates setting the pointer to NULL after
 * freeing the allocated memory.
 *
 * @warning Accessing memory through a pointer after free() results
 * in undefined behavior.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Main function of the program.
 *
 * Allocates memory dynamically for five integers, copies values into
 * the allocated memory, displays the values, frees the memory, and
 * then attempts to access the freed memory.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Static array containing five integer values.
     */
    int a[5] = {1, 2, 3, 4, 5};

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Pointer to dynamically allocated memory.
     */
    int *ptr;

    /**
     * Dynamically allocate memory for five integers.
     */
    ptr = (int *) malloc(5 * sizeof(int));

    /**
     * Copy values from the static array into dynamically allocated memory.
     */
    for (i = 0; i < 5; i++)
    {
        ptr[i] = a[i];
    }

    /**
     * Display the values before freeing the allocated memory.
     */
    printf("befor free of pointer \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr);

    /**
     * @warning The pointer still contains the address of the freed memory.
     * Accessing ptr after free() causes undefined behavior.
     */
    printf("\nafter free of pointer \n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }

    /**
     * Set the pointer to NULL.
     */
    printf("\nafter null the pointer");

    ptr = NULL;

    /**
     * @warning ptr is NULL at this point.
     * Dereferencing a NULL pointer causes undefined behavior.
     */
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
}