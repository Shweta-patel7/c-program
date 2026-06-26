/**
 * @file fibonacci_series.c
 * @brief Program to generate Fibonacci series.
 *
 * This program prints the first N terms of the Fibonacci series.
 * Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, ...
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads the number of terms from the user and prints the Fibonacci series
 * using an iterative approach.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int a, b, i, n, result;

    printf("Number of Fibonacci terms needed: ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }

    printf("\n");

    return 0;
}