/**
 * @file forward_backward_count.c
 * @brief Prints numbers in forward or backward order based on user choice.
 *
 * This program allows the user to print numbers from 1 to 10 (forward)
 * or from 10 to 1 (backward) using loops.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes user input ('f' for forward, 'b' for backward) and prints
 * numbers accordingly using for and while loops.
 *
 * @return 0 on successful execution
 */
int main()
{
    int i;
    char a;

    printf("Forward or backward (f/b): ");
    scanf(" %c", &a);

    /**
     * @brief Forward counting (1 to 10)
     */
    if (a == 'f')
    {
        for (i = 1; i <= 10; i++)
        {
            printf(" %d", i);
        }
    }

    /**
     * @brief Backward counting (10 to 1)
     */
    else if (a == 'b')
    {
        i = 10;
        while (i >= 1)
        {
            printf(" %d", i);
            i--;
        }
    }

    /**
     * @brief Invalid input case
     */
    else
    {
        printf("Invalid choice");
    }

    return 0;
}