/**
 * @file circular_linked_list_delete_with_value.c
 * @brief Deletes a node with a specified value from a circular singly linked list.
 *
 * This program creates a circular singly linked list, displays the list,
 * deletes the first node containing the specified value, and displays
 * the updated linked list.
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
     * @brief Data stored in the node.
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
 * the traversal reaches the head node again.
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
     * Traverse the circular linked list.
     */
    do
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

/**
 * @brief Deletes the first node containing the specified value.
 *
 * The function searches the circular linked list for the given value.
 * If the value is found, the corresponding node is removed from the
 * linked list and its memory is released.
 *
 * @param head Pointer to the first node of the circular linked list.
 * @param value Value of the node to be deleted.
 *
 * @return Pointer to the head of the linked list.
 */
struct node *deleteWithValue(struct node *head, int value)
{
    /**
     * @brief Pointer to the previous node.
     */
    struct node *p = head;

    /**
     * @brief Pointer to the node being searched.
     */
    struct node *q = head->next;

    /**
     * Traverse until the required value is found
     * or the traversal reaches the last node.
     */
    while (q->data != value && q->next != head)
    {
        q = q->next;
        p = p->next;
    }

    /**
     * Delete the node if the value is found.
     */
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    /**
     * Return the head of the linked list.
     */
    return head;
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for four nodes, creates a circular
 * linked list, displays the list, deletes a node having the value 90,
 * and displays the modified linked list.
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
     * Allocate memory for the nodes.
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
     * Initialize the fourth node and complete the circular link.
     */
    four->data = 90;
    four->next = head;

    /**
     * Display the linked list before deletion.
     */
    printf("befor deleting\n");
    traversal(head);

    /**
     * Delete the node containing the value 90.
     */
    printf("after deleting\n");
    head = deleteWithValue(head, 90);

    /**
     * Display the linked list after deletion.
     */
    traversal(head);
}