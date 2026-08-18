/**
 * @file circular_buffer.c
 * @brief Implementation of a circular buffer using an integer array.
 *
 * This program implements a circular FIFO (First In, First Out) buffer
 * using an array. The head index is used for inserting elements and the
 * tail index is used for removing elements.
 *
 * The modulo operator (%) is used to wrap the head and tail indices
 * back to the beginning of the buffer when they reach SIZE.
 */

#include<stdio.h>

#define SIZE 5

/**
 * @brief Circular buffer array.
 */
int buffer[SIZE];

/**
 * @brief Index where the next element will be inserted.
 */
int head = 0;

/**
 * @brief Index where the next element will be removed.
 */
int tail = 0;

/**
 * @brief Number of elements currently present in the buffer.
 */
int count = 0;

/**
 * @brief Adds an element to the circular buffer.
 *
 * The function first checks whether the buffer is full. If it is not
 * full, the data is stored at the current head position. The head is
 * then advanced to the next position using the modulo operator.
 *
 * @param data Integer value to be inserted into the buffer.
 *
 * @return None.
 */
void enqueue (int data)
{
    if (count == SIZE)
    {
        printf("buffer is full\n");
        return;
    }

    buffer[head] = data;
    head = (head +1) % SIZE;
    count++;
}

/**
 * @brief Removes an element from the circular buffer.
 *
 * The function checks whether the buffer is empty. If it is not empty,
 * the element at the current tail position is removed and returned.
 * The tail index is then advanced to the next position.
 *
 * @return The removed integer value. Returns -1 if the buffer is empty.
 */
int denqueue (void)
{
    int data;
    if (count == 0)
    {
        printf("buffer is empty\n");
        return -1;
    }

    data = buffer[tail];
    tail = (tail +1) % SIZE;
    count--;
    return data;
}

/**
 * @brief Displays all elements currently stored in the circular buffer.
 *
 * The function starts from the tail position and displays elements
 * according to FIFO order. The index is wrapped around using the
 * modulo operator.
 *
 * @return None.
 */
void display ()
{
    int i;
    int index;

    if (count == 0)
    {
        printf("buffer is empty\n");
        return;
    }

    index = tail;

    for (i = 0; i < count; i++)
    {
        printf("%d\t", buffer[index]);
        index = (index + 1) % SIZE;
    }
}

/**
 * @brief Main function of the circular buffer program.
 *
 * Demonstrates insertion, deletion, and display operations on the
 * circular buffer.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    printf("print buffer\n");
    display();

    printf("\nremove %d\n", denqueue());
    printf("remove %d\n", denqueue());
    printf("remove %d\n", denqueue());

    printf("bufffer\n");
    display();

    enqueue(70);
    enqueue(80);

    printf("\nbufffer\n");
    display();

    printf("\nremove %d\n", denqueue());
    printf("remove %d\n", denqueue());
    printf("remove %d\n", denqueue());
    printf("remove %d\n", denqueue());
    printf("remove %d\n", denqueue());
    
}