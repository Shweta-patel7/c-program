/**
 * @file
 * @brief Searches for a given value in a singly linked list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 *
 * @var node::data
 * Stores the integer value of the node.
 *
 * @var node::next
 * Pointer to the next node in the linked list.
 */
struct node
{
    int data;
    struct node *next;
};

/**
 * @brief Finds a given value in the linked list.
 *
 * Traverses the linked list from the head node and searches
 * for the given value. If the value is found, its index and
 * value are displayed.
 *
 * The index starts from 0.
 *
 * @param head Pointer to the first node of the linked list.
 * @param value Value to search for in the linked list.
 */
void find (struct node *head, int value)
{
    int index = 0;
    struct node *ptr = head;
    while (ptr->data != value && ptr->next != NULL)
    {
        ptr = ptr->next;
        index++;
    }
    
    if (ptr->data == value)
    {
        printf("at index : %d\n", index);
        printf("value : %d\n", ptr->data);
    }
    
}

/**
 * @brief Entry point of the program.
 *
 * Dynamically allocates six nodes, initializes their data and
 * links them together to form a singly linked list. The find()
 * function is then called to search for a specified value.
 *
 * @return 0 on successful execution.
 */
int main()
{
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    struct node *n5;
    struct node *n6;

    n1 = (struct node *) malloc (sizeof(struct node));
    n2 = (struct node *) malloc (sizeof(struct node));
    n3 = (struct node *) malloc (sizeof(struct node));
    n4 = (struct node *) malloc (sizeof(struct node));
    n5 = (struct node *) malloc (sizeof(struct node));
    n6 = (struct node *) malloc (sizeof(struct node));

    n1->data = 65;
    n1->next = n2;

    n2->data = 54;
    n2->next = n3;

    n3->data = 87;
    n3->next = n4;

    n4->data = 67;
    n4->next = n5;

    n5->data = 32;
    n5->next = n6;

    n6->data = 21;
    n6->next = NULL;

    find(n1, 32);
}