/**
 * @file stack_linked_list.c
 * @brief Implementation of a stack using a linked list.
 *
 * This program implements stack operations using dynamically
 * allocated linked-list nodes.
 *
 * The stack follows the LIFO (Last In, First Out) principle.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a single node in the stack.
 *
 * @var node::data
 * Stores the integer value of the node.
 *
 * @var node::next
 * Pointer to the next node in the stack.
 */
struct node
{
    int data;
    struct node *next;
};

/**
 * @brief Checks whether the stack is empty.
 *
 * The stack is empty when the top pointer is NULL.
 *
 * @param top Pointer to the top node of the stack.
 * @return 1 if the stack is empty, otherwise 0.
 */
int isempty (struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

/**
 * @brief Checks whether memory is available for another stack node.
 *
 * The function attempts to dynamically allocate memory for one node.
 * If allocation fails, the stack is considered full.
 *
 * @param top Pointer to the top node of the stack.
 * @return 1 if memory allocation fails, otherwise 0.
 */
int isfull (struct node *top)
{
    struct node *ptr; 
    ptr = (struct node *) malloc (sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    free(ptr);
    return 0;
}

/**
 * @brief Pushes a new element onto the stack.
 *
 * A new node is dynamically allocated and inserted at the top
 * of the stack.
 *
 * @param top Pointer to the current top node of the stack.
 * @param data Integer value to be pushed onto the stack.
 * @return Pointer to the new top node of the stack.
 */
struct node * push (struct node *top, int data)
{
    struct node *n;
    n = (struct node *) malloc (sizeof(struct node));
    if (n == NULL)
    {
        printf("stack is full\n");
    }
    n->data = data;
    n->next = top;
    top = n;
}

/**
 * @brief Removes the top element from the stack.
 *
 * The top node is removed from the linked list and its memory
 * is released using free().
 *
 * @param top Pointer to the current top node of the stack.
 * @return Pointer to the new top node of the stack.
 */
struct node * pop (struct node *top)
{
    if (isempty(top))
    {
        printf("stack underflow\n");
    }
    
    struct node *n;
    n = top;
    top = top->next;
    printf("\npop : %d\n", n->data);
    free(n);
    return top;
}

/**
 * @brief Displays all elements currently present in the stack.
 *
 * The elements are displayed starting from the top of the stack
 * and continuing until the end of the linked list.
 *
 * @param top Pointer to the top node of the stack.
 * @return void
 */
void display (struct node *top)
{
    if(isempty(top))
    {
        printf("stack underflow\n");
    }

    while (top != NULL)
    {
        printf("%d\t", top->data);
        top = top->next;
    }
    
}

/**
 * @brief Main function of the linked-list stack program.
 *
 * Demonstrates push, pop, and display operations on a stack
 * implemented using a linked list.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    struct node *top = NULL;
    top = push(top, 25);
    top = push(top, 57);
    display(top);
    top = pop(top);
    display(top);
    top = pop(top);
    top = push(top, 69);
    top = push(top, 54);
    display(top);
    
}