/**
 * @file operator_precedence.c
 * @brief Demonstrates arithmetic operator precedence in C.
 *
 * This program performs different arithmetic expressions using
 * multiplication, division, addition, subtraction, and modulus
 * operators. It demonstrates how C evaluates expressions according
 * to operator precedence and associativity rules.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program initializes three integer variables and evaluates
 * different arithmetic expressions.
 *
 * Operator precedence used:
 * - Multiplication (*), division (/), and modulus (%) have higher
 *   priority than addition (+) and subtraction (-).
 * - Operators with the same precedence are evaluated from left to right.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer operands used for calculations */
    int a = 5, b = 6, c = 3;

    /* Multiplication and division have higher precedence */
    printf("a * b / c = %d\n", a * b / c);

    /* Addition and subtraction have the same precedence */
    printf("a + b - c = %d\n", a + b - c);

    /* Multiplication, division, and modulus are evaluated first */
    printf("a + b * c / a %% c = %d\n", a + b * c / a % c);

    /* Division and modulus are evaluated from left to right */
    printf("a / b %% a = %d\n", a / b % a);

    return 0;
}