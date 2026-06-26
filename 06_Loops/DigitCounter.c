/**
 * @file digit_count.c
 * @brief Program to count the number of digits in an integer.
 *
 * This program reads an integer from the user and calculates
 * how many digits it contains using repeated division by 10.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user, counts the number of digits,
 * and prints the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int x, q, count = 0;

    printf("Enter a number: ");
    scanf("%d", &x);

    q = x;

    // Count digits
    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    printf("%d\n", count);

    return 0;
}