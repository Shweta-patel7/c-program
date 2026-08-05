/**
 * @file singly_linked_list_delete_last.c
 * @brief Deletes the last node from a singly linked list.
 *
 * This program creates a singly linked list containing six nodes.
 * It displays the linked list before deletion, deletes the last node,
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
 * @brief Deletes the last node from a singly linked list.
 *
 * The function traverses the linked list using two pointers.
 * The pointer @p ptr keeps track of the node before the last node,
 * while @p q points to the current node.
 *
 * When the last node is reached, its memory is freed and the
 * previous node's next pointer is set to NULL.
 *
 * @param head Pointer to the first node of the linked list.
 *
 * @return Pointer to the head of the linked list.
 */
struct node * DeleteLastNode(struct node *head)
{
    /**
     * @brief Pointer used to track the node before the last node.
     */
    struct node *ptr = head;

    /**
     * @brief Pointer used to find the last node.
     */
    struct node *q = head->next;

    /**
     * Traverse the linked list until q points to the last node.
     */
    while (q->next != NULL)
    {
        ptr = ptr->next;
        q = q->next;
    }

    /**
     * Set the next pointer of the second-last node to NULL.
     */
    ptr->next = NULL;

    /**
     * Free the memory occupied by the last node.
     */
    free(q);

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
 * Dynamically creates six nodes, initializes the singly linked list,
 * displays the list before deleting the last node, deletes the last
 * node, and displays the updated linked list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointer to the first node.
     */
    struct node *one;

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
     * @brief Pointer to the fifth node.
     */
    struct node *five;

    /**
     * @brief Pointer to the sixth node.
     */
    struct node *six;

    /**
     * Allocate memory for the six nodes.
     */
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));

    /**
     * Initialize the first node.
     */
    one->data = 54;
    one->next = two;

    /**
     * Initialize the second node.
     */
    two->data = 87;
    two->next = three;

    /**
     * Initialize the third node.
     */
    three->data = 65;
    three->next = four;

    /**
     * Initialize the fourth node.
     */
    four->data = 32;
    four->next = five;

    /**
     * Initialize the fifth node.
     */
    five->data = 23;
    five->next = six;

    /**
     * Initialize the sixth node.
     *
     * The next pointer is NULL because this is the last node.
     */
    six->data = 98;
    six->next = NULL;

    /**
     * Display the linked list before deleting the last node.
     */
    printf("befor deleting last value\n");
    traversal(one);

    /**
     * Delete the last node and update the linked list.
     */
    printf("after deleting last value\n");
    one = DeleteLastNode(one);

    /**
     * Display the linked list after deleting the last node.
     */
    traversal(one);
}