/**
 * @file linked_queue.c
 * @brief Implementation of a queue using a singly linked list.
 *
 * This program implements a queue using dynamically allocated
 * linked-list nodes. It provides operations for checking whether
 * the queue is empty, inserting elements, deleting elements,
 * and displaying the queue.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node of the queue.
 *
 * Each node contains an integer data value and a pointer to
 * the next node in the queue.
 */
typedef struct node
{
    /** @brief Data stored in the node. */
    int data;

    /** @brief Pointer to the next node. */
    struct node *next;
} node;


/**
 * @brief Pointer to the front of the queue.
 *
 * The front pointer points to the first node that will be
 * removed during a dequeue operation.
 */
node *f = NULL;


/**
 * @brief Pointer to the back of the queue.
 *
 * The back pointer points to the last node in the queue where
 * new elements are inserted.
 */
node *b = NULL;


/**
 * @brief Checks whether the queue is empty.
 *
 * @return 1 if the queue is empty, otherwise 0.
 */
int isempty ()
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}


/**
 * @brief Inserts an element into the queue.
 *
 * A new node is dynamically allocated and added at the back
 * of the queue.
 *
 * @param data Integer value to be inserted into the queue.
 */
void enqueue (int data)
{
    node *new;
    new = (node *)malloc(sizeof(node));
    if (new == NULL)
    {
        printf("queue is full\n");
    }
    
    new->data = data;
    new->next = NULL;
    if (isempty(f))
    {
        f = b = new;
    }
    b->next = new;
    b = new;
}


/**
 * @brief Removes an element from the front of the queue.
 *
 * The first node is removed from the queue and its memory
 * is released using free().
 *
 * @return The integer value removed from the queue.
 */
int dequeue ()
{
    node *p = f;
    if (isempty())
    {
        printf("queue is empty\n");
    }
    int data = p->data;
    f = f->next;
    free(p);
    return data;
}


/**
 * @brief Displays all elements present in the queue.
 *
 * Traverses the queue from the front node to the last node
 * and prints the data stored in each node.
 */
void display()
{
    node *p = f;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
    
}


/**
 * @brief Main function of the program.
 *
 * Creates a linked-list queue, inserts several elements,
 * displays the queue, removes elements using dequeue(),
 * and displays the remaining elements.
 *
 * @return 0 on successful execution.
 */
int main()
{
    enqueue(12);
    enqueue(98);
    enqueue(54);
    enqueue(21);
    enqueue(87);
    enqueue(56);
    display();
    printf("\ndequeue : %d", dequeue());
    printf("\ndequeue : %d", dequeue());
    printf("\ndequeue : %d\n", dequeue());
    display();
    printf("\ndequeue : %d", dequeue());
    printf("\ndequeue : %d", dequeue());
    printf("\ndequeue : %d\n", dequeue());
    printf("\ndequeue : %d\n", dequeue());
    
}