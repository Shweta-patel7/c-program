/**
 * @file circular_linked_list_insert_end.c
 * @brief Inserts a new node at the end of a circular linked list.
 *
 * This program creates a circular linked list containing four nodes.
 * It displays the list before insertion, inserts a new node at the end
 * of the circular linked list, and then displays the updated list.
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
 * @brief Inserts a new node at the end of a circular linked list.
 *
 * Dynamically allocates a new node and inserts it before the head node.
 * The last node of the circular linked list is found by traversing
 * until its next pointer points back to the head.
 *
 * @param head Pointer to the first node of the circular linked list.
 * @param data Data value to be stored in the new node.
 *
 * @return Pointer to the head of the circular linked list.
 */
struct node * insertAtEnd(struct node *head, int data)
{
    /**
     * @brief Pointer to the newly allocated node.
     */
    struct node *ptr;

    /**
     * @brief Temporary pointer used to find the last node.
     */
    struct node *p = head;

    /**
     * Allocate memory for the new node.
     */
    ptr = (struct node *) malloc(sizeof(struct node));

    /**
     * Store the given data in the new node.
     */
    ptr->data = data;

    /**
     * Traverse the circular linked list until the last node is found.
     */
    while (p->next != head)
    {
        p = p->next;
    }

    /**
     * Make the new node point to the head node.
     */
    ptr->next = p->next;

    /**
     * Make the previous last node point to the new node.
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
 * list before insertion, inserts a new node at the end, and displays
 * the updated list.
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
     * Insert a new node containing 6845 at the end
     * of the circular linked list.
     */
    printf("after insertion\n");
    head = insertAtEnd(head, 6845);

    /**
     * Display the circular linked list after insertion.
     */
    traversal(head);
}