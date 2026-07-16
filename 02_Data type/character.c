/**
 * @file ascii_character.c
 * @brief Demonstrates printing ASCII characters using character variables.
 *
 * This program stores ASCII values in character variables and prints
 * the corresponding characters using the %c format specifier.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares two character variables.
 * - Assigns ASCII values to them.
 * - Prints the corresponding ASCII characters.
 *
 * ASCII values:
 * - 53 represents the character '5'.
 * - 68 represents the character 'D'.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Character variable storing ASCII value 53 */
    char var = 53;

    /** Character variable storing ASCII value 68 */
    char var2 = 68;

    /* Print corresponding ASCII characters */
    printf("%c", var);
    printf("%c", var2);

    return 0;
}