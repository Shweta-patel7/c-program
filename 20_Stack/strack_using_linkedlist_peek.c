#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Structure representing a node of the stack.
 *
 * Each node contains an integer data value and a pointer
 * to the next node in the stack.
 */
struct node 
{
    int data;
    struct node *next;
};

/**
 * @brief Pointer to the top node of the stack.
 */
struct node *top = NULL;

/**
 * @brief Checks whether the stack is empty.
 *
 * @return 1 if the stack is empty, otherwise 0.
 */
int isempty ()
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

/**
 * @brief Pushes a new element onto the stack.
 *
 * A new node is dynamically allocated and inserted
 * at the top of the stack.
 *
 * @param data The integer value to be pushed onto the stack.
 *
 * @return Pointer to the new top of the stack.
 */
struct node * push (int data)
{
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    if(n == NULL)
    {
        printf("stack overflow\n");
    }

    n->data = data;
    n->next = top;
    top = n;
    return top;
}

/**
 * @brief Removes the top element from the stack.
 *
 * The top node is removed from the stack and its memory
 * is released using free().
 *
 * @return The data value removed from the stack.
 *         Returns -1 if the stack is empty.
 */
int pop ()
{
    int data;
    struct node *n = top;

    if (isempty())
    {
        printf("stack underflow\n");
        return -1;
    }
    
    top = top->next;
    data = n->data;
    free(n);
    return data;
}

/**
 * @brief Returns the element at a given position in the stack.
 *
 * Position 1 represents the topmost element of the stack.
 *
 * @param position Position of the element to be accessed.
 *
 * @return The data value at the specified position.
 *         Returns -1 if the position is invalid.
 */
int peek (int position)
{
    struct node *ptr = top;
    for (int i = 0; (i < position - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    return -1;
    
}

/**
 * @brief Displays all elements of the stack.
 *
 * The elements are displayed starting from the top
 * of the stack down to the bottom.
 */
void display ()
{
    if (isempty())
    {
        printf("stack underflow\n");
        return;
    }
    
    struct node *ptr = top;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    
}

/**
 * @brief Main function demonstrating stack operations.
 *
 * Demonstrates pushing elements, displaying the stack,
 * popping an element, and accessing an element using peek.
 *
 * @return 0 on successful program execution.
 */
int main()
{
    top = push(12);
    top = push(7);
    display();
    printf("\npop : %d\n", pop());
    top = push(54);
    top = push(78);
    top = push(21);
    display();
    printf("\npeek : %d\n", peek(3));
    

}