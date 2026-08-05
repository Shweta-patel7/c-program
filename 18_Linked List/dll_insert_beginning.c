/**
 * @file doubly_linked_list_insert_beginning.c
 * @brief Inserts a new node at the beginning of a doubly linked list.
 *
 * This program creates a doubly linked list with six nodes,
 * displays the list, inserts a new node at the beginning,
 * and displays the updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a doubly linked list.
 *
 * Each node contains an integer data value, a pointer to the
 * previous node, and a pointer to the next node.
 */
struct node
{
    /**
     * @brief Stores the data value of the node.
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
 * The traversal starts from the head node and continues until
 * the end of the linked list is reached.
 *
 * @param head Pointer to the first node of the linked list.
 */
void traversal(struct node *head)
{
    /**
     * Traverse the linked list in the forward direction.
     */
    while (head != NULL)
    {
        printf("element : %d\n", head->data);
        head = head->next;
    }
}

/**
 * @brief Inserts a new node at the beginning of a doubly linked list.
 *
 * A new node is dynamically allocated, initialized with the given data,
 * and linked before the current head node.
 *
 * @param head Pointer to the first node of the linked list.
 * @param data Data value to be stored in the new node.
 *
 * @return Pointer to the new head of the linked list.
 */
struct node *InsertBeginning(struct node *head, int data)
{
    /**
     * @brief Pointer to the newly created node.
     */
    struct node *ptr;

    /**
     * Allocate memory for the new node.
     */
    ptr = (struct node *)malloc(sizeof(struct node));

    /**
     * Store the given data in the new node.
     */
    ptr->data = data;

    /**
     * Update the previous pointer of the current head.
     */
    head->prev = ptr;

    /**
     * Link the new node to the current head.
     */
    ptr->next = head;

    /**
     * Since the new node becomes the first node,
     * its previous pointer is NULL.
     */
    ptr->prev = NULL;

    /**
     * Update the head pointer.
     */
    head = ptr;

    /**
     * Return the new head of the linked list.
     */
    return head;
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for six nodes, creates a doubly
 * linked list, displays the list, inserts a new node at the
 * beginning, and displays the updated list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointer to the first node.
     */
    struct node *n1;

    /**
     * @brief Pointer to the second node.
     */
    struct node *n2;

    /**
     * @brief Pointer to the third node.
     */
    struct node *n3;

    /**
     * @brief Pointer to the fourth node.
     */
    struct node *n4;

    /**
     * @brief Pointer to the fifth node.
     */
    struct node *n5;

    /**
     * @brief Pointer to the sixth node.
     */
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
     * Initialize the first node.
     */
    n1->data = 65;
    n1->prev = NULL;
    n1->next = n2;

    /**
     * Initialize the second node.
     */
    n2->data = 51;
    n2->prev = n1;
    n2->next = n3;

    /**
     * Initialize the third node.
     */
    n3->data = 87;
    n3->prev = n2;
    n3->next = n4;

    /**
     * Initialize the fourth node.
     */
    n4->data = 33;
    n4->prev = n3;
    n4->next = n5;

    /**
     * Initialize the fifth node.
     */
    n5->data = 21;
    n5->prev = n4;
    n5->next = n6;

    /**
     * Initialize the sixth node.
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
     * Insert a new node containing 77 at the beginning.
     */
    printf("after inserting\n");
    n1 = InsertBeginning(n1, 77);

    /**
     * Display the linked list after insertion.
     */
    traversal(n1);
}