/**
 * @file factorial.c
 * @brief Program to calculate factorial of a number.
 *
 * This program computes the factorial of a given integer.
 * Factorial of n is defined as:
 * n! = n × (n-1) × (n-2) × ... × 1
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user and calculates its factorial.
 * Handles cases for positive numbers and zero.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n, a = 1, b;

    printf("Enter number for factorial = ");
    scanf("%d", &n);

    b = n;

    if (n > 0)
    {
        while (n >= 1)
        {
            a = a * n;
            n--;
        }
        printf("Factorial of %d is %d\n", b, a);
    }
    else if (n == 0)
    {
        printf("Factorial of %d is 1\n", b);
    }
    else
    {
        printf("Factorial is not defined for negative numbers\n");
    }

    return 0;
}