/**
 * @file doubly_linked_list_insert_end.c
 * @brief Demonstrates insertion of a node at the end of a doubly linked list.
 *
 * This program creates a doubly linked list, displays it,
 * inserts a new node at the end, and displays the updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node of a doubly linked list.
 */
struct node
{
    /**
     * @brief Data stored in the node.
     */
    int data;

    /**
     * @brief Pointer to the previous node.
     */
    struct node *prev;

    /**
     * @brief Pointer to the next node.
     */
    struct node *next;
};

/**
 * @brief Traverses and displays the doubly linked list.
 *
 * Starts from the head node and prints each node's data
 * until the end of the list is reached.
 *
 * @param head Pointer to the first node of the linked list.
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
 * @brief Inserts a new node at the end of a doubly linked list.
 *
 * Allocates memory for a new node, stores the given data,
 * traverses to the last node, and appends the new node.
 *
 * @param head Pointer to the first node of the linked list.
 * @param data Data value to be inserted.
 *
 * @return Pointer to the head of the linked list.
 */
struct node *InsertAtEnd(struct node *head, int data)
{
    /**
     * @brief Pointer to the newly created node.
     */
    struct node *ptr;

    /**
     * @brief Pointer used to traverse the linked list.
     */
    struct node *p = head;

    /**
     * Allocate memory for the new node.
     */
    ptr = (struct node *)malloc(sizeof(struct node));

    /**
     * Store the data in the new node.
     */
    ptr->data = data;

    /**
     * Traverse to the last node.
     */
    while (p->next != NULL)
    {
        p = p->next;
    }

    /**
     * Link the new node at the end.
     */
    p->next = ptr;
    ptr->prev = p;
    ptr->next = NULL;

    return head;
}

/**
 * @brief Main function of the program.
 *
 * Creates a doubly linked list with six nodes,
 * displays the original list,
 * inserts a new node at the end,
 * and displays the modified list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointers to the nodes of the linked list.
     */
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    struct node *n5;
    struct node *n6;

    /**
     * Allocate memory for all nodes.
     */
    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));
    n4 = (struct node *)malloc(sizeof(struct node));
    n5 = (struct node *)malloc(sizeof(struct node));
    n6 = (struct node *)malloc(sizeof(struct node));

    /**
     * Initialize node 1.
     */
    n1->data = 65;
    n1->prev = NULL;
    n1->next = n2;

    /**
     * Initialize node 2.
     */
    n2->data = 51;
    n2->prev = n1;
    n2->next = n3;

    /**
     * Initialize node 3.
     */
    n3->data = 87;
    n3->prev = n2;
    n3->next = n4;

    /**
     * Initialize node 4.
     */
    n4->data = 33;
    n4->prev = n3;
    n4->next = n5;

    /**
     * Initialize node 5.
     */
    n5->data = 21;
    n5->prev = n4;
    n5->next = n6;

    /**
     * Initialize node 6.
     */
    n6->data = 12;
    n6->prev = n5;
    n6->next = NULL;

    /**
     * Display the linked list before insertion.
     */
    printf("befor inserting\n");
    traversal(n1);

    /**
     * Insert a new node containing 66 at the end.
     */
    printf("after inserting\n");
    n1 = InsertAtEnd(n1, 66);

    /**
     * Display the linked list after insertion.
     */
    traversal(n1);
}