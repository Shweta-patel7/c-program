/**
 * @file power_calculation.c
 * @brief Program to calculate base raised to a power (including negative exponent).
 *
 * This program computes base^exponent. If the exponent is positive,
 * it calculates using repeated multiplication. If negative, it computes
 * using reciprocal multiplication.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads base and exponent from the user, computes the power using loops,
 * and prints the result. Handles both positive and negative exponents.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int base, exponent, expo;
    int power = 1;
    double power1 = 1.0;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    expo = exponent;

    // Positive exponent case
    if (exponent > 0)
    {
        while (exponent != 0)
        {
            power = power * base;
            exponent--;
        }
        printf("%d to the power of %d is %d\n", base, expo, power);
    }
    // Negative exponent case
    else
    {
        while (exponent != 0)
        {
            power1 = power1 * (1.0 / base);
            exponent++;
        }
        printf("%d to the power of %d is %.10f\n", base, expo, power1);
    }

    return 0;
}