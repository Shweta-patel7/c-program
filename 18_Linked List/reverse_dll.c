/**
 * @file doubly_linked_list_reverse.c
 * @brief Reverses a doubly linked list.
 *
 * This program creates a doubly linked list, displays the list,
 * reverses the list by swapping the next and prev pointers of
 * each node, and displays the reversed list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a doubly linked list.
 *
 * @var node::data
 * Stores the integer value of the node.
 *
 * @var node::next
 * Pointer to the next node in the list.
 *
 * @var node::prev
 * Pointer to the previous node in the list.
 */
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node_t;

/**
 * @brief Displays all elements of the doubly linked list.
 *
 * Traverses the list from the given head node using the next
 * pointer and prints the data stored in each node.
 *
 * @param head Pointer to the first node of the list.
 * @return void
 */
void display (node_t *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }   
}

/**
 * @brief Reverses a doubly linked list.
 *
 * Swaps the next and previous pointers of every node.
 * The last node of the original list becomes the new head.
 *
 * @param head Pointer to the first node of the original list.
 * @return Pointer to the new head of the reversed list.
 */
node_t *reverse(node_t *head)
{
    node_t *temp;
    node_t *n = head;
    node_t *newhead = NULL;

    while (n != NULL)
    {
        temp = n->next;

        n->next = n->prev;
        n->prev = temp;

        newhead = n;   // current node becomes new head

        n = temp;
    }

    return newhead;
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates six nodes, creates a doubly linked list,
 * displays the original list, reverses the list, displays the
 * reversed list, and finally frees all allocated memory.
 *
 * @return 0 on successful execution.
 */
int main()
{
    node_t *n1;
    node_t *n2;
    node_t *n3;
    node_t *n4;
    node_t *n5;
    node_t *n6;

    n1 = (node_t *) malloc (sizeof(node_t));
    n2 = (node_t *) malloc (sizeof(node_t));
    n3 = (node_t *) malloc (sizeof(node_t));
    n4 = (node_t *) malloc (sizeof(node_t));
    n5 = (node_t *) malloc (sizeof(node_t));
    n6 = (node_t *) malloc (sizeof(node_t));

    n1->data = 32;
    n1->next = n2;
    n1->prev = NULL;

    n2->data = 23;
    n2->next = n3;
    n2->prev = n1;
    
    n3->data = 89;
    n3->next = n4;
    n3->prev = n2;
    
    n4->data = 56;
    n4->next = n5;
    n4->prev = n3;

    n5->data = 67;
    n5->next = n6;
    n5->prev = n4;

    n6->data = 52;
    n6->next = NULL;
    n6->prev = n5;

    printf("without reverse\n");
    display(n1);

    printf("\n after reverse\n");
    n1 = reverse(n1);
    display(n1);

    
    node_t *temp = n1;

    while (temp != NULL)
    {
        node_t *r = temp;
        temp = temp->next;
        free(r);
    }
}