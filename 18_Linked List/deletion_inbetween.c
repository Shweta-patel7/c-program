/**
 * @file singly_linked_list_delete_between.c
 * @brief Deletes a node at a specified index from a singly linked list.
 *
 * This program creates a singly linked list containing six nodes.
 * It displays the linked list before deletion, deletes the node at
 * the specified index, and then displays the updated linked list.
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
 * @brief Deletes a node at a specified index from a singly linked list.
 *
 * The function traverses the linked list until it reaches the node
 * immediately before the specified index. It then removes the node
 * at the given index and frees its allocated memory.
 *
 * @param head Pointer to the first node of the linked list.
 * @param index Index of the node to be deleted.
 *
 * @return Pointer to the head of the linked list.
 */
struct node * DeleteInBetween(struct node *head, int index)
{
    /**
     * @brief Temporary pointer used to traverse the linked list.
     */
    struct node *ptr = head;

    /**
     * @brief Pointer to the node that will be deleted.
     */
    struct node *nptr;

    /**
     * @brief Loop counter used to reach the node before the target node.
     */
    int i = 0;

    /**
     * Traverse the linked list until the node before the
     * specified index is reached.
     */
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    /**
     * Store the address of the node to be deleted.
     */
    nptr = ptr->next;

    /**
     * Bypass the node to be deleted by connecting the current node
     * directly to the node after it.
     */
    ptr->next = nptr->next;

    /**
     * Free the memory occupied by the deleted node.
     */
    free(nptr);

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
 * displays the list before deletion, deletes a node at index 2,
 * and displays the updated linked list.
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
     * Display the linked list before deleting a node.
     */
    printf("befor deleting value\n");
    traversal(one);

    /**
     * Delete the node at index 2 and update the linked list.
     */
    printf("after deleting value\n");
    one = DeleteInBetween(one, 2);

    /**
     * Display the linked list after deletion.
     */
    traversal(one);
}