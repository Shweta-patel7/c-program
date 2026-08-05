/**
 * @file circular_linked_list_traversal.c
 * @brief Traverses and displays a circular linked list.
 *
 * This program dynamically creates four nodes and links them together
 * to form a circular linked list. The traversal function displays
 * each element of the circular linked list.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a circular linked list.
 *
 * Each node contains an integer data value and a pointer to the
 * next node in the circular linked list.
 */
struct node
{
    /**
     * @brief Stores the data value of the node.
     */
    int data;

    /**
     * @brief Pointer to the next node in the circular linked list.
     */
    struct node *next;
};

/**
 * @brief Traverses and displays all nodes of a circular linked list.
 *
 * The function starts traversal from the head node and continues
 * until it reaches the head node again.
 *
 * @param head Pointer to the first node of the circular linked list.
 */
void traversal(struct node *head)
{
    /**
     * @brief Temporary pointer used to traverse the linked list.
     */
    struct node *ptr = head;

    /**
     * Traverse the circular linked list.
     *
     * A do-while loop is used because the head node must be
     * processed at least once.
     */
    do
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

/**
 * @brief Main function of the program.
 *
 * Dynamically creates four nodes, initializes their data and links,
 * forms a circular linked list, and displays all elements using
 * the traversal() function.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointer to the first node (head) of the circular list.
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
     * The next pointer points back to head, making the linked list
     * circular.
     */
    four->data = 90;
    four->next = head;

    /**
     * Traverse and display the circular linked list.
     */
    traversal(head);
}