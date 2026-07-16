/**
 * @file variable_assignment.c
 * @brief Demonstrates variable declaration and reassignment.
 *
 * This program shows how the value of an integer variable can be
 * changed after its initial declaration.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares an integer variable.
 * - Assigns an initial value.
 * - Updates the variable with a new value.
 * - Prints the updated value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Integer variable storing a value */
    int var = 4;

    /* Update the value of the variable */
    var = 5;

    /* Print the updated value */
    printf("%d", var);

    return 0;
}