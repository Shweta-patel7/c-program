#include <stdio.h>

/**
 * Calculates the factorial of a number using recursion.
 *
 * This function recursively computes the factorial of a
 * positive integer using the formula:
 * n! = n × (n - 1)!
 *
 * The positive integer whose factorial is to be calculated.
 * int The factorial of the given number.
 */
int fact(int a);

/**
 * Entry point of the program.
 *
 * Prompts the user to enter a number, calculates its
 * factorial using the recursive fact() function, and
 * displays the result.
 *
 * int Returns 0 on successful execution.
 */
int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("factorial of %d is = %d\n", n, fact(n));

    return 0;
}

/**
 * Calculates the factorial of a number recursively.
 *
 * Uses recursion to evaluate:
 * n! = n × (n - 1)!
 *
 * Base case:
 * 1! = 1
 *
 *The positive integer whose factorial is to be calculated.
 * int The factorial value.
 */
int fact(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}