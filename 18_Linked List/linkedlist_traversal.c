/**
 * @file singly_linked_list_traversal.c
 * @brief Traverses and displays a singly linked list.
 *
 * This program dynamically creates four nodes, initializes a
 * singly linked list, and traverses the list to display the
 * data stored in each node.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 *
 * Each node contains an integer data value and a pointer to
 * the next node in the linked list.
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
 * @brief Traverses and displays all nodes of a singly linked list.
 *
 * The function starts from the first node and follows the next
 * pointers until the end of the linked list is reached.
 *
 * @param ptr Pointer to the first node of the linked list.
 */
void traversal(struct node *ptr)
{
    /**
     * Traverse the linked list until the NULL pointer is reached.
     */
    while (ptr != NULL)
    {
        /**
         * Display the data stored in the current node.
         */
        printf("element : %d\n", ptr->data);

        /**
         * Move to the next node.
         */
        ptr = ptr->next;
    }
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for four nodes, initializes the
 * nodes to form a singly linked list, and displays all the
 * elements by calling the traversal() function.
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
    head->data = 34;
    head->next = two;

    /**
     * Initialize the second node.
     */
    two->data = 65;
    two->next = three;

    /**
     * Initialize the third node.
     */
    three->data = 87;
    three->next = four;

    /**
     * Initialize the fourth node.
     *
     * The next pointer is NULL because this is the last node.
     */
    four->data = 90;
    four->next = NULL;

    /**
     * Traverse and display the linked list.
     */
    traversal(head);
}