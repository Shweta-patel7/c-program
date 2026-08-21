/**
 * @file parenthesis.c
 * @brief Checks whether (), [] and {} brackets are properly matched.
 *
 * This program uses a stack to check balanced parentheses,
 * square brackets and curly brackets in an expression.
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

/** Top index of the stack. */
int top = -1;

/** Stack used to store opening brackets. */
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
 * @param a Character to be pushed into the stack.
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
 * @return The top character if the stack is not empty.
 * @return '\0' if the stack is empty.
 */
char pop()
{
    if (isempty())
    {
        return '\0';
    }

    return arr[top--];
}

/**
 * @brief Checks whether brackets in an expression are properly matched.
 *
 * The function checks (), [] and {} brackets using a stack.
 *
 * @param ptr Pointer to the expression string.
 */
void parenthesis(char *ptr)
{
    char a;

    for (int i = 0; ptr[i] != '\0'; i++)
    {
        /* Opening brackets */

        if (ptr[i] == '(')
        {
            push('(');
        }

        else if (ptr[i] == '[')
        {
            push('[');
        }

        else if (ptr[i] == '{')
        {
            push('{');
        }

        /* Closing brackets */

        else if (ptr[i] == ')')
        {
            if (isempty())
            {
                printf("parenthesis not matching\n");
                return;
            }

            a = pop();

            if (a != '(')
            {
                printf("parenthesis not matching\n");
                return;
            }
        }

        else if (ptr[i] == ']')
        {
            if (isempty())
            {
                printf("parenthesis not matching\n");
                return;
            }

            a = pop();

            if (a != '[')
            {
                printf("parenthesis not matching\n");
                return;
            }
        }

        else if (ptr[i] == '}')
        {
            if (isempty())
            {
                printf("parenthesis not matching\n");
                return;
            }

            a = pop();

            if (a != '{')
            {
                printf("parenthesis not matching\n");
                return;
            }
        }
    }

    if (top == -1)
    {
        printf("parenthesis matching\n");
    }

    else
    {
        printf("parenthesis not matching\n");
    }
}

/**
 * @brief Entry point of the program.
 *
 * Reads an expression from the user and checks whether
 * its brackets are properly matched.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    char exp[SIZE];

    printf("enter expression : ");

    scanf(" %19[^\n]", exp);

    parenthesis(exp);

    return 0;
}