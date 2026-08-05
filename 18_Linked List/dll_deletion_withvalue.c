/**
 * @file delete_with_value_doubly_linked_list.c
 * @brief Demonstrates deletion of a node with a specified value from a doubly linked list.
 *
 * This program creates a doubly linked list, displays its contents,
 * deletes nodes having specified values, and prints the updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a doubly linked list.
 */
struct node
{
    int data;           /**< Data stored in the node */
    struct node *prev;  /**< Pointer to the previous node */
    struct node *next;  /**< Pointer to the next node */
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
 * @brief Deletes the first node containing the specified value.
 *
 * The function searches for the node containing the given value.
 * If found, it updates the adjacent node links, frees the node,
 * and returns the head of the updated list.
 *
 * @param head Pointer to the first node of the list.
 * @param value Value of the node to be deleted.
 * @return struct node* Pointer to the head of the updated list.
 */
struct node * DeleteWithValue(struct node *head, int value)
{
    struct node *ptr = head;
    struct node *q = head->next;
    struct node *r;
    while (q->data != value && q->next != NULL)
    {
        q = q->next;
        ptr = ptr->next;
    }
    if(q->data == value && q->next != NULL)
    {
        r = q->next;
        ptr->next = r;
        r->prev = ptr;
        free(q);
    }
    if (q->data == value && q->next == NULL)
    {
        ptr->next = NULL;
        free(q);
    }

    return head;
}

/**
 * @brief Entry point of the program.
 *
 * Creates a doubly linked list, prints the list,
 * deletes nodes with values 12 and 33,
 * and prints the updated list.
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
    n1 = DeleteWithValue(n1, 12);
    n1 = DeleteWithValue(n1, 33);
    traversal(n1);
}