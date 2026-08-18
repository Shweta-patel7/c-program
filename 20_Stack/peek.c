/**
 * @file stack.c
 * @brief Array implementation of a stack with push, pop, peek and display operations.
 */

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

/**
 * @brief Stores the index of the top element in the stack.
 *
 * A value of -1 indicates that the stack is empty.
 */
int top = -1;

/**
 * @brief Array used to store stack elements.
 */
int arr[SIZE];

/**
 * @brief Checks whether the stack is empty.
 *
 * @return 1 if the stack is empty, otherwise 0.
 */
int isempty ()
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
int isfull ()
{
    if (top == SIZE - 1)
    {
        return 1;
    }
    
    return 0;
}

/**
 * @brief Pushes an element onto the stack.
 *
 * @param data Value to be inserted into the stack.
 * @return void
 */
void push (int data)
{
    if (isfull())
    {
        printf("stack is full\n");
        return;
    }

    top++;
    arr[top] = data;
    
}

/**
 * @brief Removes the top element from the stack.
 *
 * @return The removed element. Returns 0 if the stack is empty.
 */
int pop ()
{
    if (isempty())
    {
        printf("stack is empty\n");
        return 0;
    }

    int data = arr[top];
    top--;
    return data;
}

/**
 * @brief Returns an element from a specified position in the stack.
 *
 * Position 1 represents the top element, position 2 represents
 * the element immediately below the top, and so on.
 *
 * @param position Position of the element from the top.
 * @return The element at the specified position.
 */
int peek (int position)
{
    if (isempty())
    {
        printf("stack is empty\n");
    }

    int data = arr[top - position + 1];
    return data;
    
}

/**
 * @brief Displays all elements currently present in the stack.
 *
 * The elements are displayed from the bottom of the stack
 * to the top of the stack.
 *
 * @return void
 */
void display ()
{
    int i;
    printf("element of stack are : \n");
    if (isempty())
    {
        printf("stack is empty\n");
        return;
    }

    for (i = 0; i <= top; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
}

/**
 * @brief Defines operation codes for the stack menu.
 */
enum {PUSH = 1, POP = 2, PEEK = 3, PRINT = 4, EXIT = 0};

/**
 * @brief Main function of the stack program.
 *
 * Provides a menu-driven interface for performing push, pop,
 * peek, display and exit operations.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    int p, a;
    int op;
    while(1)
    {
        printf("\nenter 1 for push\n");
        printf("enter 2 for pop\n");
        printf("enter 3 for peek\n");
        printf("enter 4 for print\n");
        printf("enter 0 for exit\n");
        scanf("%d", &op);
        switch (op)
        {
        case PUSH:
            printf("enter value for push : ");
            scanf("%d", &a);
            push(a);
            break;
    
        case POP: 
            printf("pop %d\n", pop());
            break;

        case PEEK: 
            printf("enter position : ");
            scanf("%d", &p);
            printf("peek %d\n", peek(p));
            break;

        case PRINT:
            display();
            break;

        case EXIT:
            return 0;
            break;

        default: 
            printf("enter valid number\n");
            break;    

        }
    }

}