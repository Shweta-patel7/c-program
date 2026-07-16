/**
 * @file calculator_if_else.c
 * @brief Simple calculator using if-else statements.
 *
 * This program performs basic arithmetic operations on two
 * floating-point numbers. The user enters an operator and two
 * numbers, and the corresponding arithmetic operation is
 * performed using an if-else ladder.
 *
 * Supported operations:
 * - Addition (+)
 * - Subtraction (-)
 * - Multiplication (*)
 * - Division (/)
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program performs the following steps:
 * - Reads an arithmetic operator.
 * - Reads two floating-point numbers.
 * - Uses an if-else ladder to determine the requested operation.
 * - Checks for division by zero before performing division.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** First operand */
    float num1;

    /** Second operand */
    float num2;

    /** Arithmetic operator */
    char op;

    /* Read the operator */
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    /* Read the operands */
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    /* Perform the selected operation */
    if (op == '+')
    {
        printf("Result = %.2f\n", num1 + num2);
    }
    else if (op == '-')
    {
        printf("Result = %.2f\n", num1 - num2);
    }
    else if (op == '*')
    {
        printf("Result = %.2f\n", num1 * num2);
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            printf("Result = %.2f\n", num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operator.\n");
    }

    return 0;
}