/**
 * @file merge_linked_list.c
 * @brief Creates two singly linked lists and merges them into one list.
 *
 * This program dynamically creates two singly linked lists using user
 * input. It displays both lists, merges the second list at the end of
 * the first list, displays the merged list, and finally frees the
 * dynamically allocated memory.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 *
 * @var node::data
 * Stores the integer value of the node.
 *
 * @var node::next
 * Pointer to the next node in the linked list.
 */
typedef struct node
{
    int data;
    struct node *next;
} node_t;

/**
 * @brief Displays the elements of a linked list and counts its nodes.
 *
 * Traverses the linked list from the given head pointer, prints
 * every node's data, and returns the total number of nodes.
 *
 * @param head Pointer to the first node of the linked list.
 *
 * @return Number of elements present in the linked list.
 */
int display (node_t *head)
{
    int count = 0;
while (head != NULL)
    {
        printf("%d\t", head->data);
        count++;
        head = head->next;
    }
    
    return count;
}

/**
 * @brief Merges two singly linked lists.
 *
 * Attaches the second linked list to the end of the first linked list.
 * If either list is empty, the non-empty list is returned.
 *
 * @param head1 Pointer to the first linked list.
 * @param head2 Pointer to the second linked list.
 *
 * @return Pointer to the head of the merged linked list.
 */
node_t  * mergell (node_t *head1, node_t *head2)
{
    node_t *temp;

    if(head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    
    temp = head1;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = head2;
    return head1;
}

/**
 * @brief Entry point of the program.
 *
 * Creates two singly linked lists using dynamically allocated nodes.
 * The program displays both lists, merges them, displays the merged
 * list, and releases the allocated memory.
 *
 * @return 0 on successful execution.
 */
int main()
{
    node_t *head1 = NULL;
    node_t *head2 = NULL;
    node_t *merge = NULL;
    int p, q;
    node_t *newnode;
    node_t *temp;
    int n, i, m;
    printf("enter number of element : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = (node_t *)malloc (sizeof(node_t));
        printf("enter data : ");
        scanf("%d", &newnode->data);

        if (head1 == NULL)
        {
            head1 = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->next = NULL;
            temp = newnode;
        }        
    }

    printf("enter number of element : ");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        newnode = (node_t *)malloc (sizeof(node_t));
        printf("enter data : ");
        scanf("%d", &newnode->data);

        if (head2 == NULL)
        {
            head2 = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->next = NULL;
            temp = newnode;
        }        
    }


    printf("list 1\n");
    p = display(head1);
    printf("\n no. of element : %d", p);

    printf("\nlist 2\n");
    q = display(head2);
    printf("\n no. of element : %d", q);

    printf("\nmerge 2 linked list\n");
    merge = mergell(head1, head2); 
    display(merge);

    temp = merge;
    while (temp != NULL)
    {
        node_t *r = temp;
        temp = temp->next;
        free(r);
    }
    
}