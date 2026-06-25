#include <stdio.h>
#include <math.h>

/**
 * @brief Checks whether a number is prime.
 *
 * A prime number is a natural number greater than 1
 * that has no positive divisors other than 1 and itself.
 *
 * @param x The number to be checked.
 * @return int Returns 0 after displaying the result.
 */
int prime(int x);

/**
 * @brief Entry point of the program.
 *
 * Reads a number from the user and determines whether
 * it is a prime number by calling the prime() function.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int a;

    printf("Enter number: ");
    scanf("%d", &a);

    prime(a);

    return 0;
}

/**
 * @brief Determines whether a number is prime.
 *
 * The function checks divisibility from 2 up to the
 * square root of the given number. If a divisor is found,
 * the number is not prime.
 *
 * @param x The number to be checked.
 * @return int Returns 0 after displaying the result.
 */
int prime(int x)
{
    int i, count = 0;

    if (x <= 1)
    {
        printf("%d is not a prime number\n", x);
        return 0;
    }

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