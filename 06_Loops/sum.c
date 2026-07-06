/**
 * @file sum_natural_numbers.c
 * @brief Calculates sum of first N natural numbers using do-while loop.
 *
 * This program computes the sum of natural numbers from 1 to N
 * using a do-while loop.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a number N from the user and calculates the sum of
 * first N natural numbers using a do-while loop.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, sum = 0, i = 1;

    printf("Enter number for sum: ");
    scanf("%d", &n);

    /**
     * @brief Calculate sum using do-while loop
     */
    do
    {
        sum = sum + i;
        i++;
    }
    while (i <= n);

    printf("Sum of first %d natural numbers is = %d\n", n, sum);

    return 0;
}