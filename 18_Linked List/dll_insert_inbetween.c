/**
 * @file doubly_linked_list_insert_between.c
 * @brief Demonstrates insertion of a node at a specified position in a doubly linked list.
 *
 * The program creates a doubly linked list, displays its contents,
 * inserts a new node between existing nodes, and displays the updated list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node of a doubly linked list.
 */
struct node
{
    /**
     * @brief Stores the data of the node.
     */
    int data;

    /**
     * @brief Pointer to the previous node.
     */
    struct node *prev;

    /**
     * @brief Pointer to the next node.
     */
    struct node *next;
};

/**
 * @brief Traverses and prints the elements of the doubly linked list.
 *
 * Starts from the head node and moves in the forward direction until
 * the end of the list is reached.
 *
 * @param head Pointer to the first node of the linked list.
 */
void traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("element : %d\n", head->data);
        head = head->next;
    }
}

/**
 * @brief Inserts a new node at the specified index in a doubly linked list.
 *
 * The function traverses the list up to the specified position,
 * inserts a new node, and updates both next and previous pointers.
 *
 * @param head Pointer to the first node of the linked list.
 * @param data Data to be inserted.
 * @param index Position after which the new node is inserted.
 *
 * @return Pointer to the head of the linked list.
 */
struct node *InsertInBetween(struct node *head, int data, int index)
{
    /**
     * @brief Pointer to the new node.
     */
    struct node *ptr;

    /**
     * @brief Pointer used for traversal.
     */
    struct node *p = head;

    /**
     * @brief Pointer to the next node after the insertion point.
     */
    struct node *q = NULL;

    /**
     * @brief Loop counter.
     */
    int i = 0;

    /**
     * Allocate memory for the new node.
     */
    ptr = (struct node *)malloc(sizeof(struct node));

    /**
     * Store the given data.
     */
    ptr->data = data;

    /**
     * Traverse to the insertion position.
     */
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    /**
     * Save the next node.
     */
    q = p->next;

    /**
     * Update the next pointer of the new node.
     */
    ptr->next = p->next;

    /**
     * Link the previous node to the new node.
     */
    p->next = ptr;

    /**
     * Update the previous pointer of the new node.
     */
    ptr->prev = p;

    /**
     * Update the previous pointer of the next node.
     */
    q->prev = ptr;

    return head;
}

/**
 * @brief Main function of the program.
 *
 * Creates a doubly linked list with six nodes,
 * displays the original list,
 * inserts a new node,
 * and displays the modified list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    /**
     * @brief Pointers to the linked list nodes.
     */
    struct node *n1;
    struct node *n2;
    struct node *n3;
    struct node *n4;
    struct node *n5;
    struct node *n6;

    /**
     * Allocate memory for all nodes.
     */
    n1 = (struct node *)malloc(sizeof(struct node));
    n2 = (struct node *)malloc(sizeof(struct node));
    n3 = (struct node *)malloc(sizeof(struct node));
    n4 = (struct node *)malloc(sizeof(struct node));
    n5 = (struct node *)malloc(sizeof(struct node));
    n6 = (struct node *)malloc(sizeof(struct node));

    /**
     * Initialize node 1.
     */
    n1->data = 65;
    n1->prev = NULL;
    n1->next = n2;

    /**
     * Initialize node 2.
     */
    n2->data = 51;
    n2->prev = n1;
    n2->next = n3;

    /**
     * Initialize node 3.
     */
    n3->data = 87;
    n3->prev = n2;
    n3->next = n4;

    /**
     * Initialize node 4.
     */
    n4->data = 33;
    n4->prev = n3;
    n4->next = n5;

    /**
     * Initialize node 5.
     */
    n5->data = 21;
    n5->prev = n4;
    n5->next = n6;

    /**
     * Initialize node 6.
     */
    n6->data = 12;
    n6->prev = n5;
    n6->next = NULL;

    /**
     * Display the original linked list.
     */
    printf("befor inserting\n");
    traversal(n1);

    /**
     * Insert a new node containing 22.
     */
    printf("after inserting\n");
    n1 = InsertInBetween(n1, 22, 3);

    /**
     * Display the updated linked list.
     */
    traversal(n1);
}