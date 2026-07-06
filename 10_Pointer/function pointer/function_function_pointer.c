/**
 * @file function_pointer_addition.c
 * @brief Demonstrates function pointer usage for addition.
 *
 * This program shows how a function can be passed as an argument
 * using a function pointer. The function pointer is used to perform
 * addition and display the result.
 */

#include <stdio.h>

/**
 * @brief Adds two integers.
 *
 * @param a First integer
 * @param b Second integer
 * @return Sum of a and b
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @brief Calls a function using a function pointer and prints result.
 *
 * This function receives two integers and a function pointer,
 * executes the function, and prints the returned result.
 *
 * @param x First integer
 * @param y Second integer
 * @param ptr Function pointer to an operation function
 */
void cal(int x, int y, int (*ptr)(int, int))
{
    printf("Result = %d\n", ptr(x, y));
}

/**
 * @brief Main function of the program.
 *
 * Takes user input and demonstrates function pointer usage
 * by calling the addition function through a callback.
 *
 * @return 0 on successful execution
 */
int main()
{
    int x, y;

    printf("Enter values: ");
    scanf("%d %d", &x, &y);

    cal(x, y, add);

    return 0;
}