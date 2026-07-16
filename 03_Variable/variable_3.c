/**
 * @file simple_math.c
 * @brief Demonstrates basic arithmetic operations in C.
 *
 * This program calculates the value of an arithmetic expression:
 *
 *     output = a * b + c
 *
 * using three integer variables and displays the expression and result.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Initializes three integer variables.
 * - Performs multiplication followed by addition.
 * - Stores the result in a separate variable.
 * - Prints the expression and calculated output.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First operand */
    int a = 3;

    /** Second operand */
    int b = 5;

    /** Third operand */
    int c = 7;

    /** Stores the result of the arithmetic expression */
    int output = a * b + c;

    /* Display the arithmetic expression */
    printf("This is simple math: %d * %d + %d\n", a, b, c);

    /* Display the calculated result */
    printf("Output: %d\n", output);

    return 0;
}