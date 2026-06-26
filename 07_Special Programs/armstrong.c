/**
 * @file armstrong_number.c
 * @brief Program to check whether a number is an Armstrong number.
 *
 * An Armstrong number is a number that is equal to the sum of its own
 * digits each raised to the power of the number of digits.
 *
 * Example: 153 = 1^3 + 5^3 + 3^3
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user, calculates the number of digits,
 * computes the Armstrong sum, and checks whether the number is
 * an Armstrong number.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int x, q, count = 0, cnt, mul = 1, result = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &x);

    q = x;

    // Count number of digits
    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    cnt = count;
    q = x;

    // Compute Armstrong sum
    while (q != 0)
    {
        rem = q % 10;

        mul = 1;
        for (int i = 0; i < cnt; i++)
        {
            mul *= rem;
        }

        result += mul;
        q = q / 10;
    }

    // Check condition
    if (result == x)
    {
        printf("%d is an Armstrong number\n", x);
    }
    else
    {
        printf("%d is not an Armstrong number\n", x);
    }

    return 0;
}