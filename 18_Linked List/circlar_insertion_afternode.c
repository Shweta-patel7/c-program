/**
 * @file circular_linked_list_insert.c
 * @brief Inserts a new node after a given node in a circular linked list.
 *
 * This program creates a circular linked list containing four nodes.
 * It displays the list before insertion, inserts a new node after the
 * second node, and then displays the list after insertion.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a circular linked list.
 *
 * Each node contains an integer data value and a pointer to the next node.
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
 * @brief Inserts a new node after a specified node.
 *
 * Dynamically allocates a new node, stores the given data in it,
 * and inserts it after the specified node.
 *
 * @param head Pointer to the first node of the circular linked list.
 * @param data Data value to be stored in the new node.
 * @param new Pointer to the node after which the new node is inserted.
 *
 * @return Pointer to the head of the circular linked list.
 */
struct node * insertAfterNode(struct node *head, int data, struct node *new)
{
    /**
     * @brief Pointer to the newly allocated node.
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
     * Link the new node to the node that originally followed
     * the specified node.
     */
    ptr->next = new->next;

    /**
     * Link the specified node to the newly created node.
     */
    new->next = ptr;

    /**
     * Return the head of the circular linked list.
     */
    return head;
}

/**
 * @brief Traverses and displays all nodes of a circular linked list.
 *
 * The function starts from the head node and continues traversal until
 * it reaches the head node again.
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
 * Creates a circular linked list containing four nodes, displays the
 * list, inserts a new node after the second node, and displays the
 * updated list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointer to the first node of the circular linked list.
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
     * Initialize the fourth node and connect it back to the head.
     *
     * This makes the linked list circular.
     */
    four->data = 90;
    four->next = head;

    /**
     * Display the circular linked list before insertion.
     */
    printf("befor insertion\n");
    traversal(head);

    /**
     * Insert a new node containing 11 after the second node.
     */
    printf("after insertion\n");
    head = insertAfterNode(head, 11, two);

    /**
     * Display the circular linked list after insertion.
     */
    traversal(head);
}