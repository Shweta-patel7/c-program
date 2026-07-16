/**
 * @file main.c
 * @brief Demonstrates accessing an external variable.
 */

#include <stdio.h>

/**
 * @brief External variable declaration.
 *
 * The actual definition of this variable exists in another file.
 */
extern int a;

/**
 * @brief Entry point of the program.
 *
 * Prints the value of the external variable.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    printf("%d", a);

    return 0;
}