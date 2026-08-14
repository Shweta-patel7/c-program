/**
 * @file
 * @brief Program to create, display, and reverse a singly linked list.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a node in a singly linked list.
 */
struct node
{
    int data;
    struct node *next;
};

/**
 * @brief Displays all elements of the linked list.
 *
 * Traverses the linked list from the given head node
 * and prints the data stored in each node.
 *
 * @param head Pointer to the first node of the linked list.
 */
void display(struct node *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
    
}

/**
 * @brief Reverses a singly linked list.
 *
 * Reverses the direction of the next pointers of all nodes
 * and returns the new head of the linked list.
 *
 * @param head Pointer to the first node of the linked list.
 *
 * @return Pointer to the new head of the reversed linked list.
 */
struct node * reverse (struct node *head)
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *other = NULL;

    while (current != NULL)
    {
        other = current->next;
        current->next = prev;

        prev = current;
        current = other;
    }
    
    head = prev;
    return head;
    
    
}

/**
 * @brief Main function.
 *
 * Creates a singly linked list by taking the number of nodes
 * and their data from the user. The list is displayed and
 * then reversed and displayed again.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i, n;
    struct node *head;
    struct node *newnode;
    struct node *temp;
    printf("enter number of data : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        newnode = (struct node *) malloc(sizeof(struct node));

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
    display(head);
    head = reverse(head);
    printf("\nreversed linked list\n");
    display(head);
}