#include <stdio.h>

/**
 * Computes the nth Fibonacci number using recursion.
 *
 * The Fibonacci sequence is defined as:
 * F(0) = 0
 * F(1) = 1
 * F(n) = F(n-1) + F(n-2) for n > 1
 *
 *  The position in the Fibonacci sequence.
 *  int The Fibonacci number at position a.
 */
int fibo(int a);

/**
 * Entry point of the program.
 *
 * Prompts the user to enter the number of Fibonacci terms
 * to generate and displays the series.
 *
 * int Returns 0 on successful execution.
 */
int main(void)
{
    int n, i;

    printf("Enter number of Fibonacci series needed: ");
    scanf("%d", &n);

    printf("Fibonacci series:");

    for (i = 0; i < n; i++)
    {
        printf(" %d", fibo(i));
    }

    printf("\n");

    return 0;
}

/**
 * Calculates the nth Fibonacci number recursively.
 *
 * Uses recursion based on the Fibonacci recurrence relation.
 *
 *  The index of the Fibonacci number.
 * int The Fibonacci value at index a.
 */
int fibo(int a)
{
    if (a == 0)
    {
        return 0;
    }

    if (a == 1)
    {
        return 1;
    }

    return fibo(a - 1) + fibo(a - 2);
}