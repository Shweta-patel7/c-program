/**
 * @file callback_functions.c
 * @brief Demonstrates function pointers (callback functions) in C.
 *
 * This program performs addition and subtraction using functions
 * passed as arguments to another function via function pointers.
 */

#include <stdio.h>

/**
 * @brief Computes and prints the sum of two integers.
 *
 * @param a First integer
 * @param b Second integer
 * @return Not used (should ideally be void)
 */
int sum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

/**
 * @brief Computes and prints the difference of two integers.
 *
 * @param a First integer
 * @param b Second integer
 * @return Not used (should ideally be void)
 */
int sub(int a, int b)
{
    printf("Sub = %d\n", a - b);
}

/**
 * @brief Calls a function using a function pointer.
 *
 * This function demonstrates callback behavior by calling
 * the function passed as an argument.
 *
 * @param x First integer
 * @param y Second integer
 * @param fun Function pointer to operation function
 */
void call(int x, int y, int (*fun)(int, int))
{
    fun(x, y);
}

/**
 * @brief Main function of the program.
 *
 * Takes input from the user and demonstrates function pointer calls
 * for addition and subtraction.
 *
 * @return 0 on successful execution
 */
int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    call(x, y, sum);
    call(x, y, sub);

    return 0;
}