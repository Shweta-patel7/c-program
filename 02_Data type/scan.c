/**
 * @file addition.c
 * @brief Program to add two integer numbers.
 *
 * This program takes two integer values as input from the user,
 * performs addition, and displays the result.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares two integer variables.
 * - Takes two integer inputs from the user.
 * - Calculates their sum.
 * - Prints the addition expression and result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First integer input */
    int a;

    /** Second integer input */
    int b;

    /* Read first value */
    printf("Enter first value:\n");
    scanf("%d", &a);

    /* Read second value */
    printf("Enter second value:\n");
    scanf("%d", &b);

    /* Display addition result */
    printf("%d + %d = %d", a, b, a + b);

    return 0;
}