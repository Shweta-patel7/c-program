/**
 * @file middle_node.c
 * @brief Finds the middle node of a singly linked list.
 *
 * This program dynamically creates a singly linked list using user input.
 * It uses the slow and fast pointer technique to find the middle node
 * without calculating the length of the linked list.
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
 * @brief Finds and prints the middle value of the linked list.
 *
 * The function uses two pointers:
 * - slow moves one node at a time.
 * - fast moves two nodes at a time.
 *
 * When the fast pointer reaches the end of the list, the slow pointer
 * will be pointing to the middle node.
 *
 * @param head Pointer to the first node of the linked list.
 */
void middlenode (struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    printf("middle value is : %d\n", slow->data);
}

/**
 * @brief Entry point of the program.
 *
 * Dynamically creates a singly linked list using the number of elements
 * entered by the user and then finds the middle node of the list.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i, n;
    struct node *head = NULL;
    struct node *newnode;
    struct node *temp = NULL;
    printf("enter number of element : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = (struct node *) malloc (sizeof(struct node));
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
    
    middlenode(head);
}