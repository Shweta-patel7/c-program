/**
 * @file circular_queue.c
 * @brief Implementation of a circular queue using dynamic memory allocation.
 *
 * This program implements a circular queue using an array.
 * It supports enqueue, dequeue, and display operations.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct queue
 * @brief Represents a circular queue.
 *
 * The structure stores the queue size, front and back positions,
 * and a dynamically allocated array for storing elements.
 */
struct queue
{
    /** @brief Maximum number of elements that can be stored. */
    int size;

    /** @brief Index representing the front position of the queue. */
    int front;

    /** @brief Index representing the back position of the queue. */
    int back;

    /** @brief Dynamically allocated array used to store queue elements. */
    int *arr;
};


/**
 * @brief Inserts an element into the circular queue.
 *
 * Checks whether the queue is full before inserting the element.
 * The back index is updated using modulo operation to implement
 * circular behavior.
 *
 * @param q Pointer to the queue structure.
 * @param data Data to be inserted into the queue.
 */
void enqueue (struct queue *q, int data)
{
    if ((q->back + 1 ) % q->size == q->front)
    {
        printf("queue overflow\n");
    }
    q->back = (q->back +1) % q->size;
    q->arr[q->back] = data; 
    printf("enqueue : %d\n", q->arr[q->back]);
}


/**
 * @brief Removes an element from the circular queue.
 *
 * Checks whether the queue is empty before removing an element.
 * The front index is updated using modulo operation.
 *
 * @param q Pointer to the queue structure.
 *
 * @return The element removed from the queue.
 */
int dequeue (struct queue *q)
{
    if (q->back == q->front)
    {
        printf("queue underflow\n");
    }

    q->front = (q->front +1) % q->size;
    int data = q->arr[q->front];
    return data; 
    
}


/**
 * @brief Displays all elements currently present in the queue.
 *
 * Traverses the circular queue from the front position to the
 * back position and prints each element.
 *
 * @param q Pointer to the queue structure.
 */
void display (struct queue *q)
{
    if (q->front == q->back)
    {
        printf("queue underflow\n");
    }
    
    for (int i = q->front + 1; i != q->back; i = (i +1)% q->size)
    {
        printf("%d\t", q->arr[i]);
    }
    printf("%d\n", q->arr[q->back]);
    
    
    
}


/**
 * @brief Main function of the program.
 *
 * Creates and initializes a circular queue, performs several
 * enqueue and dequeue operations, and displays the queue contents.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    struct queue q;
    q.size = 10;
    q.front = q.back = 0;
    q.arr = (int *)malloc (q.size * sizeof(int));

    enqueue(&q,21);
    enqueue(&q,67);
    enqueue(&q,34);
    enqueue(&q,16);
    enqueue(&q,49);
    enqueue(&q,94);
    enqueue(&q,79);
    display(&q);
    printf("dequeue : %d\n",dequeue(&q));
    printf("dequeue : %d\n",dequeue(&q));
    printf("dequeue : %d\n",dequeue(&q));
    display(&q);
    enqueue(&q,9);
    enqueue(&q,7);
    enqueue(&q,2);
    enqueue(&q,8);
    enqueue(&q,4);
    printf("dequeue : %d\n",dequeue(&q));
    printf("dequeue : %d\n",dequeue(&q));
    display(&q);
}