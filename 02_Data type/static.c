/**
 * @file function_call.c
 * @brief Demonstrates calling a function multiple times.
 *
 * This program demonstrates the declaration and usage of a function.
 * The function `value()` is called three times, and the returned value
 * is stored in the same variable each time.
 */

#include <stdio.h>

/**
 * @brief Function prototype for value().
 *
 * This function is expected to return an integer value.
 *
 * @return int Value returned by the function.
 */
int value(void);

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares an integer variable.
 * - Calls the value() function three times.
 * - Stores the returned value after each function call.
 * - Prints the final returned value.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Stores the value returned by the function */
    int varable;

    /* Call the function three times */
    varable = value();
    varable = value();
    varable = value();

    /* Display the final returned value */
    printf("%d", varable);

    return 0;
}