/**
 * @file student_array.c
 * @brief Program to store and display details of multiple students.
 *
 * This program defines a student structure using typedef. It creates
 * an array of five students, takes input for each student through a
 * function, and displays all stored student details.
 */

#include <stdio.h>

/**
 * @typedef stu_t
 * @brief Represents student information.
 */
typedef struct
{
    char name[30];   /**< Student name */
    int roll;        /**< Student roll number */
} stu_t;

/**
 * @brief Accepts details of students.
 *
 * This function takes an array of student structures and stores
 * the name and roll number of five students.
 *
 * @param s Pointer to the first element of the student structure array.
 */
void value(stu_t *s)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%29s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
    }
}

/**
 * @brief Main function of the program.
 *
 * Creates an array of five student structures, calls the value()
 * function to store student details, and displays the details.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int i;

    /* Array of five students */
    stu_t a[5];

    /* Input student details */
    value(a);

    /* Display student details */
    for (i = 0; i < 5; i++)
    {
        printf("\nName        : %s\n", a[i].name);
        printf("Roll Number : %d\n", a[i].roll);
    }

    return 0;
}