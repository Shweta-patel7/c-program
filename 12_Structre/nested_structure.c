/**
 * @file nested_structure.c
 * @brief Program to demonstrate nested structures using typedef.
 *
 * This program defines two structures using typedef. One structure
 * is nested inside another structure. It initializes the structure
 * variables and displays the stored student details.
 */

#include <stdio.h>

/**
 * @typedef st_t
 * @brief Stores personal details of a student.
 */
typedef struct
{
    char name[20];   /**< Student name */
    int dob;         /**< Student date of birth */
} st_t;

/**
 * @typedef de_t
 * @brief Stores academic details along with personal details.
 *
 * This structure contains another structure (st_t) as a member,
 * demonstrating nested structures.
 */
typedef struct
{
    char school[20]; /**< Name of the school */
    int roll;        /**< Student roll number */
    st_t a;          /**< Nested structure containing personal details */
} de_t;

/**
 * @brief Main function of the program.
 *
 * Initializes a nested structure variable and displays the
 * student's personal and academic details.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Initialize nested structure */
    de_t s = {"dps", 23, {"abc", 12}};

    /* Display student details */
    printf("Name   : %s\n", s.a.name);
    printf("DOB    : %d\n", s.a.dob);
    printf("School : %s\n", s.school);
    printf("Roll Number : %d\n", s.roll);

    return 0;
}