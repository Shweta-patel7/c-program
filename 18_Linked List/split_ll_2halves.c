/**
 * @file
 * @brief Splits a singly linked list into two parts.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 *
 * @var node::data
 * Stores the integer data of the node.
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
 * @brief Displays the elements of the linked list and counts them.
 *
 * Traverses the linked list from the given head node, prints
 * the data of every node, and counts the total number of nodes.
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
 * @brief Entry point of the program.
 *
 * Creates a singly linked list by taking the number of elements
 * and their data from the user. The list is then divided into
 * two parts from the middle and both parts are displayed.
 *
 * Finally, dynamically allocated memory for both lists is freed.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i, n;
    int d;
    printf("enter number of element : ");
    scanf("%d", &n);
    node_t *head =NULL;
    node_t *newnode;
    node_t *temp = NULL;
    node_t *split = NULL;

    for (i = 0; i < n; i++)
    {
        newnode = (node_t *) malloc (sizeof(node_t));
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
            temp = newnode;
        }
        
    }

    d = display(head);
    printf("\nnumber of element : %d\n", d);
        
    d = d/2;
    temp = head;
    split = head;
   
    for (i = 1; i < d; i++)
    {
        temp = temp->next;
    }
    split = temp->next;
    temp->next = NULL;    

    printf("\nsplit 1\n");
    display(head);

    printf("\nsplit 2\n");
    display(split);
    
     temp = head;
    while (temp != NULL)
    {
        node_t *r = temp;
        temp = temp->next;
        free(r);
    }

     temp = split;
    while (temp != NULL)
    {
        node_t *r = temp;
        temp = temp->next;
        free(r);
    }

    
}