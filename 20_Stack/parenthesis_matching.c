#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

/**
 * @brief Stores the current top position of the stack.
 */
int top = -1;

/**
 * @brief Character stack used to store parentheses.
 */
char par[SIZE];

/**
 * @brief Checks whether the stack is empty.
 *
 * @return 1 if the stack is empty, otherwise 0.
 */
int isempty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

/**
 * @brief Checks whether the stack is full.
 *
 * @return 1 if the stack is full, otherwise 0.
 */
int isfull()
{
    if (top == SIZE - 1)
    {
        return 1;
    }
    return 0;
}

/**
 * @brief Pushes a character onto the stack.
 *
 * @param a Character to be pushed onto the stack.
 *
 * @note Prints "stack overflow" if the stack is full.
 */
void push(char a)
{
    if (isfull())
    {
        printf("stack overflow\n");
    }

    top++;
    par[top] = a;
}

/**
 * @brief Removes the top element from the stack.
 *
 * @note Prints "stack underflow" if the stack is empty.
 */
void pop()
{
    if (isempty())
    {
        printf("stack underflow\n");
    }

    top--;
}

/**
 * @brief Checks the balance of parentheses in an expression.
 *
 * Scans the expression character by character. An opening
 * parenthesis is pushed onto the stack and a closing parenthesis
 * causes an element to be popped from the stack.
 *
 * @param e Pointer to the expression string.
 *
 * @return Currently no value is explicitly returned.
 */
int parenthesis(char *e)
{
    for (int i = 0; e[i] != '\0'; i++)
    {
        if (e[i] == '(')
        {
            push('(');
        }
        else if (e[i] == ')')
        {
            pop();
        }
        else;
    }
}

/**
 * @brief Program entry point.
 *
 * Reads an expression from the user, checks its parentheses,
 * and displays whether the parentheses are equal.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    char exp[SIZE];

    printf("enter expration : ");

    scanf(" %19[^\n]", exp);

    parenthesis(exp);

    if (isempty())
    {
        printf("parenthesis is equal\n");
    }
    else
    {
        printf("parenthesis is not equal\n");
    }
}