/**
 * @file multiple_return_pointer.c
 * @brief Demonstrates returning multiple values using pointers in C.
 *
 * This program calculates both the sum and product of two integers
 * and returns the results using pointer parameters.
 */

#include <stdio.h>

/**
 * @brief Calculates sum and product of two integers.
 *
 * This function uses pointer parameters to store multiple results.
 *
 * @param a First integer
 * @param b Second integer
 * @param sum Pointer to store sum of a and b
 * @param product Pointer to store product of a and b
 */
void calculate(int a, int b, int *sum, int *product)
{
    *sum = a + b;
    *product = a * b;
}

/**
 * @brief Main function of the program.
 *
 * Takes user input, calls calculate() function, and displays
 * both sum and product of the given numbers.
 *
 * @return 0 on successful execution
 */
int main()
{
    int num1, num2;
    int sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    /**
     * Function call using addresses to receive multiple outputs
     */
    calculate(num1, num2, &sum, &product);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}