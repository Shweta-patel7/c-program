/**
 * @file student_management.c
 * @brief Student Management System.
 *
 * This program performs basic student record management using structures.
 * It supports the following operations:
 * - Add student records
 * - Search a student by name
 * - Edit student information
 * - Delete a student record
 *
 * The student records are stored in an array of structures.
 */

#include<stdio.h>
#include<string.h>
#include "student_struct.h"

/**
 * @brief Global array of student records.
 */
extern student_t s[MAX];


/**
 * @brief Search a student by name.
 *
 * This function asks the user to enter a student's name and searches
 * the student array for a matching record.
 *
 * @param p Pointer to the student array.
 * @param n Number of valid student records.
 *
 * @return Index of the student if found.
 * @return -1 if the student is not found.
 */

int find(student_t *p, int n)
{
    char temp[20];
    int i;
    
    printf("enter name to be find : ");
    scanf("%s", temp);
    for (i = 0; i < n; i++)
    {
        if (strcmp(temp , p[i].name) == 0)
        {
            return i; 
        }
    }
    return -1;
}

/**
 * @brief Edit a student's information.
 *
 * Searches for a student using the find() function and allows the user
 * to modify one of the following fields:
 * - Name
 * - Roll Number
 * - Class
 * - Section
 *
 * Editing continues until the user selects the EXIT option.
 *
 * @param q Pointer to the student array.
 * @param n Number of student records.
 *
 * @note If the student is not found, an error message is displayed.
 */

void edit(student_t *q, int n)
{
    char ctemp;
    char temp[20];
    int itemp1, itemp2, i, a = 1;
    change r;

    i = find(q, n);
    if (i == -1)
    {
        printf("name not found\n");
    }
    else
    {
    
    while (a)
    {
    printf("name = %s roll no. = %d class = %d section = %c \n", q[i].name, q[i].roll, q[i].class, q[i].section);
    printf("what to change : \n");
    printf("'0' for name \n");
    printf("'1'for roll number \n");
    printf("'2'for class \n");
    printf("'3'for section \n");
    printf("'4'for exit \n");
    scanf("%d", (int *)&r);

    switch (r)
    {
    case NAME:
        printf("%s change name : ", q[i].name);
        scanf(" %19s", temp);
        strcpy(q[i].name, temp);
        break;

    case ROLL:
        printf("%d change roll number : ", q[i].roll);
        scanf(" %d", &itemp1);
        q[i].roll = itemp1;
        break;

    case CLASS:
        printf("%d change class : ", q[i].class);
        scanf(" %d", &itemp2);
        q[i].class = itemp2;
        break;
        
    case SECTION:
        printf("%c change section : ", q[i].section);
        scanf(" %c", &ctemp);
        q[i].section = ctemp;
        break;

    case EXIT:
       printf("exit");
       a = 0;
       break;

    default: printf("default\n");
    }
    
    }
    
    }
}

/**
 * @brief Delete a student record.
 *
 * Searches for a student by name and removes the record by shifting
 * all subsequent records one position toward the beginning of the array.
 *
 * @param r Pointer to the student array.
 * @param n Pointer to the number of student records.
 *
 * @note The total number of students is decremented after successful deletion.
 */

void delete(student_t *r, int *n)
{
    int i, j;
    i = find(r, *n);

    if (i == -1)
    {
        printf("name not found\n");
    }

    else
    {
        for (j = i; j < *n - 1; j++)
        {
            r[j] = r[j + 1];
        }
        (*n)--;
    }
    
    
}

/**
 * @brief Main function of the Student Management System.
 *
 * Workflow:
 * 1. Read the number of students.
 * 2. Read student details.
 * 3. Display the main menu.
 * 4. Perform operations based on user choice:
 *    - Find student
 *    - Edit student
 *    - Delete student
 *    - Exit
 *
 * @return int Returns 0 on successful execution.
 */

int main()
{ 
    int n, i, f, a = 1;
    printf("enter number of student : ");
    scanf("%d", &n);
    update e;

    for (i = 0; i < n; i++)
    {
        printf("enter name : ");
        scanf("%s", s[i].name);
        printf("enter roll number : ");
        scanf("%d", &s[i].roll);
        printf("enter class : ");
        scanf("%d", &s[i].class);
        printf("enter section : ");
        scanf(" %c", &s[i].section);
    }

    while (a)
    {
        printf("'0' for find name \n");
        printf("'1' for edit info of student \n");
        printf("'2' for delete student info enter\n");
        printf("'4' for exit\n");

        scanf("%d",(int *) &e);

        switch (e)
        {
        case FIND:
            f = find(s, n);
            
            if (f != -1)
            {
                printf("name : %s\n", s[f].name);
                printf("roll number : %d\n", s[f].roll);
                printf("class : %d\n", s[f].class);
                printf("section : %c\n", s[f].section);
            }

            else
            {
                printf("name not found\n");
            }    
            break;
        
        case EDIT:
            edit(s, n);

            printf("name : %s\n", s[i].name);
            printf("roll number : %d\n", s[i].roll);
            printf("class : %d\n", s[i].class);
            printf("section : %c\n", s[i].section);
            break;

        case DELETE:    

            delete(s, &n);
            printf("name is deleted\n");  
            break;   

        case EXIT:
        printf("exit");
        a = 0;
        break;

        default: printf("default\n");
        break;
        }
    }
    
    printf("out");
    
}