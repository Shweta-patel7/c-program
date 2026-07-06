/**
 * @file function_pointer_calculator.c
 * @brief Simple calculator using function pointers.
 *
 * This program performs basic arithmetic operations (addition,
 * subtraction, multiplication) using a function pointer.
 * The user selects an operation, and the corresponding function
 * is executed through the pointer.
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
 * @brief Subtracts second integer from first.
 *
 * @param a First integer
 * @param b Second integer
 * @return Difference of a and b
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * @brief Multiplies two integers.
 *
 * @param a First integer
 * @param b Second integer
 * @return Product of a and b
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * @brief Main function of the program.
 *
 * Takes two numbers and a user choice, assigns the appropriate
 * function to a function pointer, and executes it.
 *
 * @return 0 on successful execution, 1 for invalid choice
 */
int main()
{
    int x, y, choice;

    /**
     * @brief Function pointer for arithmetic operations.
     */
    int (*op)(int, int);

    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);

    printf("\n1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        op = add;
    }
    else if (choice == 2)
    {
        op = sub;
    }
    else if (choice == 3)
    {
        op = mul;
    }
    else
    {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Result = %d\n", op(x, y));

    return 0;
}