/**
 * @file delete_first_node_doubly_linked_list.c
 * @brief Delete the first node from a doubly linked list.
 *
 * This program creates a doubly linked list, traverses it,
 * deletes the first node, and then traverses the updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Structure representing a node in a doubly linked list.
 */
struct node
{
    int data;               /**< Data stored in the node */
    struct node *prev;      /**< Pointer to the previous node */
    struct node *next;      /**< Pointer to the next node */
};

/**
 * @brief Traverses and prints the doubly linked list.
 *
 * @param head Pointer to the first node of the list.
 */
void traversal (struct node *head)
{
    while (head != NULL)
    {
        printf("element : %d\n", head->data);
        head = head->next;
    }
}

/**
 * @brief Deletes the first node of the doubly linked list.
 *
 * If the list is empty, the function returns NULL.
 * Otherwise, the first node is removed, the head pointer
 * is updated, and the memory occupied by the deleted node
 * is released.
 *
 * @param head Pointer to the first node of the list.
 * @return Pointer to the updated head of the list.
 */
struct node *DeleteFirstNode(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    struct node *ptr = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    free(ptr);
    return head;
}

/**
 * @brief Main function.
 *
 * Creates a doubly linked list, displays the list,
 * deletes the first node, and displays the updated list.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    struct node *n5;
    struct node *n6;

    n1 = (struct node *) malloc (sizeof(struct node));
    n2 = (struct node *) malloc (sizeof(struct node));
    n3 = (struct node *) malloc (sizeof(struct node));
    n4 = (struct node *) malloc (sizeof(struct node));
    n5 = (struct node *) malloc (sizeof(struct node));
    n6 = (struct node *) malloc (sizeof(struct node));

    n1->data = 65;
    n1->prev = NULL;
    n1->next = n2;

    n2->data = 51;
    n2->prev = n1;
    n2->next = n3;

    n3->data = 87;
    n3->prev = n2;
    n3->next = n4;

    n4->data = 33;
    n4->prev = n3;
    n4->next = n5;

    n5->data = 21;
    n5->prev = n4;
    n5->next = n6;

    n6->data = 12;
    n6->prev = n5;
    n6->next = NULL;

    printf("befor deleting\n");
    traversal(n1);

    printf("after deleting\n");
    n1 = DeleteFirstNode(n1);
    traversal(n1);
}