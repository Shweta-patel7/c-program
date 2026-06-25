#include <stdio.h>

/**
 * @brief Calculates the sum of digits of a number.
 *
 * This function extracts each digit of the given number
 * and computes the sum of all digits.
 * Example: 123 → 1 + 2 + 3 = 6
 *
 * @param n The integer whose digits will be summed.
 * @return int The sum of digits of the number.
 */
int sumofdigit(int n);

/**
 * @brief Entry point of the program.
 *
 * Reads an integer from the user, calculates the sum
 * of its digits using sumofdigit(), and prints the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("Sum of digits = %d\n", sumofdigit(a));

    return 0;
}

/**
 * @brief Calculates the sum of digits of a number.
 *
 * @param n The number whose digits are to be summed.
 * @return int The computed sum of digits.
 */
int sumofdigit(int n)
{
    int rem, result = 0;

    while (n != 0)
    {
        rem = n % 10;
        result = result + rem;
        n = n / 10;
    }

    return result;
}