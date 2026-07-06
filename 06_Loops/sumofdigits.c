/**
 * @file sum_of_digits.c
 * @brief Calculates the sum of digits of an integer.
 *
 * This program extracts each digit of a number using modulus (%) and
 * integer division (/) and computes the sum of all digits.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user and calculates the sum of its digits
 * using a while loop.
 *
 * @return 0 on successful execution
 */
int main()
{
    int a, b, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    /**
     * @brief Extract digits and compute sum
     *
     * Repeatedly extracts last digit using %10 and removes it using /10.
     */
    while (a > 0)
    {
        b = a % 10;     /**< Extract last digit */
        sum = sum + b;  /**< Add digit to sum */
        a = a / 10;     /**< Remove last digit */
    }

    printf("Sum of digits is = %d\n", sum);

    return 0;
}/**
 * @file sum_of_digits.c
 * @brief Calculates the sum of digits of an integer.
 *
 * This program extracts each digit of a number using modulus (%) and
 * integer division (/) and computes the sum of all digits.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user and calculates the sum of its digits
 * using a while loop.
 *
 * @return 0 on successful execution
 */
int main()
{
    int a, b, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    /**
     * @brief Extract digits and compute sum
     *
     * Repeatedly extracts last digit using %10 and removes it using /10.
     */
    while (a > 0)
    {
        b = a % 10;     /**< Extract last digit */
        sum = sum + b;  /**< Add digit to sum */
        a = a / 10;     /**< Remove last digit */
    }

    printf("Sum of digits is = %d\n", sum);

    return 0;
}