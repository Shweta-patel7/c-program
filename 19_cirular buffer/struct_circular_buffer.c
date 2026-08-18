/**
 * @file circular_buffer.c
 * @brief Implementation of a circular buffer for student records.
 *
 * This program implements a circular buffer using an array of structures.
 * Each structure stores a student's name and roll number.
 *
 * The circular buffer supports:
 * - Enqueueing a student record into the buffer.
 * - Dequeueing a student record from the buffer.
 * - Displaying all student records currently stored in the buffer.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Stores student information.
 *
 * @var node::name
 * Stores the name of the student.
 *
 * @var node::roll
 * Stores the roll number of the student.
 */
struct node
{
    char name[20];
    int roll;
};

/**
 * @brief Circular buffer used to store student records.
 */
struct node buffer[10];

/**
 * @brief Index where the next element will be inserted.
 */
int head = 0;

/**
 * @brief Index from where the next element will be deleted.
 */
int tail = 0;

/**
 * @brief Number of elements currently present in the buffer.
 */
int count = 0;

/**
 * @brief Adds a student record to the circular buffer.
 *
 * If the buffer is full, the function displays an error message
 * and does not insert the data.
 *
 * @param data Student record to be inserted into the buffer.
 * @return void
 */
void enqueue (struct node data)
{
    if (count == 10)
    {
        printf("buffer is full\n");
        return;
    }

    buffer[head] = data;
    head++;
    if (head >= 10)
    {
        head = 0;
    }
    count++;
    
}

/**
 * @brief Removes a student record from the circular buffer.
 *
 * The record at the tail position is removed and returned.
 * If the buffer is empty, an error message is displayed.
 *
 * @return struct node The deleted student record.
 */
struct node denqueue ()
{
    struct node data;
    if (count == 0)
    {
        printf("buffer is empty\n");
    }
    
    data = buffer[tail];
    tail++;
    if (tail >= 10)
    {
        tail = 0;
    }
    count--;

    return data;
}

/**
 * @brief Displays all student records currently present in the buffer.
 *
 * The display starts from the tail position and continues for
 * the number of elements stored in the buffer.
 *
 * @return void
 */
void display()
{
    int i;
    int index = tail;
    if (count == 0)
    {
        printf("buffer is empty\n");
    }

    for (i = 0; i < count; i++)
    {
        printf("name : %s\n", buffer[index].name);
        printf("roll number : %d\n", buffer[index].roll);
        index++;
        if (index >= 10)
        {
            index = 0;
        }
        
    }
    

    
}

/**
 * @brief Main function of the program.
 *
 * Reads student information from the user, adds each student
 * to the circular buffer, displays the buffer, removes one
 * student, and displays the buffer again.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{ 
    int i;
    struct node data;

    for (i = 0; i < 10; i++)
    {
        printf("enter student name : ");
        scanf("%s", data.name);
        printf("enter roll no. : ");
        scanf("%d", &data.roll);
        enqueue(data);
    }

    printf("After enqueue\n");
    display();

    data = denqueue();
    printf("\nDeleted student:\n");
    printf("name : %s\n", data.name);
    printf("roll number : %d\n", data.roll);

    printf("\nAfter dequeue:\n");
    display();
    return 0;
}