/**
 * @file student_linked_list.c
 * @brief Student information management using a singly linked list.
 *
 * This program creates a singly linked list containing student names
 * and roll numbers. It provides functionality to display students,
 * find a student by roll number, delete a student by roll number,
 * and free the dynamically allocated memory.
 */

#include<stdio.h>
#include<stdlib.h>

/**
 * @struct node
 * @brief Represents a student node in a singly linked list.
 *
 * @var node::name
 * Stores the name of the student.
 *
 * @var node::roll
 * Stores the roll number of the student.
 *
 * @var node::next
 * Pointer to the next student node in the linked list.
 */
typedef struct node
{
    char name[50];
    int roll;
    struct node *next;
} node_t;

/**
 * @brief Displays all student information.
 *
 * Traverses the linked list from the given head node and
 * prints the name and roll number of every student.
 *
 * @param head Pointer to the first node of the linked list.
 */
void display (node_t *head)
{
    while (head != NULL)
    {
        printf("name : %s\n", head->name);
        printf("roll no.:%d\n", head->roll);
        head = head->next;
    }
}

/**
 * @brief Finds a student using the roll number.
 *
 * Traverses the linked list until a node with the specified
 * roll number is found or the end of the list is reached.
 *
 * @param head Pointer to the first node of the linked list.
 * @param n Roll number to search for.
 *
 * @return Pointer to the node containing the specified roll number.
 */
node_t * find (node_t *head, int n)
{
    node_t *ptr = head;
    while (ptr != NULL && ptr->roll != n)
    {
        ptr = ptr->next;
    }
    
    return ptr;
}

/**
 * @brief Deletes a student using the roll number.
 *
 * Searches for the node containing the specified roll number
 * and removes it from the linked list. The allocated memory
 * of the deleted node is released using free().
 *
 * @param head Pointer to the first node of the linked list.
 * @param n Roll number of the student to be deleted.
 *
 * @return Pointer to the updated head of the linked list.
 */
node_t * delete (node_t *head, int n)
{
    node_t *ptr = head;
    node_t *temp = head->next;
    if (ptr->roll == n)
    {
        head = temp;
        free(ptr);
        return head;
        
    }

    while (temp != NULL && temp->roll != n)
    {
        temp = temp->next;
        ptr = ptr->next;
    }
    if (temp->next == NULL && temp->roll == n)
    {
        ptr->next = NULL;
        free(temp);
        return head;
    }
    
    else
    {
        ptr->next = temp->next;
        temp->next = NULL;
        return head;
    }

    
}

/**
 * @brief Main function of the program.
 *
 * Creates a linked list containing student information entered
 * by the user. The program displays all students, searches for
 * a student using a roll number, and optionally deletes a student.
 *
 * Finally, all dynamically allocated memory is released.
 *
 * @return 0 on successful execution.
 */
int main()
{
    int i, n;
    int rol;
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
        printf("enter name of student %d : ", i + 1);
        scanf("%49s", newnode->name);
        printf("enter roll number : ");
        scanf("%d", &newnode->roll);
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

    display(head);

    printf("\nenter roll number to find : ");
    scanf("%d", &rol);

    node_t *ptr;
    ptr = find(head, rol);
    if (ptr != NULL)
    {   
        printf("name of student : %s\n", ptr->name);
        printf("roll number of student : %d\n", ptr->roll);
    }
    else
    {
        printf("student not found\n");
    }
    
    char c;
    int r;
    printf("delete any roll (yes(y) or no (n)) : ");
    scanf(" %c", &c);

    if (c == 'y')
    {
        printf(" enter roll number : ");
        scanf("%d", &r);

        head = delete(head, r);
        display(head);
    }

    else
    {
        return 0;
    }
    
    temp = head;

    while (temp != NULL)
    {
        node_t *r = temp;
        temp = temp->next;
        free(r);
    }
}