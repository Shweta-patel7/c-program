/**
 * @file sort_student.c
 * @brief Program to sort student details alphabetically by name.
 *
 * This program stores details of multiple students using a structure.
 * It accepts student names and roll numbers, sorts the records in
 * alphabetical order based on names using strcmp(), and displays the
 * sorted student details.
 */

#include <stdio.h>
#include <string.h>

/**
 * @struct student
 * @brief Stores student information.
 */
struct student
{
    char name[50];   /**< Student name */
    int rollno;      /**< Student roll number */
};

/**
 * @brief Main function of the program.
 *
 * The function performs the following operations:
 * - Reads the number of students.
 * - Accepts name and roll number of each student.
 * - Sorts students alphabetically by name.
 * - Displays the sorted student records.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    /* Array of student structures */
    struct student s[n];
    struct student temp;

    /* Input student details */
    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);
    }

    /* Sort students by name */
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    /* Display sorted student details */
    printf("\nSorted Student Details\n");

    for (i = 0; i < n; i++)
    {
        printf("Name        : %s\n", s[i].name);
        printf("Roll Number : %d\n", s[i].rollno);
    }

    return 0;
}