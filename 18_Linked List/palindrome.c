/**
 * @file reverse_linked_list.c
 * @brief Reverses a singly linked list.
 *
 * This program creates a singly linked list using dynamically allocated
 * nodes, displays the list, reverses the links of the nodes using an
 * iterative approach, and then displays the reversed list.
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
 * @brief Displays all elements of the linked list.
 *
 * Traverses the linked list from the given head node to the last node
 * and prints the data stored in each node.
 *
 * @param head Pointer to the first node of the linked list.
 */
void display (node_t *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
}

/**
 * @brief Reverses a singly linked list.
 *
 * Reverses the links between the existing nodes using three pointers:
 * prev, current, and next.
 *
 * @param head Pointer to the first node of the linked list.
 *
 * @return Pointer to the new head of the reversed linked list.
 */
node_t *reverse (node_t *head)
{
    node_t *prev = NULL;
    node_t *current = head;
    node_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

/**
 * @brief Entry point of the program.
 *
 * Dynamically allocates six nodes, initializes their data and links
 * them together to form a singly linked list. The list is displayed
 * before and after reversing.
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

    n1 = (node_t *)malloc(sizeof(node_t));
    n2 = (node_t *)malloc(sizeof(node_t));
    n3 = (node_t *)malloc(sizeof(node_t));
    n4 = (node_t *)malloc(sizeof(node_t));
    n5 = (node_t *)malloc(sizeof(node_t));
    n6 = (node_t *)malloc(sizeof(node_t));

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

    printf("before reverse:\n");
    display(n1);

    n1 = reverse(n1);

    printf("\nafter reverse:\n");
    display(n1);

    return 0;
}