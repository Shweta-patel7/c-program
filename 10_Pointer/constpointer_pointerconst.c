/**
 * @file const_pointer_demo.c
 * @brief Demonstrates pointer to constant and constant pointer in C.
 *
 * This program explains the difference between:
 * 1. Pointer to constant (const int *)
 * 2. Constant pointer (int *const)
 *
 * It shows how pointer behavior changes based on const placement.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Demonstrates usage of const pointers and constant pointers,
 * showing what operations are allowed and what are restricted.
 *
 * @return 0 on successful execution
 */
int main()
{
    int a = 10, b = 20;

    /**
     * @brief Pointer to a constant integer.
     *
     * The value pointed to cannot be modified using this pointer,
     * but the pointer itself can point to another variable.
     */
    const int *ptr1 = &a;

    printf("Pointer to a constant:\n");
    printf("Value = %d\n", *ptr1);

    // *ptr1 = 15;  // Not allowed
    ptr1 = &b;      // Allowed

    printf("After changing pointer, Value = %d\n", *ptr1);

    /**
     * @brief Constant pointer to an integer.
     *
     * The pointer cannot point to another address,
     * but the value at that address can be modified.
     */
    int *const ptr2 = &a;

    printf("\nConstant pointer:\n");
    printf("Value = %d\n", *ptr2);

    *ptr2 = 15;     // Allowed

    printf("Modified value of a = %d\n", a);

    // ptr2 = &b;   // Not allowed

    return 0;
}