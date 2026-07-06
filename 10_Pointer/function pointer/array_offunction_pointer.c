/**
 * @file calculator_function_pointer.c
 * @brief Simple calculator using function pointers.
 *
 * This program performs basic arithmetic operations (addition,
 * subtraction, multiplication, division) using an array of
 * function pointers. The user selects an operation, and the
 * corresponding function is executed.
 */

#include <stdio.h>

/**
 * @brief Adds two numbers.
 * @param a First operand
 * @param b Second operand
 * @return Sum of a and b
 */
float add(float a, float b)
{
    return a + b;
}

/**
 * @brief Subtracts second number from first.
 * @param a First operand
 * @param b Second operand
 * @return Difference of a and b
 */
float sub(float a, float b)
{
    return a - b;
}

/**
 * @brief Multiplies two numbers.
 * @param a First operand
 * @param b Second operand
 * @return Product of a and b
 */
float mul(float a, float b)
{
    return a * b;
}

/**
 * @brief Divides first number by second.
 *
 * If the second number is zero, an error message is displayed
 * and 0 is returned.
 *
 * @param a First operand
 * @param b Second operand
 * @return Quotient of a and b, or 0 if division by zero occurs
 */
float div(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero is not allowed\n");
        return 0;
    }
}

/**
 * @brief Main function of the program.
 *
 * Takes two numbers and a user choice, then performs the selected
 * arithmetic operation using a function pointer array.
 *
 * @return 0 on successful execution
 */
int main()
{
    float a, b;
    int choice;

    /**
     * @brief Array of function pointers for arithmetic operations.
     * Index mapping:
     * 0 -> add
     * 1 -> sub
     * 2 -> mul
     * 3 -> div
     */
    float (*p[])(float, float) = {add, sub, mul, div};

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n0. Addition");
    printf("\n1. Subtraction");
    printf("\n2. Multiplication");
    printf("\n3. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice <= 3)
    {
        printf("Result = %.2f\n", p[choice](a, b));
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}