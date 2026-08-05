/**
 * @file circular_linked_list_delete_between.c
 * @brief Deletes a node at a specified position in a circular singly linked list.
 *
 * This program creates a circular singly linked list, displays its
 * elements, deletes a node at a given index, and displays the updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a circular singly linked list.
 *
 * Each node contains an integer data value and a pointer to the next node.
 */
struct node
{
    /**
     * @brief Stores the data of the node.
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
     * Traverse the circular linked list.
     */
    do
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

/**
 * @brief Deletes a node at the specified index in a circular linked list.
 *
 * The function traverses the linked list until it reaches the node
 * before the specified index. The target node is then removed and
 * its memory is released.
 *
 * @param head Pointer to the first node of the circular linked list.
 * @param index Position of the node to be deleted.
 *
 * @return Pointer to the head of the linked list.
 */
struct node *deleteBetween(struct node *head, int index)
{
    /**
     * @brief Pointer to the node before the node to be deleted.
     */
    struct node *p = head;

    /**
     * @brief Pointer to the node to be deleted.
     */
    struct node *q = head->next;

    /**
     * @brief Counter used to reach the desired position.
     */
    int i = 0;

    /**
     * Traverse until the node before the target node is reached.
     */
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    /**
     * Remove the target node from the linked list.
     */
    p->next = q->next;

    /**
     * Release the memory occupied by the deleted node.
     */
    free(q);

    /**
     * Return the head of the linked list.
     */
    return head;
}

/**
 * @brief Main function of the program.
 *
 * Dynamically creates a circular linked list with four nodes,
 * displays the list before deletion, deletes the node at the
 * specified index, and displays the updated linked list.
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
     * Delete the node at index 2.
     */
    printf("after deleting\n");
    head = deleteBetween(head, 2);

    /**
     * Display the linked list after deletion.
     */
    traversal(head);
}