/**
 * @file pointer_basics.c
 * @brief Demonstrates basic pointer operations in C.
 *
 * This program shows how to access a variable's value and address
 * using both the variable itself and a pointer.
 * It demonstrates dereferencing and address printing.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Declares an integer variable and a pointer to it, then prints:
 * - Value of variable
 * - Address of variable
 * - Value using pointer dereferencing
 * - Address stored in pointer
 *
 * @return 0 on successful execution
 */
int main()
{
    int a = 12;

    /** Pointer pointing to variable a */
    int *p = &a;

    printf("Value of number = %d\n", a);

    printf("Address of number = %p\n", (void*)&a);

    printf("Value using pointer = %d\n", *p);

    printf("Pointer stores address = %p\n", (void*)p);

    return 0;
}