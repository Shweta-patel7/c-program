/**
 * @file linked_list_sort.c
 * @brief Creates a singly linked list and sorts its elements.
 *
 * This program dynamically creates a singly linked list,
 * displays the elements before sorting, sorts the elements
 * in ascending order, displays the sorted list, and finally
 * frees the allocated memory.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 */
typedef struct node
{
    int data;           /**< Data stored in the node */
    struct node *next;  /**< Pointer to the next node */
} node_t;

/**
 * @brief Displays all elements of the linked list.
 *
 * Traverses the linked list from the head node to the last node
 * and prints the data stored in each node.
 *
 * @param head Pointer to the first node of the linked list.
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
 * @brief Sorts the linked list in ascending order.
 *
 * Compares the data of each node with the remaining nodes
 * and swaps the data values whenever they are out of order.
 *
 * @param head Pointer to the first node of the linked list.
 * @return node_t* Pointer to the head of the sorted linked list.
 */
node_t * sort (node_t *head)
{
    node_t *ptr;
    node_t *q;
    int temp;
    for (ptr = head; ptr != NULL; ptr = ptr->next)
    {
        for (q = ptr->next; q != NULL; q = q->next)
        {
            if (ptr->data > q->data)
            {
                temp = ptr->data;
                ptr->data = q->data;
                q->data = temp;
            }
        }
    }
    
    return head;
}

/**
 * @brief Entry point of the program.
 *
 * Dynamically creates a singly linked list based on the number
 * of elements entered by the user. The list is displayed before
 * and after sorting. Finally, all dynamically allocated nodes
 * are freed.
 *
 * @return int Returns 0 when the program executes successfully.
 */
int main()
{
    node_t *head = NULL;
    node_t *newnode;
    node_t *temp;
    int n, i;
    printf("enter number of element : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = (node_t *)malloc (sizeof(node_t));
        printf("enter data : ");
        scanf("%d", &newnode->data);

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->next = NULL;
            temp = newnode;
        }        
    }

    printf("befor sorting\n");
    display(head);

    printf("\nafter sorting \n");
    head = sort(head);
    display(head);

    temp = head;
    while (temp != NULL)
    {
        node_t *r = temp;
        temp = temp->next;
        free(r);
    }
    
    
}