/**
 * @file bitwise_assignment.c
 * @brief Demonstrates compound assignment operators and nested printf().
 *
 * This program demonstrates:
 * - Bitwise XOR assignment operator (^=)
 * - Addition assignment operator (+=)
 * - Return value of printf()
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program performs the following operations:
 * - Initializes a character variable with value 7.
 * - Applies XOR operation with 5 using the ^= operator.
 * - Adds 3 to the updated value using += operator.
 * - Prints the result using nested printf() calls.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Character variable used for bitwise operations */
    char a = 7;

    /* Perform bitwise XOR operation */
    a ^= 5;

    /*
     * Add 3 to a and print its value.
     * The inner printf() returns the number of characters printed,
     * which is then printed by the outer printf().
     */
    printf("%d", printf("%d", a += 3));

    return 0;
}