#include <stdio.h>

/**
 * @brief Calculates the factorial of a non-negative integer.
 *
 * This function computes the factorial of a given number using
 * an iterative approach.
 *
 * @param n The non-negative integer whose factorial is to be calculated.
 * @return long long The factorial of the input number.
 */
long long factorial(int n);

/**
 * @brief Entry point of the program.
 *
 * Prompts the user to enter a number, validates the input,
 * and displays its factorial if the number is non-negative.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Factorial of a negative number is not possible\n");
    }
    else
    {
        printf("%d factorial is %lld\n", a, factorial(a));
    }

    return 0;
}

/**
 * @brief Calculates the factorial of a non-negative integer.
 *
 * The factorial is calculated as:
 * n! = 1 × 2 × 3 × ... × n
 *
 * @param n The non-negative integer whose factorial is to be calculated.
 * @return long long The calculated factorial value.
 */
long long factorial(int n)
{
    long long f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}