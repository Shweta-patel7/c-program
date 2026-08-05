/**
 * @file singly_linked_list_delete_by_value.c
 * @brief Deletes a node containing a specified value from a singly linked list.
 *
 * This program creates a singly linked list containing six nodes.
 * It displays the linked list before deletion, searches for a node
 * containing a specified value, deletes that node, and then displays
 * the updated linked list.
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
 * @brief Deletes the first node containing a specified value.
 *
 * The function traverses the linked list using two pointers.
 * The pointer @p p points to the node before the node to be deleted,
 * while @p q points to the node currently being checked.
 *
 * If the specified value is found, the node is removed from the
 * linked list and its allocated memory is freed.
 *
 * @param head Pointer to the first node of the linked list.
 * @param value Value of the node to be deleted.
 *
 * @return Pointer to the head of the linked list.
 */
struct node * DeletewithValue(struct node *head, int value)
{
    /**
     * @brief Pointer used to track the previous node.
     */
    struct node *p = head;

    /**
     * @brief Pointer used to search for the node containing the value.
     */
    struct node *q = head->next;

    /**
     * Traverse the linked list until the specified value is found
     * or the last node is reached.
     */
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    /**
     * Check whether the required value was found.
     */
    if (q->data == value)
    {
        /**
         * Bypass the node that is going to be deleted.
         */
        p->next = q->next;

        /**
         * Free the memory occupied by the deleted node.
         */
        free(q);
    }

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
 * Dynamically creates six nodes, initializes a singly linked list,
 * displays the list before deletion, deletes the node containing
 * the value 32, and displays the updated linked list.
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
     * Display the linked list before deleting the node.
     */
    printf("befor deleting value\n");
    traversal(one);

    /**
     * Delete the node containing the value 32.
     */
    printf("after deleting value\n");
    one = DeletewithValue(one, 32);

    /**
     * Display the linked list after deletion.
     */
    traversal(one);
}