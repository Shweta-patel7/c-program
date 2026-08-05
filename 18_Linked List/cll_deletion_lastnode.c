/**
 * @file circular_linked_list_delete_last.c
 * @brief Deletes the last node of a circular singly linked list.
 *
 * This program creates a circular singly linked list with four nodes,
 * displays the list, deletes the last node, and displays the updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a circular singly linked list.
 *
 * Each node stores an integer value and a pointer to the next node.
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
 * @brief Traverses and displays all nodes of a circular linked list.
 *
 * The traversal begins from the head node and continues until
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
 * @brief Deletes the last node of a circular linked list.
 *
 * The function traverses the linked list to locate the last node
 * and its previous node. The previous node is then linked to the
 * head node, and the last node is freed.
 *
 * @param head Pointer to the first node of the circular linked list.
 *
 * @return Pointer to the head of the linked list.
 */
struct node *deleteLastNode(struct node *head)
{
    /**
     * @brief Pointer to the last node.
     */
    struct node *p = head->next;

    /**
     * @brief Pointer to the node before the last node.
     */
    struct node *q = head;

    /**
     * Traverse until the last node is reached.
     */
    while (p->next != head)
    {
        p = p->next;
        q = q->next;
    }

    /**
     * Link the second last node to the head node.
     */
    q->next = p->next;

    /**
     * Free the memory occupied by the last node.
     */
    free(p);

    /**
     * Return the unchanged head pointer.
     */
    return head;
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates four nodes, forms a circular linked list,
 * displays the list, deletes the last node, and displays the
 * modified linked list.
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
     * Delete the last node.
     */
    printf("after deleting\n");
    head = deleteLastNode(head);

    /**
     * Display the linked list after deletion.
     */
    traversal(head);
}