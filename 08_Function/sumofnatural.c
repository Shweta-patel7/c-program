#include <stdio.h>

/**
 * @brief Recursively calculates the sum of first n natural numbers.
 *
 * This function uses recursion to compute:
 * 1 + 2 + 3 + ... + n
 *
 * @param a The number up to which the sum is calculated.
 * @return int The sum of first a natural numbers.
 */
int sum(int a);

/**
 * @brief Entry point of the program.
 *
 * Reads a number from the user and calculates the sum
 * of first n natural numbers using recursion.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int n;

    printf("Enter number for sum: ");
    scanf("%d", &n);

    printf("Sum of %d numbers = %d\n", n, sum(n));

    return 0;
}

/**
 * @brief Recursively calculates sum of first n natural numbers.
 *
 * Base case:
 * sum(0) = 0
 *
 * Recursive case:
 * sum(n) = n + sum(n - 1)
 *
 * @param a The number up to which sum is calculated.
 * @return int The computed sum.
 */
int sum(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return a + sum(a - 1);
    }
}