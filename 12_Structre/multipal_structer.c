/**
 * @file nested_student_details.c
 * @brief Program to store and display complete student details using nested structures.
 *
 * This program demonstrates the use of multiple structures nested inside
 * another structure. It stores student personal details, school details,
 * and subject details for multiple students and displays all records.
 */

#include <stdio.h>

/**
 * @typedef student_t
 * @brief Stores personal details of a student.
 */
typedef struct
{
    char name[20];   /**< Student name */
    int age;         /**< Student age */
} student_t;

/**
 * @typedef school_t
 * @brief Stores school-related details of a student.
 */
typedef struct
{
    char school[20]; /**< School name */
    int roll;        /**< Student roll number */
} school_t;

/**
 * @typedef sub_t
 * @brief Stores subject details of a student.
 */
typedef struct
{
    char sub[20];    /**< Subject name */
    int marks;       /**< Marks obtained in the subject */
} sub_t;

/**
 * @typedef all_t
 * @brief Combines student, school, and subject details.
 *
 * This structure contains other structures as members,
 * demonstrating nested structures.
 */
typedef struct
{
    student_t s;  /**< Student personal information */
    school_t a;   /**< School information */
    sub_t b;      /**< Subject information */
} all_t;

/**
 * @brief Main function of the program.
 *
 * The function:
 * - Accepts the number of students.
 * - Takes student, school, and subject details as input.
 * - Stores the records using an array of nested structures.
 * - Displays all stored student information.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n, i;

    printf("Number of students: ");
    scanf("%d", &n);

    /* Array of nested structure */
    all_t c[n];

    /* Input student details */
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%19s", c[i].s.name);

        printf("Enter age: ");
        scanf("%d", &c[i].s.age);

        printf("Enter school: ");
        scanf("%19s", c[i].a.school);

        printf("Enter roll no.: ");
        scanf("%d", &c[i].a.roll);

        printf("Enter subject: ");
        scanf("%19s", c[i].b.sub);

        printf("Enter marks: ");
        scanf("%d", &c[i].b.marks);
    }

    /* Display student details */
    printf("\n--- Student Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name    : %s\n", c[i].s.name);
        printf("Age     : %d\n", c[i].s.age);
        printf("School  : %s\n", c[i].a.school);
        printf("Roll No : %d\n", c[i].a.roll);
        printf("Subject : %s\n", c[i].b.sub);
        printf("Marks   : %d\n", c[i].b.marks);
    }

    return 0;
}