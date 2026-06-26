/**
 * @file prime_number.c
 * @brief Program to check whether a number is prime.
 *
 * A prime number is a number greater than 1 that has no divisors
 * other than 1 and itself.
 */

#include <stdio.h>
#include <math.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user and checks whether it is a prime number
 * by testing divisibility from 2 to sqrt(n).
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int x, i, count = 0;

    printf("Enter a positive number: ");
    scanf("%d", &x);

    if (x <= 1)
    {
        printf("%d is not a prime number\n", x);
        return 0;
    }

    // Check divisibility up to square root of x
    for (i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            count = 1;
            break;
        }
    }

    if (count == 0)
        printf("%d is a prime number\n", x);
    else
        printf("%d is not a prime number\n", x);

    return 0;
}