/**
 * @file student_pointer_array.c
 * @brief Program to store and display student details using an array of structure pointers.
 *
 * This program defines a student structure using typedef. It creates
 * an array of student structures and an array of structure pointers.
 * The pointers store the addresses of each student record and are used
 * to display the student details.
 */

#include <stdio.h>

/**
 * @typedef stu
 * @brief Represents student information.
 */
typedef struct
{
    char name[20];   /**< Student name */
    int roll;        /**< Student roll number */
    int class;       /**< Student class */
} stu_t;

/**
 * @brief Main function of the program.
 *
 * The function performs the following operations:
 * - Accepts the number of students.
 * - Stores student details in an array of structures.
 * - Creates an array of structure pointers.
 * - Assigns the address of each structure element to a pointer.
 * - Displays student records using structure pointers.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Array of structures */
    stu_t s[n];

    /* Array of structure pointers */
    stu_t *p[n];

    /* Input student details */
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%19s", s[i].name);

        printf("Enter roll no.: ");
        scanf("%d", &s[i].roll);

        printf("Enter class: ");
        scanf("%d", &s[i].class);

        /* Store address of structure element */
        p[i] = &s[i];
    }

    /* Display student details using pointers */
    printf("\n--- Student Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name    : %s\n", p[i]->name);
        printf("Roll No : %d\n", p[i]->roll);
        printf("Class   : %d\n", p[i]->class);
    }

    return 0;
}