#include<stdio.h>
#include<stdlib.h>

/**
 * @struct stack
 * @brief Represents a stack using dynamically allocated memory.
 *
 * This structure contains the size of the stack, the current top
 * position, and a dynamically allocated array for storing elements.
 */
struct stack
{
    int size; /**< Maximum number of elements the stack can hold. */
    int top;  /**< Index of the top element in the stack. */
    int *arr; /**< Pointer to dynamically allocated stack array. */
};

/**
 * @brief Checks whether the stack is empty.
 *
 * The stack is considered empty when top is equal to -1.
 *
 * @param ptr Pointer to the stack structure.
 * @return 1 if the stack is empty, otherwise 0.
 */
int isempty (struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    
    return 0;
}

/**
 * @brief Checks whether the stack is full.
 *
 * The stack is considered full when top reaches size - 1.
 *
 * @param ptr Pointer to the stack structure.
 * @return 1 if the stack is full, otherwise 0.
 */
int isfull (struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    
    return 0;
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates a stack structure and its array,
 * initializes the stack, inserts elements into the stack,
 * and checks whether the stack is empty or full.
 *
 * @return 0 on successful program execution.
 */
int main()
{
    int i;
    struct stack *s;
    
    s = malloc(sizeof(struct stack));
    
    s->size = 10;
    s->top = -1;
    s->arr = (int *) malloc (s->size * sizeof(int));

    if (isempty(s))
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is not empty\n");
    }

    s->arr[0] = 54;
    s->top++;
    
    s->arr[1] = 54;
    s->top++;
    
    s->arr[2] = 54;
    s->top++;
    
    s->arr[3] = 54;
    s->top++;
    
    s->arr[4] = 54;
    s->top++;
    
    if (isempty(s))
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack is not empty\n");
    }

    if (isfull(s))
    {
        printf("stack is full\n");
    }
    else
    {
        printf("stack is not full\n");
    }
    
    
    s->arr[5] = 54;
    s->top++;
    
    s->arr[6] = 54;
    s->top++;
    
    s->arr[7] = 54;
    s->top++;
    
    s->arr[8] = 54;
    s->top++;
    
    s->arr[9] = 54;
    s->top++;
    
    if (isfull(s))
    {
        printf("stack is full\n");
    }
    else
    {
        printf("stack is not full\n");
    }
    
}