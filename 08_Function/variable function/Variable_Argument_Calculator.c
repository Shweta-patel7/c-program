/**
 * @file calculator.c
 * @brief Performs arithmetic operations using a variadic function.
 *
 * This program demonstrates how a variable number of integer arguments
 * can be processed using the stdarg.h library.
 *
 * The calculator() function supports:
 * - Addition (+)
 * - Subtraction (-)
 * - Multiplication (*)
 */

#include <stdio.h>
#include <stdarg.h>

/**
 * @brief Performs a selected arithmetic operation on multiple integers.
 *
 * The function accepts an operator, the number of operands, and a
 * variable number of integer arguments.
 *
 * @param op Operation to perform.
 *           '+' for addition.
 *           '-' for subtraction.
 *           '*' for multiplication.
 *
 * @param num Number of integer operands.
 *
 * @param ... Variable number of integer operands.
 *
 * @return Nothing.
 */
void calculator(char op, int num, ...)
{
    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * @brief Stores the result of addition.
     */
    int add = 0;

    /**
     * @brief Stores the result of subtraction.
     */
    int sub;

    /**
     * @brief Stores the result of multiplication.
     */
    int mul = 1;

    /**
     * @brief Variable argument list.
     */
    va_list vlist;

    /**
     * Initialize the variable argument list.
     *
     * The last named parameter is 'num'.
     */
    va_start(vlist, num);

    /**
     * Perform addition.
     */
    if (op == '+')
    {
        for (i = 0; i < num; i++)
        {
            add += va_arg(vlist, int);
        }

        printf("Sum of numbers: %d\n", add);
    }

    /**
     * Perform subtraction.
     *
     * The first number is used as the initial value.
     * Remaining numbers are subtracted from it.
     */
    else if (op == '-')
    {
        sub = va_arg(vlist, int);

        for (i = 1; i < num; i++)
        {
            sub -= va_arg(vlist, int);
        }

        printf("Subtraction of numbers: %d\n", sub);
    }

    /**
     * Perform multiplication.
     */
    else if (op == '*')
    {
        for (i = 0; i < num; i++)
        {
            mul *= va_arg(vlist, int);
        }

        printf("Multiplication of numbers: %d\n", mul);
    }

    /**
     * Handle an invalid operator.
     */
    else
    {
        printf("Invalid operator\n");
    }

    /**
     * Clean up the variable argument list.
     */
    va_end(vlist);
}

/**
 * @brief Main function of the program.
 *
 * Calls the calculator() function with different operators
 * and different numbers of integer operands.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    /**
     * Perform addition of 10 numbers.
     */
    calculator('+', 10,
               5, 6, 51, 32, 31,
               78, 86, 6, 32, 13);

    /**
     * Perform multiplication of 5 numbers.
     */
    calculator('*', 5,
               12, 3, 5, 8, 9);

    /**
     * Perform subtraction of 7 numbers.
     */
    calculator('-', 7,
               156, 68, 6, 3, 87, 98, 1);

    return 0;
}