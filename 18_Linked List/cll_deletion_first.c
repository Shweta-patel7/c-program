/**
 * @file circular_linked_list_delete_first.c
 * @brief Deletes the first node of a circular singly linked list.
 *
 * This program creates a circular singly linked list with four nodes,
 * displays the list, deletes the first node, and then displays the
 * updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a circular singly linked list.
 *
 * Each node contains an integer data value and a pointer
 * to the next node.
 */
struct node
{
    /**
     * @brief Stores the data of the node.
     */
    int data;

    /**
     * @brief Pointer to the next node.
     */
    struct node *next;
};

/**
 * @brief Traverses and displays all nodes of a circular linked list.
 *
 * The traversal starts from the head node and continues until
 * the head node is reached again.
 *
 * @param head Pointer to the first node of the circular linked list.
 */
void traversal(struct node *head)
{
    /**
     * @brief Pointer used for traversal.
     */
    struct node *ptr = head;

    /**
     * Traverse the circular linked list once.
     */
    do
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

/**
 * @brief Deletes the first node of a circular linked list.
 *
 * If the list is empty, NULL is returned.
 * If the list contains only one node, that node is deleted
 * and NULL is returned.
 * Otherwise, the head node is removed and the last node is
 * updated to point to the new head.
 *
 * @param head Pointer to the first node of the circular linked list.
 *
 * @return Pointer to the new head of the linked list.
 */
struct node *deleteFirst(struct node *head)
{
    /**
     * Check if the list is empty.
     */
    if (head == NULL)
    {
        return NULL;
    }

    /**
     * Handle the case where only one node exists.
     */
    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    /**
     * @brief Pointer to the node to be deleted.
     */
    struct node *p = head;

    /**
     * @brief Pointer used to locate the last node.
     */
    struct node *q = head;

    /**
     * Find the last node in the circular linked list.
     */
    while (q->next != head)
    {
        q = q->next;
    }

    /**
     * Move the head to the second node.
     */
    head = head->next;

    /**
     * Update the last node to point to the new head.
     */
    q->next = head;

    /**
     * Free the old head node.
     */
    free(p);

    /**
     * Return the new head.
     */
    return head;
}

/**
 * @brief Main function of the program.
 *
 * Creates a circular linked list with four nodes,
 * displays the list before deletion,
 * deletes the first node,
 * and displays the updated list.
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
     * Allocate memory for all nodes.
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
     * Initialize the fourth node and complete the circle.
     */
    four->data = 90;
    four->next = head;

    /**
     * Display the linked list before deletion.
     */
    printf("befor deleting\n");
    traversal(head);

    /**
     * Delete the first node.
     */
    printf("after deleting\n");
    head = deleteFirst(head);

    /**
     * Display the updated linked list.
     */
    traversal(head);
}