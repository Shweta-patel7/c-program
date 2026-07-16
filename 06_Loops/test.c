/**
 * @file countdown.c
 * @brief Program to print numbers from 10 down to 1.
 *
 * This program demonstrates the use of a `for` loop to perform
 * a countdown by printing integers in descending order.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program initializes a loop counter to 10 and decrements
 * it until it reaches 1. Each value is printed to the console.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Loop counter */
    int i;

    /* Print numbers from 10 to 1 */
    for (i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}