/**
 * @file multiplication_table.c
 * @brief Generates multiplication table of a given number.
 *
 * This program prints the multiplication table of a number from 1 to 10
 * using a for loop.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a number from the user and prints its multiplication table
 * from 1 to 10.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, out;

    printf("Enter number for table: ");
    scanf("%d", &n);

    /**
     * @brief Generate multiplication table
     */
    for (i = 1; i <= 10; i++)
    {
        out = n * i;
        printf("%d x %d = %d\n", n, i, out);
    }

    return 0;
}