#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
   struct node *next;
} node_t;

void display (node_t *head)
{
    while (head != NULL)
    {
        printf("%d\t", head->data);
        head = head->next;
    }
    
}

node_t * duplicate (node_t *head)
{
    node_t *p = head;
    node_t *q = head;
    node_t *d;
    int i, j;

    for (p; p != NULL; p = p->next)
    {
        q = p->next;
        for (q; q != NULL; q = q->next)
        {
            d = q->next;
            if (d != NULL && p->data == d->data)
            {
                q->next = d->next;
                free(d);
            }
        } 
    }

    return head;
}

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
            newnode->next = NULL;
            temp = newnode;

        }
        
    }
    
    printf("linkde list \n");
    display(head);

    head = duplicate(head);
    printf("\n after removing duplicate \n");
    display(head);

    temp = head;

    while (temp != NULL)
    {
        node_t *rem = temp;
        temp = temp->next;
        free(rem);
    }
    

}
