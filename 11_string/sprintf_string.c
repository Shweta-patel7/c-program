/**
 * @file sprintf_example.c
 * @brief Demonstrates the use of sprintf() function in C.
 *
 * This program shows how to format different data types such as
 * strings, integers, and floating-point values into a character array
 * using the sprintf() function.
 */

#include <stdio.h>

/**
 * @brief Main function.
 *
 * Creates variables of different data types and uses sprintf() to
 * store formatted output into a string buffer. The formatted string
 * is then displayed using printf().
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    char str[100];
    char name[] = "abcdef";
    int age = 20;
    float marks = 85.5;

    /**
     * @brief Format data into a string.
     *
     * sprintf() writes formatted data into the character array str.
     * Format specifiers used:
     * - %s : string
     * - %d : integer
     * - %.2f : floating-point value with two decimal places
     */
    sprintf(str, "Name: %s, Age: %d, Marks: %.2f", name, age, marks);

    /**
     * @brief Display the formatted string.
     */
    printf("Formatted string: %s\n", str);

    return 0;
}