/**
 * @file string_input_output.c
 * @brief Demonstrates basic string input and output in C using scanf() and printf().
 *
 * This program reads a string using scanf() and displays it using printf().
 * It also contains a commented example showing the use of gets() for input.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a string from the user using scanf() and prints it.
 * A second example using gets() is provided in comments.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /** Character array to store input string using scanf(). */
    char string[30];

    /** Another character array used in commented example. */
    char name[40];

    printf("Enter string: ");
    scanf("%s", string);

    printf("Print by printf and scanf : %s\n", string);

    /*
    Example using gets() (deprecated and unsafe):

    printf("Enter your name: ");
    gets(name);
    printf("print by gets and printf = %s\n", name);
    */

    return 0;
}