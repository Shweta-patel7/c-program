/**
 * @file linked_list_dynamic.c
 * @brief Creates, displays, counts, and frees a singly linked list.
 *
 * This program dynamically creates a singly linked list based on the
 * number of elements entered by the user. It displays all elements,
 * counts the number of nodes, and finally releases the allocated memory.
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
struct node
{
    int data;
    struct node *next;
};

/**
 * @brief Displays all elements and counts the nodes in the linked list.
 *
 * Traverses the linked list from the head node to the last node,
 * prints the data of each node, and counts the total number of nodes.
 *
 * @param head Pointer to the first node of the linked list.
 */
void print (struct node *head)
{
    int count = 0;
    while (head != NULL)
    {
        printf("data : %d\n", head->data);
        count++;
        head = head->next;
    }
    
    printf("numder of element in linked list : %d\n", count);
}

/**
 * @brief Frees all dynamically allocated nodes of the linked list.
 *
 * Traverses the linked list one node at a time, stores the next node
 * in a temporary pointer, and then releases the current node.
 *
 * @param head Pointer to the first node of the linked list.
 */
void freelist (struct node *head)
{
    struct node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    
}

/**
 * @brief Entry point of the program.
 *
 * Reads the number of nodes from the user, dynamically allocates
 * memory for each node, stores user-provided data, links the nodes,
 * displays the linked list, and finally frees the allocated memory.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int n, i;
    printf("enter number of student : ");
    scanf("%d", &n);
    
    struct node *head;
    struct node *temp;
    struct node *newnode;

    for (i = 0; i < n; i++)
    {
        newnode = (struct node *) malloc (sizeof(struct node));

        printf("enter data %d : ", i + 1);
        scanf("%d", &newnode->data);

        newnode->next = NULL;

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
    
    print(head);

    freelist(head);
    
}