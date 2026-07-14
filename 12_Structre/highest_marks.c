/**
 * @file highest_marks_student.c
 * @brief Program to find the student with the highest marks.
 *
 * This program accepts details of multiple students, compares their
 * marks, and displays the details of the student who has scored the
 * highest marks.
 */

#include <stdio.h>

/**
 * @struct student
 * @brief Stores information about a student.
 */
struct student
{
    char name[20];    /**< Name of the student */
    int roll_no;      /**< Roll number of the student */
    int marks;        /**< Marks obtained by the student */
};

/**
 * @brief Main function of the program.
 *
 * The function performs the following operations:
 * - Reads the number of students.
 * - Accepts each student's details.
 * - Finds the student with the highest marks.
 * - Displays the details of the top-scoring student.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n, i, max = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];

    /* Input student details */
    for (i = 0; i < n; i++)
    {
        printf("\nDetails of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%19s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    /* Find student with highest marks */
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[max].marks)
        {
            max = i;
        }
    }

    /* Display topper details */
    printf("\nStudent with Highest Marks\n");
    printf("Name        : %s\n", s[max].name);
    printf("Roll Number : %d\n", s[max].roll_no);
    printf("Marks       : %d\n", s[max].marks);

    return 0;
}