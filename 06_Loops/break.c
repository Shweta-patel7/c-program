/**
 * @file input_validation.c
 * @brief Program to repeatedly accept positive integers.
 *
 * This program continuously accepts integer input from the user.
 * The loop continues until either:
 * - The user enters 0 (normal termination), or
 * - The user enters a negative number (termination using break).
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program reads integers from the user in a loop.
 * - If the entered number is positive, the program continues
 *   to ask for another number.
 * - If the entered number is 0, the loop ends naturally.
 * - If the entered number is negative, the loop is terminated
 *   immediately using the `break` statement.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the number entered by the user */
    int n;

    /* Read the first number */
    printf("Enter a number:\n");
    scanf("%d", &n);

    /* Continue until the user enters 0 */
    while (n != 0)
    {
        /* Exit the loop if a negative number is entered */
        if (n < 0)
        {
            break;
        }

        /* Read the next number */
        printf("Enter a number:\n");
        scanf("%d", &n);
    }

    return 0;
}