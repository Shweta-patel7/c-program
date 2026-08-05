/**
 * @file doubly_linked_list_traversal.c
 * @brief Traverses a doubly linked list in both forward and backward directions.
 *
 * This program creates a doubly linked list with six nodes.
 * It first traverses the list from the first node to the last node,
 * and then traverses it in the reverse direction using the previous pointers.
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
 * The function first traverses the linked list in the forward direction
 * from the head node to the last node. It then traverses the list in
 * the backward direction using the previous pointers.
 *
 * @param head Pointer to the first node of the doubly linked list.
 */
void traversal(struct node *head)
{
    /**
     * @brief Pointer to the last node of the linked list.
     */
    struct node *last = NULL;

    /**
     * Traverse the linked list in the forward direction.
     */
    printf("moving forward\n");
    while (head != NULL)
    {
        printf("element : %d\n", head->data);
        last = head;
        head = head->next;
    }

    /**
     * Traverse the linked list in the backward direction.
     */
    printf("moving backward\n");
    while (last != NULL)
    {
        printf("element : %d\n", last->data);
        last = last->prev;
    }
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for six nodes, creates a doubly linked list,
 * and displays the elements in both forward and backward directions.
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
     * Initialize the sixth (last) node.
     */
    n6->data = 12;
    n6->prev = n5;
    n6->next = NULL;

    /**
     * Traverse the doubly linked list in both directions.
     */
    traversal(n1);
}