/**
 * @file simple_calculator.c
 * @brief Implements a basic calculator using functions.
 *
 * This program performs addition, subtraction, multiplication,
 * and division based on user input using separate functions.
 */

#include <stdio.h>

/**
 * @brief Adds two floating-point numbers.
 * @param a First number
 * @param b Second number
 * @return Sum of a and b
 */
float add(float a, float b)
{
    return (a + b);
}

/**
 * @brief Subtracts two floating-point numbers.
 * @param c First number
 * @param d Second number
 * @return Difference of c and d
 */
float sub(float c, float d)
{
    return (c - d);
}

/**
 * @brief Multiplies two floating-point numbers.
 * @param e First number
 * @param f Second number
 * @return Product of e and f
 */
float mul(float e, float f)
{
    return (e * f);
}

/**
 * @brief Divides two floating-point numbers.
 * @param g Numerator
 * @param h Denominator
 * @return Quotient of g and h (0 if division by zero)
 */
float div(float g, float h)
{
    if (h != 0)
    {
        return (g / h);
    }
    else
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

/**
 * @brief Main function of the program.
 *
 * Takes two numbers and an operator from the user and performs
 * the corresponding arithmetic operation.
 *
 * @return 0 on successful execution
 */
int main()
{
    float x, y;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    if (op == '+')
    {
        printf("Sum of %.2f + %.2f = %.2f\n", x, y, add(x, y));
    }
    else if (op == '-')
    {
        printf("Sub of %.2f - %.2f = %.2f\n", x, y, sub(x, y));
    }
    else if (op == '*')
    {
        printf("Mul of %.2f * %.2f = %.2f\n", x, y, mul(x, y));
    }
    else if (op == '/')
    {
        printf("Div of %.2f / %.2f = %.2f\n", x, y, div(x, y));
    }
    else
    {
        printf("Invalid operator.\n");
    }

    return 0;
}