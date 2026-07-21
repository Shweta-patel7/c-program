/**
 * @file main.c
 * @brief Demonstrates a structure containing a function pointer.
 */

#include <stdio.h>

/**
 * @struct check
 * @brief Structure containing a function pointer.
 *
 * The ptr member can store the address of a function
 * that takes no arguments and returns void.
 */
struct check
{
    /**
     * @brief Function pointer member.
     *
     * This pointer can point to a function with the
     * following signature:
     * void function_name(void);
     */
    void (*ptr)(void);
};

/**
 * @brief Main function.
 *
 * Initializes the function pointer to NULL and checks
 * whether the pointer is valid before calling it.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    /**
     * @brief Structure object.
     *
     * The ptr function pointer is initialized to NULL.
     */
    struct check a = {NULL};

    /**
     * Check whether the function pointer is valid
     * before calling it.
     */
    if (a.ptr != NULL)
    {
        a.ptr();
    }
    else
    {
        printf("Function pointer is NULL\n");
    }

    return 0;
}