/**
 * @file switch_constant_expression.c
 * @brief Demonstrates the use of constant expressions in switch cases.
 *
 * This program shows that arithmetic expressions can be used as
 * case labels in a switch statement because they are evaluated as
 * constant values during compilation.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program initializes an integer variable and compares its value
 * with different case labels in a switch statement.
 *
 * Case evaluation:
 * - `5 * 5` becomes 25.
 * - `25 + 25` becomes 50.
 *
 * Since the value of `x` is 50, the second case is executed.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Value to be checked in switch statement */
    int x = 50;

    /* Compare x with case values */
    switch (x)
    {
        case 5 * 5:
            printf("yes case1");
            break;

        case 25 + 25:
            printf("yes case2");
            break;

        default:
            printf("not in case");
            break;
    }

    return 0;
}