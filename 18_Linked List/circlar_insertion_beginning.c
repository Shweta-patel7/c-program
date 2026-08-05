/**
 * @file circular_linked_list_insert_between.c
 * @brief Inserts a new node at a specified index in a circular linked list.
 *
 * This program creates a circular linked list containing four nodes.
 * It displays the list before insertion, inserts a new node at the
 * specified index, and then displays the updated list.
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
     * @brief Pointer to the next node in the circular linked list.
     */
    struct node *next;
};

/**
 * @brief Inserts a new node at a specified index.
 *
 * Dynamically allocates a new node and inserts it at the specified
 * position in the circular linked list.
 *
 * @param head Pointer to the first node of the circular linked list.
 * @param data Data value to be stored in the new node.
 * @param index Position at which the new node is inserted.
 *
 * @return Pointer to the head of the circular linked list.
 */
struct node * insertInBetween(struct node *head, int data, int index)
{
    /**
     * @brief Pointer to the newly allocated node.
     */
    struct node *ptr;

    /**
     * Allocate memory for the new node.
     */
    ptr = (struct node *) malloc(sizeof(struct node));

    /**
     * Store the given data in the new node.
     */
    ptr->data = data;

    /**
     * @brief Temporary pointer used to find the insertion position.
     */
    struct node *p = head;

    /**
     * @brief Loop counter used to reach the required position.
     */
    int i = 0;

    /**
     * Traverse the circular linked list until the node before
     * the specified insertion index is reached.
     */
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    /**
     * Connect the new node to the next node.
     */
    ptr->next = p->next;

    /**
     * Connect the previous node to the newly inserted node.
     */
    p->next = ptr;

    /**
     * Return the head of the circular linked list.
     */
    return head;
}

/**
 * @brief Traverses and displays all nodes of a circular linked list.
 *
 * The traversal starts at the head node and continues until the
 * traversal reaches the head node again.
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
 * list before insertion, inserts a new node at a specified index,
 * and displays the updated list.
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
     * Insert a new node containing 561 at index 2.
     */
    printf("after insertion\n");
    head = insertInBetween(head, 561, 2);

    /**
     * Display the circular linked list after insertion.
     */
    traversal(head);
}