/**
 * @file pascals_triangle.c
 * @brief Generates Pascal’s Triangle in a formatted pyramid structure.
 *
 * This program prints Pascal’s Triangle using an efficient iterative
 * formula for binomial coefficients without using factorials.
 * It also formats the output in a pyramid shape.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads number of rows from the user and prints Pascal’s Triangle
 * in a centered pyramid format using nested loops.
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
     * @brief Generate Pascal’s Triangle row by row
     */
    for (i = 0; i <= n; i++)
    {
        coef = 1;

        /**
         * @brief Print leading spaces for pyramid alignment
         */
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        /**
         * @brief Compute and print binomial coefficients
         *
         * Uses relation:
         * coef = coef * (i - j) / (j + 1)
         */
        for (j = 0; j <= i; j++)
        {
            printf("%11lld", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}