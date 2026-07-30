/**
 * @file type_casting.c
 * @brief Demonstrates the difference between integer division and
 *        floating-point division using type casting.
 *
 * This program demonstrates how the result of a division operation
 * changes when integer operands are used directly versus when one
 * operand is explicitly converted to float.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Performs division between two integers in two different ways:
 * 1. Without type casting, which performs integer division.
 * 2. With type casting, which performs floating-point division.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief First integer operand.
     */
    int a = 10;

    /**
     * @brief Second integer operand.
     */
    int b = 3;

    /**
     * @brief Stores the result of the division.
     */
    float div;

    /**
     * Perform integer division.
     *
     * Since both 'a' and 'b' are integers, the division is
     * performed as integer division before the result is
     * assigned to the float variable.
     */
    div = a / b;

    printf("Without type casting: %f\n", div);

    /**
     * Perform floating-point division.
     *
     * The expression '(float)a' converts 'a' from int to float.
     * Therefore, the division is performed using floating-point
     * arithmetic.
     */
    div = (float)a / b;

    printf("With type casting: %f\n", div);

    return 0;
}