/**
 * @file singly_linked_list_delete_first.c
 * @brief Deletes the first node from a singly linked list.
 *
 * This program creates a singly linked list containing four nodes.
 * It displays the linked list before deletion, deletes the first node,
 * and then displays the updated linked list.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 *
 * Each node contains an integer data value and a pointer to the
 * next node in the linked list.
 */
struct node
{
    /**
     * @brief Stores the data value of the node.
     */
    int data;

    /**
     * @brief Pointer to the next node in the linked list.
     */
    struct node *next;
};

/**
 * @brief Deletes the first node of a singly linked list.
 *
 * The function stores the address of the current head node,
 * moves the head pointer to the second node, and then frees
 * the memory occupied by the old first node.
 *
 * @param head Pointer to the first node of the linked list.
 *
 * @return Pointer to the new head of the linked list.
 */
struct node * DeleteFirst(struct node *head)
{
    /**
     * @brief Temporary pointer used to store the old head node.
     */
    struct node *ptr = head;

    /**
     * Move the head pointer to the second node.
     */
    head = head->next;

    /**
     * Free the memory occupied by the old first node.
     */
    free(ptr);

    /**
     * Return the new head of the linked list.
     */
    return head;
}

/**
 * @brief Traverses and displays all nodes of a singly linked list.
 *
 * The function starts from the given node and continues traversal
 * until the NULL pointer is reached.
 *
 * @param point Pointer to the first node from which traversal starts.
 */
void traversal(struct node *point)
{
    /**
     * Traverse the linked list until the end is reached.
     */
    while (point != NULL)
    {
        printf("element : %d\n", point->data);
        point = point->next;
    }
}

/**
 * @brief Main function of the program.
 *
 * Dynamically creates four nodes, initializes the singly linked list,
 * displays the list before deletion, deletes the first node, and
 * displays the updated list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointer to the first node of the linked list.
     */
    struct node *head;

    /**
     * @brief Pointer to the second node.
     */
    struct node *two;

    /**
     * @brief Pointer to the third node.
     */
    struct node *three;

    /**
     * @brief Pointer to the fourth node.
     */
    struct node *four;

    /**
     * Allocate memory for the four nodes.
     */
    head = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));

    /**
     * Initialize the first node.
     */
    head->data = 54;
    head->next = two;

    /**
     * Initialize the second node.
     */
    two->data = 87;
    two->next = three;

    /**
     * Initialize the third node.
     */
    three->data = 67;
    three->next = four;

    /**
     * Initialize the fourth node.
     *
     * The next pointer is set to NULL because this is the last node.
     */
    four->data = 21;
    four->next = NULL;

    /**
     * Display the linked list before deleting the first node.
     */
    printf("befor deletion\n");
    traversal(head);

    /**
     * Delete the first node and update the head pointer.
     */
    printf("after deletion\n");
    head = DeleteFirst(head);

    /**
     * Display the linked list after deleting the first node.
     */
    traversal(head);
}