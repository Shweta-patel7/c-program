/**
 * @file pascals_triangle.c
 * @brief Generates Pascal’s Triangle.
 *
 * This program prints Pascal’s Triangle using the binomial coefficient
 * formula without using factorials.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads number of rows from the user and prints Pascal’s Triangle
 * using iterative calculation of binomial coefficients.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j;
    long long coef;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    /**
     * @brief Generate Pascal’s Triangle
     */
    for (i = 0; i <= n; i++)
    {
        coef = 1;

        /**
         * @brief Print leading spaces for alignment
         */
        for (j = 0; j <= 2 * n - 1; j++)
        {
            printf(" ");
        }

        /**
         * @brief Compute and print binomial coefficients
         */
        for (j = 0; j <= i; j++)
        {
            printf("%11lld ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}