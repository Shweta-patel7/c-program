/**
 * @file doubly_insert_after_node.c
 * @brief Insert a node after a given node in a doubly linked list.
 *
 * This program creates a doubly linked list, inserts a new node
 * after a specified node, and displays the list before and after insertion.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Structure representing a node in a doubly linked list.
 */
struct node
{
    int data;               /**< Data stored in the node */
    struct node *prev;      /**< Pointer to previous node */
    struct node *next;      /**< Pointer to next node */
};

/**
 * @brief Traverses and prints the doubly linked list.
 *
 * @param head Pointer to the first node.
 */
void traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("element : %d\n", head->data);
        head = head->next;
    }
}

/**
 * @brief Inserts a new node after a specified node.
 *
 * A new node is created and inserted immediately after the
 * node pointed to by the 'after' parameter.
 *
 * @param head Pointer to the first node.
 * @param data Data to be inserted.
 * @param after Pointer to the node after which insertion is performed.
 *
 * @return Pointer to the head of the list.
 */
struct node *InsertAftreNode(struct node *head, int data, struct node *after)
{
    struct node *ptr;
    struct node *q = after->next;

    ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = after->next;
    after->next = ptr;
    ptr->prev = after;

    if (q != NULL)
    {
        q->prev = ptr;
    }

    return head;
}

/**
 * @brief Main function.
 *
 * Creates a doubly linked list, inserts a node after the third node,
 * and prints the list before and after insertion.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    struct node *n5;
    struct node *n6;

    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));
    n4 = (struct node *)malloc(sizeof(struct node));
    n5 = (struct node *)malloc(sizeof(struct node));
    n6 = (struct node *)malloc(sizeof(struct node));

    n1->data = 65;
    n1->prev = NULL;
    n1->next = n2;

    n2->data = 51;
    n2->prev = n1;
    n2->next = n3;

    n3->data = 87;
    n3->prev = n2;
    n3->next = n4;

    n4->data = 33;
    n4->prev = n3;
    n4->next = n5;

    n5->data = 21;
    n5->prev = n4;
    n5->next = n6;

    n6->data = 12;
    n6->prev = n5;
    n6->next = NULL;

    printf("befor inserting\n");
    traversal(n1);

    printf("after inserting\n");
    n1 = InsertAftreNode(n1, 100, n3);
    traversal(n1);

    return 0;
}