/**
 * @file do_while_example.c
 * @brief Program demonstrating a do-while loop that continues until user enters 0.
 *
 * This program repeatedly prompts the user to enter an integer.
 * The loop terminates when the user enters 0.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Continuously reads integers from the user using a do-while loop.
 * The loop exits when the user enters 0, then prints a message.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n;

    do
    {
        printf("Enter an integer: ");
        scanf("%d", &n);

    } while (n != 0);

    printf("You are out\n");

    return 0;
}