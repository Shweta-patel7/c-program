/**
 * @file circular_linked_list_count.c
 * @brief Counts and displays the elements of a circular linked list.
 *
 * This program creates a circular linked list using dynamically allocated
 * nodes, displays each element while counting the nodes, and finally
 * releases the allocated memory.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a circular linked list.
 *
 * @var node::data
 * Stores the integer value of the node.
 *
 * @var node::next
 * Pointer to the next node in the circular linked list.
 */
typedef struct node
{
    int data;
    struct node *next;
} node_t;

/**
 * @brief Displays the elements and counts the nodes in a circular linked list.
 *
 * The function starts from the given head node and continues traversing
 * until it reaches the head node again.
 *
 * @param head Pointer to the first node of the circular linked list.
 *
 * @return Number of elements present in the circular linked list.
 */
int count (node_t *head)
{
    int co = 0;
    node_t *ptr = head;
    do
    {
        printf("%d\t", ptr->data);
        co++;
        ptr = ptr->next;
    } while (ptr != head);

    return co;
    
}

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates six nodes, initializes their data and links them
 * together to form a circular linked list. It then calls the count()
 * function to display the elements and determine the number of nodes.
 * Finally, the allocated memory is released.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int cou;
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

    n2->data = 23;
    n2->next = n3;
    
    n3->data = 89;
    n3->next = n4;
    
    n4->data = 56;
    n4->next = n5;

    n5->data = 67;
    n5->next = n6;

    n6->data = 52;
    n6->next = n1;

    cou = count(n1);

    printf("\n number of element in list : %d\n", cou);

    node_t *temp = n1;
    while (temp != NULL)
    {
        node_t *r = temp;
        temp = temp->next;
        free(r);
    }
}