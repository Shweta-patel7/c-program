/**
 * @file if_condition_example.c
 * @brief Demonstrates the use of simple if-else statements.
 *
 * This program compares integer variables using relational operators
 * and prints the corresponding result based on the outcome of each
 * comparison.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program initializes three integer variables and performs
 * two comparisons:
 * - Checks whether `a` is less than `b`.
 * - Checks whether `a` is greater than `c`.
 *
 * Depending on the result of each comparison, an appropriate
 * message is displayed.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variables used for comparison */
    int a = 6, b = 9, c = 3;

    /* Compare a and b */
    if (a < b)
        printf("true\n");
    else
        printf("false\n");

    /* Compare a and c */
    if (a > c)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}