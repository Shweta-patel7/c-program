/**
 * @file delete_in_between_doubly_linked_list.c
 * @brief Deletes a node at a specified index from a doubly linked list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @brief Structure representing a doubly linked list node.
 */
struct node
{
    int data;               /**< Data stored in the node */
    struct node *prev;      /**< Pointer to the previous node */
    struct node *next;      /**< Pointer to the next node */
};

/**
 * @brief Traverses and prints all nodes in the doubly linked list.
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
 * @brief Deletes a node at the specified index from the doubly linked list.
 *
 * The function updates both the previous and next links
 * of the neighboring nodes and frees the deleted node.
 *
 * @param head Pointer to the first node of the list.
 * @param index Position of the node to be deleted.
 * @return Pointer to the head of the updated list.
 */
struct node * DeleteInBetween(struct node *head, int index)
{
    struct node *ptr = head;
    struct node *q = head->next;
    struct node *r = NULL;
    int i = 0;
    while (i != index - 1)
    {
        q = q->next;
        ptr = ptr->next;
        i++;
    }
    r = q->next;
    ptr->next = q->next;
    r->prev = ptr;
    free(q);
    return head;
}

/**
 * @brief Main function.
 *
 * Creates a doubly linked list, displays it,
 * deletes a node at the specified index,
 * and displays the updated list.
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
    n1 = DeleteInBetween(n1, 3);
    traversal(n1);
}