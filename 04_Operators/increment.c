/**
 * @file increment_operator.c
 * @brief Demonstrates post-increment and pre-increment operators.
 *
 * This program demonstrates the difference between the post-increment
 * operator (a++) and the pre-increment operator (++b) in an arithmetic
 * expression.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program initializes two integer variables and evaluates the
 * expression:
 *
 * a++ + ++b
 *
 * Evaluation:
 * - `a++` uses the current value of `a` and then increments it.
 * - `++b` increments `b` first and then uses the updated value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer variable */
    int a = 5;

    /** Second integer variable */
    int b = 7;

    /* Perform addition using post-increment and pre-increment */
    printf("%d", a++ + ++b);

    return 0;
}