/**
 * @file dynamic_student_array.c
 * @brief Dynamically allocates memory for an array of student structures.
 *
 * This program dynamically allocates memory for a user-specified number
 * of students using malloc(). It accepts the name, roll number, and marks
 * of each student, displays the stored information, and finally releases
 * the allocated memory using free().
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Structure containing student information.
 */
typedef struct
{
    /**
     * @brief Name of the student.
     */
    char name[20];

    /**
     * @brief Roll number of the student.
     */
    int roll;

    /**
     * @brief Marks obtained by the student.
     */
    float marks;

} student_t;

/**
 * @brief Main function of the program.
 *
 * Dynamically allocates memory for an array of student_t structures.
 * The program accepts information for each student, displays all
 * student information, and releases the allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to the dynamically allocated student array.
     */
    student_t *ptr;

    /**
     * @brief Temporary buffer used to read the student's name.
     */
    char temp[20];

    /**
     * @brief Number of students.
     */
    int n;

    /**
     * @brief Loop counter.
     */
    int i;

    /**
     * Ask the user to enter the number of students.
     */
    printf("Enter number of students: ");
    scanf("%d", &n);

    /**
     * Dynamically allocate memory for 'n' student_t structures.
     */
    ptr = malloc(n * sizeof(*ptr));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Read information for each student.
     */
    for (i = 0; i < n; i++)
    {
        printf("\nInfo for student %d\n", i + 1);

        /**
         * Read the student's name.
         */
        printf("Enter name: ");
        scanf("%19s", temp);

        /**
         * Copy the name into the current student's structure.
         */
        strcpy(ptr[i].name, temp);

        /**
         * Read the student's roll number.
         */
        printf("Enter roll number: ");
        scanf("%d", &ptr[i].roll);

        /**
         * Read the student's marks.
         */
        printf("Enter marks: ");
        scanf("%f", &ptr[i].marks);
    }

    /**
     * Display information for all students.
     */
    printf("\nStudent Information\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name = %s\n", ptr[i].name);
        printf("Roll number: %d\n", ptr[i].roll);
        printf("Marks: %.2f\n", ptr[i].marks);
    }

    /**
     * Release the dynamically allocated memory.
     */
    free(ptr);

    /**
     * Set the pointer to NULL to avoid a dangling pointer.
     */
    ptr = NULL;

    return 0;
}