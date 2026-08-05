/**
 * @file singly_linked_list_insert_after_node.c
 * @brief Inserts new nodes after specified nodes in a singly linked list.
 *
 * This program creates a singly linked list containing four nodes.
 * It displays the list before insertion, inserts new nodes after
 * specified nodes, and then displays the updated linked list.
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
 * @brief Inserts a new node after a specified node.
 *
 * A new node is dynamically allocated and initialized with the
 * given data. The new node is inserted immediately after the
 * node pointed to by @p prevnode.
 *
 * @param head Pointer to the first node of the linked list.
 * @param data Data value to be stored in the new node.
 * @param prevnode Pointer to the node after which the new node
 *                 should be inserted.
 *
 * @return Pointer to the head of the linked list.
 */
struct node * AfterNode(struct node *head, int data, struct node *prevnode)
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
     * Connect the new node to the node that comes after prevnode.
     */
    ptr->next = prevnode->next;

    /**
     * Connect prevnode to the newly created node.
     */
    prevnode->next = ptr;

    /**
     * Return the head of the linked list.
     */
    return head;
}

/**
 * @brief Traverses and displays all nodes of a singly linked list.
 *
 * The function starts from the given node and continues traversal
 * until the NULL pointer is reached.
 *
 * @param ptr Pointer to the first node from which traversal starts.
 */
void traversal(struct node *ptr)
{
    /**
     * Traverse the linked list until the end is reached.
     */
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

/**
 * @brief Main function of the program.
 *
 * Dynamically creates four nodes and initializes a singly linked list.
 * It displays the linked list before insertion, inserts two new nodes
 * after specified nodes, and then displays the updated linked list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointer to the first node.
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
     * Display the linked list before insertion.
     */
    printf("befor insertion\n");
    traversal(head);

    /**
     * Insert a new node containing 647 after the node pointed
     * to by two.
     */
    head = AfterNode(head, 647, two);

    /**
     * Insert a new node containing 1000 after the node pointed
     * to by three.
     */
    head = AfterNode(head, 1000, three);

    /**
     * Display the linked list after insertion.
     */
    printf("\nafter insertion\n");
    traversal(head);
}