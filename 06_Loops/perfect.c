/**
 * @file perfect_number.c
 * @brief Checks whether a number is a perfect number.
 *
 * A perfect number is a number whose sum of all positive divisors
 * excluding itself is equal to the number.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user, calculates the sum of its divisors,
 * and checks whether it is a perfect number.
 *
 * @return 0 on successful execution
 */
int main()
{
    int a, i, rem, sum = 0;

    printf("Enter number: ");
    scanf("%d", &a);

    /**
     * @brief Calculate sum of divisors
     *
     * A number i is a divisor of a if a % i == 0
     */
    for (i = 1; i <= a; i++)
    {
        rem = a % i;

        if (rem == 0)
        {
            sum = sum + i;
        }
    }

    /**
     * @brief Check perfect number condition
     */
    if (sum == a)
    {
        printf("%d is a perfect number\n", a);
    }
    else
    {
        printf("%d is not a perfect number\n", a);
    }

    return 0;
}