/**
 * @file macro_addition.c
 * @brief Demonstrates the use of a function-like macro for addition.
 *
 * This program defines a macro that performs addition of two values.
 * The macro replaces the function call during preprocessing.
 */

#include <stdio.h>

/**
 * @brief Macro to add two numbers.
 *
 * This function-like macro calculates the sum of two expressions.
 * Parentheses are used around parameters and the complete expression
 * to avoid operator precedence issues.
 *
 * @param x First value.
 * @param y Second value.
 *
 * @return Sum of x and y.
 */
#define add(x, y) ((x) + (y))

/**
 * @brief Entry point of the program.
 *
 * The program uses the add macro to calculate the sum of two numbers
 * and prints the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /* Call macro with two integer values */
    printf("Addition of two numbers: %d\n", add(4, 5));

    return 0;
}