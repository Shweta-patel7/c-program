/**
 * @file sum_product_pointer.c
 * @brief Demonstrates returning multiple values using pointer parameters.
 *
 * This program calculates the sum and product of two integers and
 * returns both results using pointers (pass by reference).
 */

#include <stdio.h>

/**
 * @brief Calculates sum and product of two numbers.
 *
 * This function stores results in memory locations provided via pointers.
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
 * Takes two inputs from the user, calls calculate() function,
 * and prints the computed sum and product.
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
     * Function call using addresses to get multiple outputs
     */
    calculate(num1, num2, &sum, &product);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}