/**
 * @file detect_loop.c
 * @brief Detects a loop in a singly linked list using Floyd's algorithm.
 *
 * This program creates a singly linked list containing a loop and uses
 * the slow and fast pointer technique, also known as Floyd's Cycle
 * Detection Algorithm, to detect whether a loop exists.
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
 * @brief Detects whether a loop exists in the linked list.
 *
 * Uses two pointers:
 * - slow moves one node at a time.
 * - fast moves two nodes at a time.
 *
 * If a loop exists, the slow and fast pointers will eventually
 * point to the same node.
 *
 * @param head Pointer to the first node of the linked list.
 *
 * @return 1 if a loop is detected, otherwise 0.
 */
int detectloop (node_t *head)
{
    node_t *slow = head;
    node_t *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return 1;
        }
        
    }
    
    return 0;
}

/**
 * @brief Entry point of the program.
 *
 * Dynamically creates six nodes and connects them to form a linked list.
 * The last node is connected to the fourth node, creating a loop.
 *
 * The detectloop() function is then called to determine whether
 * the linked list contains a loop.
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

    n2->data = 23;
    n2->next = n3;
    
    n3->data = 89;
    n3->next = n4;
    
    n4->data = 56;
    n4->next = n5;

    n5->data = 67;
    n5->next = n6;

    n6->data = 52;
    n6->next = n4;

    if (detectloop(n1))
    {
        printf("detect loop\n");
    }
    
    else
    {
        printf("loop not detect\n");
    }
    
}