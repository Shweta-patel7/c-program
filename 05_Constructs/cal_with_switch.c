/**
 * @file calculator.c
 * @brief Simple calculator using the switch statement.
 *
 * This program performs basic arithmetic operations on two
 * floating-point numbers. The user selects an operator and
 * enters two numbers, after which the corresponding operation
 * is performed.
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
 * - Reads an arithmetic operator from the user.
 * - Reads two floating-point numbers.
 * - Uses a `switch` statement to perform the selected operation.
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
    switch (op)
    {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
            {
                printf("Result = %.2f\n", num1 / num2);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid operator.\n");
            break;
    }

    return 0;
}