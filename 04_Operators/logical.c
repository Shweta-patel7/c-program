/**
 * @file logical_vs_bitwise_and.c
 * @brief Demonstrates the difference between logical AND and bitwise AND.
 *
 * This program compares two integer values using:
 * - Logical AND operator (&&)
 * - Bitwise AND operator (&)
 *
 * The logical AND checks whether both operands are non-zero,
 * while the bitwise AND performs an AND operation on individual bits.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program initializes two integer variables and displays the
 * result of logical AND and bitwise AND operations.
 *
 * Example:
 * - a && b returns 1 because both values are non-zero.
 * - a & b performs bit-level AND operation.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer operand */
    int a = 4;

    /** Second integer operand */
    int b = 6;

    /* Logical AND operation */
    printf("and operator %d\n", a && b);

    /* Bitwise AND operation */
    printf("bitwise and %d\n", a & b);

    return 0;
}

/**
 * @file xor_nested_printf.c
 * @brief Demonstrates XOR assignment and nested printf execution.
 *
 * This program demonstrates:
 * - Bitwise XOR assignment operator (^=)
 * - Addition assignment operator (+=)
 * - The return value of printf()
 */

#include <stdio.h>

/**
 * @brief Performs bitwise operation demonstration.
 *
 * The function:
 * - Initializes a character variable with value 7.
 * - Applies XOR operation with 5.
 * - Adds 3 to the result.
 * - Prints the value using nested printf().
 *
 * @return int Returns 0 on successful execution.
 */
int fun(void)
{
    /** Character variable for bitwise operations */
    char a = 7;

    /* XOR operation */
    a ^= 5;

    /*
     * Inner printf prints the value of a.
     * Outer printf prints the number of characters returned
     * by the inner printf.
     */
    printf("%d", printf("%d\n", a += 3));

    return 0;
}