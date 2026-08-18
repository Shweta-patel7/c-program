#include<stdio.h>
#include<stdlib.h>

# define SIZE 10

/**
 * @brief Stores the current top position of the stack.
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
 * This operation follows the LIFO (Last In, First Out) principle.
 *
 * @param data The integer value to be inserted into the stack.
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
 * The function checks whether the stack is empty before removing
 * an element.
 *
 * @return The removed element from the top of the stack.
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
    }

    for (i = 0; i <= top; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    
}

/**
 * @brief Main function of the stack program.
 *
 * Demonstrates push, pop, and display operations on the stack.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int p;
    
    push(10);
    push(20);
    push(65);
    
    display();
    
    p = pop();
    printf("\npop : %d", p);
    
    p = pop();
    printf("\npop : %d\n", p);
    
    display();
    
    p = pop();
    printf("\npop : %d\n", p);
    
    p = pop();
    printf("\npop : %d\n", p);
    
    display();
}