/**
 * @file queue.c
 * @brief Implementation of a queue using an array.
 *
 * This program implements basic queue operations such as
 * enqueue, dequeue, checking whether the queue is empty or full,
 * and displaying the elements of the queue.
 */

#include<stdio.h>

#include<stdlib.h>

#define SIZE 10

/** @brief Index representing the front of the queue. */
int front = -1;

/** @brief Index representing the back of the queue. */
int back = -1;

/** @brief Array used to store queue elements. */
int arr[SIZE];


/**
 * @brief Checks whether the queue is empty.
 *
 * @return 1 if the queue is empty, otherwise 0.
 */
int isempty ()
{
    if (front == back)
    {
        return 1;
    }

    return 0;
}


/**
 * @brief Checks whether the queue is full.
 *
 * @return 1 if the queue is full, otherwise 0.
 */
int isfull ()
{
    if (back == SIZE - 1)
    {
        return 1;
    }

    return 0;
}


/**
 * @brief Adds an element to the queue.
 *
 * The new element is inserted at the back of the queue.
 *
 * @param data Value to be inserted into the queue.
 */
void enqueue (int data)
{
    if (isfull())
    {
        printf("queue overflow\n");
    }

    else if (back != SIZE)
    {
        back++;
        arr[back] = data;
    }
}


/**
 * @brief Removes an element from the queue.
 *
 * The element at the front of the queue is removed and returned.
 *
 * @return The removed queue element.
 */
int dequeue ()
{
    if (isempty())
    {
        printf("queue underflow\n");
    }

    else if (front != SIZE)
    {
        front++;
        int data = arr[front];
        return data;
    }
}


/**
 * @brief Displays all elements currently present in the queue.
 *
 * Elements are displayed from the front of the queue
 * to the back of the queue.
 */
void display ()
{
    int point = front;

    if (isempty())
    {
        printf("queue underflow\n");
    }

    while (point != back)
    {
        point++;
        printf("%d\t", arr[point]);
    }
}


/**
 * @brief Main function of the program.
 *
 * Inserts elements into the queue, displays them,
 * removes two elements, and displays the remaining elements.
 *
 * @return 0 on successful program termination.
 */
int main()
{
    enqueue(21);

    enqueue(98);

    enqueue(65);

    enqueue(35);

    enqueue(67);

    enqueue(7);

    display(); 

    printf("\ndequeue : %d\n", dequeue());

    printf("dequeue : %d\n", dequeue());

    display();
}