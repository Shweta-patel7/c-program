/**
 * @file calculator.c
 * @brief Demonstrates a calculator using a structure of function pointers.
 *
 * This program demonstrates how function pointers can be stored inside
 * a structure and used as a dispatch table for different calculator
 * operations such as addition, subtraction, multiplication, and division.
 */

#include <stdio.h>

/**
 * @struct cal_t
 * @brief Calculator dispatch table containing function pointers.
 *
 * Each member of this structure points to a different mathematical
 * operation. The structure allows the required operation to be selected
 * and called through the corresponding function pointer.
 */
typedef struct
{
    /**
     * @brief Function pointer for addition.
     *
     * @param a First integer operand.
     * @param b Second integer operand.
     * @return Sum of a and b.
     */
    int (*add)(int, int);

    /**
     * @brief Function pointer for subtraction.
     *
     * @param a First integer operand.
     * @param b Second integer operand.
     * @return Difference between a and b.
     */
    int (*sub)(int, int);

    /**
     * @brief Function pointer for multiplication.
     *
     * @param a First integer operand.
     * @param b Second integer operand.
     * @return Product of a and b as a float.
     */
    float (*mul)(int, int);

    /**
     * @brief Function pointer for division.
     *
     * @param a First integer operand.
     * @param b Second integer operand.
     * @return Result of a divided by b as a float.
     * @return 0.0f if b is zero.
     */
    float (*div)(int, int);

} cal_t;

/**
 * @brief Adds two integers.
 *
 * @param a First integer operand.
 * @param b Second integer operand.
 * @return Sum of a and b.
 */
int addition(int a, int b)
{
    return a + b;
}

/**
 * @brief Subtracts the second integer from the first.
 *
 * @param a First integer operand.
 * @param b Second integer operand.
 * @return Difference between a and b.
 */
int subtraction(int a, int b)
{
    return a - b;
}

/**
 * @brief Multiplies two integers.
 *
 * @param a First integer operand.
 * @param b Second integer operand.
 * @return Product of a and b as a float.
 */
float multiplication(int a, int b)
{
    return (float)(a * b);
}

/**
 * @brief Divides the first integer by the second.
 *
 * @param a First integer operand.
 * @param b Second integer operand.
 * @return Result of a divided by b as a float.
 * @return 0.0f if b is zero.
 */
float divide(int a, int b)
{
    if (b != 0)
    {
        return (float)a / b;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0.0f;
    }
}

/**
 * @brief Main function of the calculator program.
 *
 * Reads two integers from the user, asks the user to select
 * a mathematical operation, and calls the corresponding
 * function through the function pointer stored in the cal_t structure.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    int a, b;

    /**
     * @brief Enumeration of available calculator operations.
     */
    enum op
    {
        ADD = 1,
        SUB = 2,
        MUL = 3,
        DIV = 4,
        EXIT = 0
    };

    enum op f;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /**
     * @brief Calculator dispatch table.
     *
     * Each function pointer is initialized with the address
     * of its corresponding mathematical function.
     */
    cal_t value =
    {
        .add = addition,
        .sub = subtraction,
        .mul = multiplication,
        .div = divide
    };

    printf("\nWhat to do?\n");
    printf("1 for add\n");
    printf("2 for sub\n");
    printf("3 for mul\n");
    printf("4 for div\n");
    printf("0 for exit\n");

    scanf("%d", &f);

    /**
     * @brief Select and execute the requested calculator operation.
     */
    switch (f)
    {
        case ADD:
            printf("%d + %d = %d\n",
                   a, b, value.add(a, b));
            break;

        case SUB:
            printf("%d - %d = %d\n",
                   a, b, value.sub(a, b));
            break;

        case MUL:
            printf("%d * %d = %.2f\n",
                   a, b, value.mul(a, b));
            break;

        case DIV:
            if (b != 0)
            {
                printf("%d / %d = %.2f\n",
                       a, b, value.div(a, b));
            }
            else
            {
                printf("Error: Division by zero\n");
            }
            break;

        case EXIT:
            printf("Exit\n");
            return 0;

        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}