/**
 * @file postfix.c
 * @brief Converts an infix expression into a postfix expression using a stack.
 *
 * This program uses a character stack to convert an expression
 * containing operators +, -, *, / and % from infix notation
 * to postfix notation.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int top = -1;
char arr[SIZE];

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
 */
void push(char a)
{
    if (isfull())
    {
        printf("stack overflow\n");

        return;
    }

    top++;
    arr[top] = a;
}

/**
 * @brief Removes and returns the top character from the stack.
 *
 * @return The character removed from the stack.
 * @return '\0' if the stack is empty.
 */
char pop()
{
    char a;

    if (isempty())
    {
        printf("stack underflow\n");

        return '\0';
    }

    a = arr[top];

    top--;

    return a;
}

/**
 * @brief Determines the precedence of an operator.
 *
 * Higher return values indicate higher operator precedence.
 *
 * @param c Operator whose precedence is to be checked.
 *
 * @return 2 for *, / and % operators.
 * @return 1 for + and - operators.
 * @return 0 for other characters.
 */
int precedence(char c)
{
    if (c == '*' || c == '/' || c == '%')
    {
        return 2;
    }

    else if (c == '+' || c == '-')
    {
        return 1;
    }

    return 0;
}

/**
 * @brief Checks whether a character is an operator.
 *
 * @param c Character to be checked.
 *
 * @return 1 if the character is an operator,
 *         otherwise 0.
 */
int isoperater(char c)
{
    if (c == '/' || c == '*' || c == '%' || c == '+' || c == '-')
    {
        return 1;
    }

    return 0;
}

/**
 * @brief Converts an infix expression into postfix notation.
 *
 * Operands are directly copied to the postfix expression.
 * Operators are temporarily stored in the stack according
 * to their precedence.
 *
 * @param a Input infix expression.
 * @param post Output postfix expression.
 */
void postfix(char *a, char *post)
{
    int i, j = 0;

    for (i = 0; a[i] != '\0'; i++)
    {
        if (!isoperater(a[i]))
        {
            post[j] = a[i];

            j++;
        }

        else
        {
            while (!isempty() &&
                   precedence(arr[top]) >= precedence(a[i]))
            {
                post[j] = pop();

                j++;
            }

            push(a[i]);
        }
    }

    while (!isempty())
    {
        post[j] = pop();

        j++;
    }

    post[j] = '\0';
}

/**
 * @brief Program entry point.
 *
 * Reads an infix expression from the user, converts it
 * to postfix notation and displays the result.
 *
 * @return 0 on successful execution.
 */
int main()
{
    char str[50];
    char post[50];

    printf("enter expression : ");

    scanf(" %49[^\n]", str);

    postfix(str, post);

    printf("postfix expression : %s\n", post);

    return 0;
}