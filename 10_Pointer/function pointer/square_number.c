/**
 * @file square_function_pointer.c
 * @brief Demonstrates function pointer usage for calculating square.
 *
 * This program calculates the square of a number using a function pointer.
 * The function pointer is assigned to a function and then used to
 * call that function indirectly.
 */

#include <stdio.h>

/**
 * @brief Computes square of an integer.
 *
 * @param a Input integer
 * @return Square of a
 */
int squ(int a)
{
    return a * a;
}

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user, assigns a function pointer
 * to the square function, and prints the result using the pointer.
 *
 * @return 0 on successful execution
 */
int main()
{
    int x;

    printf("Enter number for square: ");
    scanf("%d", &x);

    /**
     * @brief Function pointer to squ().
     */
    int (*ptr)(int) = squ;

    printf("Square = %d\n", ptr(x));

    return 0;
}