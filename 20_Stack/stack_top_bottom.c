/**
 * @file stack.c
 * @brief Array implementation of a stack.
 *
 * This program implements a stack using an array and provides
 * operations to check whether the stack is empty or full,
 * push and pop elements, display the stack, and access the
 * topmost and bottommost elements.
 */

#include<stdio.h>
#include<stdlib.h>

# define SIZE 10

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
 * @brief Adds an element to the top of the stack.
 *
 * @param data Value to be inserted into the stack.
 * @return void
 */
void push (int data)
{
    if (isfull())
    {
        printf("stack is full\n");
    }

    else
    {
        top++;
        arr[top] = data;
    }
    
}

/**
 * @brief Removes the top element from the stack.
 *
 * @return The removed element from the stack.
 */
int pop ()
{
    int data;
    if (isempty())
    {
        printf("stack is empty\n");
    }

    else
    {
        data = arr[top];
        top--;   
    }
    return data;
}

/**
 * @brief Displays all elements present in the stack.
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
    }

    for (i = 0; i <= top; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}

/**
 * @brief Returns the topmost element of the stack.
 *
 * @return The element currently at the top of the stack.
 */
int topmost ()
{
    int data = arr[top];
    return data;
}

/**
 * @brief Returns the bottommost element of the stack.
 *
 * @return The first element stored in the stack.
 */
int bottommost ()
{
    int data = arr[0];
    return data;
}

/**
 * @brief Main function of the stack program.
 *
 * Demonstrates pushing elements into the stack, displaying
 * the stack, and accessing the topmost and bottommost elements.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    int p;
    
    push(10);
    push(20);
    push(65);
    push(21);
    push(7);
    push(5);
    display();

    printf("\ntop most element : %d\n", topmost());
    printf("bottom most element : %d\n", bottommost());
    
}