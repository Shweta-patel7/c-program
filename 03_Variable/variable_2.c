/**
 * @file print_integer_variables.c
 * @brief Program to print integer variable values.
 *
 * This program demonstrates the declaration, initialization, and
 * printing of integer variables using the printf() function.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program creates three integer variables, assigns values to them,
 * and prints their values one after another.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer variable */
    int a = 5;

    /** Second integer variable */
    int b = 9;

    /** Third integer variable */
    int c = 3;

    /* Print values of variables */
    printf("%d", a);
    printf("%d", b);
    printf("%d", c);

    return 0;
}