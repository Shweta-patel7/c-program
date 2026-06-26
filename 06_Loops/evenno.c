/**
 * @file skip_numbers.c
 * @brief Program to print numbers from 1 to 20 while skipping a pattern.
 *
 * This program prints numbers from 1 to 20 but skips values
 * where the counter matches an increasing sequence (1, 3, 5, 7, ...).
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Iterates from 1 to 20 and skips specific values using the continue statement.
 * The skipped values follow an increasing odd-number pattern.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int i, n = 1;

    for (i = 1; i <= 20; i++)
    {
        if (i == n)
        {
            n = n + 2;
            continue;
        }

        printf(" %d", i);
    }

    return 0;
}