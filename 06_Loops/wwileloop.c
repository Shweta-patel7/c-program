/**
 * @file while_loop_example.c
 * @brief Demonstrates the use of a while loop with the decrement operator.
 *
 * This program uses a `while` loop to execute repeatedly while the
 * variable `i` is greater than 0. During each iteration, the current
 * value of `i` is printed as a character, and then `i` is decremented.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program initializes an integer variable to 6 and executes a
 * `while` loop until the value becomes 0. The `%c` format specifier
 * prints the integer value as its corresponding ASCII control character.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Loop control variable */
    int i = 6;

    /* Execute the loop while i is greater than 0 */
    while (i > 0)
    {
        /* Print the current value as an ASCII character and decrement i */
        printf("hello user %c\n", i--);
    }

    return 0;
}