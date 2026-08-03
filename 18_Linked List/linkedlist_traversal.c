#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal (struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{
    struct node *head;
    struct node *two;
    struct node *three;
    struct node *four;

    head = (struct node *)malloc (sizeof(struct node));
    two = (struct node *)malloc (sizeof(struct node));
    three = (struct node *)malloc (sizeof(struct node));
    four = (struct node *)malloc (sizeof(struct node));

    head->data = 34;
    head->next = two;

    two->data = 65;
    two->next = three;

    three->data = 87;
    three->next = four;

    four->data = 90;
    four->next = NULL;

    traversal(head);
}