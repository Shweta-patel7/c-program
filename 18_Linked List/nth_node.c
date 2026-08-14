/**
 * @file nth_node.c
 * @brief Finds the last node of a singly linked list.
 *
 * This program creates a singly linked list using dynamically allocated
 * nodes and traverses the list until the last node is reached. It then
 * displays the position and data of the last node.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 *
 * @var node::data
 * Stores the integer data of the node.
 *
 * @var node::next
 * Pointer to the next node in the linked list.
 */
typedef struct node
{
    int data;
    struct node *next;
} node_t;

/**
 * @brief Finds and displays the last node of the linked list.
 *
 * Traverses the linked list using a pointer until the pointer reaches
 * the last node, whose next pointer is NULL. The function then prints
 * the position and data stored in that node.
 *
 * @param head Pointer to the first node of the linked list.
 */
void nnode (node_t *head)
{
    int count = 0;
    node_t *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        count++;
    }
    printf("n node is at : %d\n", count);
    printf("data in n node is : %d\n", ptr->data);
}

/**
 * @brief Entry point of the program.
 *
 * Dynamically allocates six nodes, initializes their data and links
 * them together to form a singly linked list. The nnode() function
 * is then called to find and display the last node.
 *
 * @return 0 on successful execution.
 */
int main()
{
    node_t *n1;
    node_t *n2;
    node_t *n3;
    node_t *n4;
    node_t *n5;
    node_t *n6;

    n1 = (node_t *)malloc (sizeof(node_t));
    n2 = (node_t *)malloc (sizeof(node_t));
    n3 = (node_t *)malloc (sizeof(node_t));
    n4 = (node_t *)malloc (sizeof(node_t));
    n5 = (node_t *)malloc (sizeof(node_t));
    n6 = (node_t *)malloc (sizeof(node_t));

    n1->data = 52;
    n1->next = n2;

    n2->data = 87;
    n2->next = n3;

    n3->data = 32;
    n3->next = n4;

    n4->data = 65;
    n4->next = n5;

    n5->data = 98;
    n5->next = n6;

    n6->data = 67;
    n6->next = NULL;

    nnode(n1);
}