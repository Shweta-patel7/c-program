/**
 * @file linked_list_reverse.c
 * @brief Displays a singly linked list in forward and reverse order.
 *
 * This program creates a singly linked list using dynamically allocated
 * nodes. It displays the elements in normal order using an iterative
 * function and displays the elements in reverse order using recursion.
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
 * @brief Displays the linked list in forward order.
 *
 * Traverses the linked list from the head node to the last node
 * and prints the data stored in each node.
 *
 * @param head Pointer to the first node of the linked list.
 */
void display (struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (p != NULL)
    {
        printf("value : %d\n", p->data);
        p = p->next;
    }
    
}

/**
 * @brief Displays the linked list in reverse order.
 *
 * Uses recursion to reach the last node first. After reaching the
 * end of the linked list, the function prints each node's data
 * while returning from the recursive calls.
 *
 * @param head Pointer to the current node of the linked list.
 */
void displayReverse(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    displayReverse(head->next);
    printf("value : %d\n", head->data);
    
}

/**
 * @brief Entry point of the program.
 *
 * Dynamically creates six nodes, initializes their data and links
 * them together to form a singly linked list. The list is first
 * displayed in forward order and then displayed in reverse order.
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

    display(n1);
    printf("display in reverse order\n");
    displayReverse(n1);
}