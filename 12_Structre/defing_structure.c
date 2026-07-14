/**
 * @file student_structure.c
 * @brief Program to demonstrate initialization and display of student structures.
 *
 * This program defines a student structure containing a student's
 * name, school name, roll number, and marks. Two student records
 * are initialized and their details are displayed.
 */

#include <stdio.h>

/**
 * @struct student
 * @brief Stores information about a student.
 */
struct student
{
    char *name;      /**< Pointer to the student's name */
    char *school;    /**< Pointer to the school name */
    int rollno;      /**< Student's roll number */
    float marks;     /**< Student's marks */
};

/**
 * @brief Main function of the program.
 *
 * Initializes two student structures with sample data and
 * prints their details.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Initialize student records */
    struct student a = {"abc", "sdj", 54, 89.97};
    struct student b = {"cde", "dc", 32, 78.09};

    /* Display student details */
    printf("%s, %s, %d, %f\n", a.name, a.school, a.rollno, a.marks);
    printf("%s, %s, %d, %f\n", b.name, b.school, b.rollno, b.marks);

    return 0;
}