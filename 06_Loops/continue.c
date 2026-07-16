/**
 * @file continue_example.c
 * @brief Demonstrates the use of the `continue` statement in a for loop.
 *
 * This program prints the numbers from 1 to 20 while skipping all
 * even numbers. The `continue` statement is used to skip the current
 * iteration whenever the loop variable matches the next even number.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program iterates through the numbers from 1 to 20.
 * - If the current number is even, the `continue` statement skips
 *   printing it.
 * - Otherwise, the number is printed.
 *
 * The variable `n` keeps track of the next even number to skip.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Loop counter */
    int i;

    /** Stores the next even number to skip */
    int n = 2;

    /* Iterate from 1 to 20 */
    for (i = 1; i <= 20; i++)
    {
        /* Skip even numbers */
        if (i == n)
        {
            n = n + 2;
            continue;
        }

        /* Print odd numbers */
        printf("%d ", i);
    }

    return 0;
}