#include <stdio.h>

/**
 * @brief Reverses the digits of a number.
 *
 * This function takes an integer and returns a new integer
 * formed by reversing its digits.
 * Example: 123 → 321
 *
 * @param a The number to be reversed.
 * @return int The reversed number.
 */
int reverse(int a);

/**
 * @brief Entry point of the program.
 *
 * Reads an integer from the user, calls the reverse()
 * function, and prints the reversed number.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Reverse number = %d\n", reverse(n));

    return 0;
}

/**
 * @brief Reverses the digits of a number.
 *
 * @param a The number to be reversed.
 * @return int The reversed integer value.
 */
int reverse(int a)
{
    int q, rem, result = 0;
    q = a;

    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }

    return result;
}