/**
 * @file dynamic_student.c
 * @brief Demonstrates dynamic memory allocation for a structure.
 *
 * This program dynamically allocates memory for one student_t structure
 * using malloc(). It initializes the student's name, roll number, and
 * marks, displays the stored information, and finally releases the
 * allocated memory using free().
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
 * Dynamically allocates memory for one student_t structure,
 * initializes its members, displays the student information,
 * and releases the allocated memory.
 *
 * @return 0 on successful execution.
 * @return 1 if memory allocation fails.
 */
int main(void)
{
    /**
     * @brief Pointer to dynamically allocated student structure.
     */
    student_t *ptr;

    /**
     * Allocate memory for one student_t structure.
     *
     * sizeof(*ptr) gives the size of the structure pointed to by ptr.
     */
    ptr = malloc(sizeof(*ptr));

    /**
     * Check whether memory allocation was successful.
     */
    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    /**
     * Copy the student name into the name array.
     */
    strcpy(ptr->name, "jdhcdb");

    /**
     * Assign marks to the student.
     */
    ptr->marks = 99.3f;

    /**
     * Assign the roll number to the student.
     */
    ptr->roll = 65;

    /**
     * Display the student's name.
     */
    printf("Name = %s\n", ptr->name);

    /**
     * Display the student's roll number.
     */
    printf("Roll number: %d\n", ptr->roll);

    /**
     * Display the student's marks with two decimal places.
     */
    printf("Marks: %.2f\n", ptr->marks);

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