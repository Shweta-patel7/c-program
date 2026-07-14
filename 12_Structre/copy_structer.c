/**
 * @file structure_assignment.c
 * @brief Demonstrates structure assignment in C.
 *
 * This program creates a student structure, copies one structure
 * to another using the assignment operator, and displays the
 * contents of both structures.
 */

#include <stdio.h>

/**
 * @struct student
 * @brief Stores information about a student.
 */
struct student
{
    char name[20];   /**< Name of the student */
    int roll_no;     /**< Roll number of the student */
    int marks;       /**< Marks obtained by the student */
};

/**
 * @brief Main function of the program.
 *
 * The function initializes one student structure, copies it to
 * another structure, and prints the details of both structures.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Initialize first student structure */
    struct student a = {"abcd", 35, 90};

    /* Declare second student structure */
    struct student b;

    /* Copy structure a to structure b */
    b = a;

    printf("Printing Structure 1\n");
    printf("Name        : %s\n", a.name);
    printf("Roll Number : %d\n", a.roll_no);
    printf("Marks       : %d\n", a.marks);

    printf("\nPrinting Structure 2\n");
    printf("Name        : %s\n", b.name);
    printf("Roll Number : %d\n", b.roll_no);
    printf("Marks       : %d\n", b.marks);

    return 0;
}