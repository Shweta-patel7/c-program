/**
 * @file update_student.c
 * @brief Program to demonstrate updating a structure using pointers.
 *
 * This program defines a student structure using typedef. A function
 * receives a pointer to the structure and updates the student's
 * name and marks. The updated details are then displayed.
 */

#include <stdio.h>
#include <string.h>

/**
 * @typedef stu_t
 * @brief Represents a student's information.
 */
typedef struct
{
    char name[30];   /**< Name of the student */
    int marks;       /**< Marks obtained by the student */
} stu_t;

/**
 * @brief Updates the student's details.
 *
 * This function modifies the student's name and marks using
 * a pointer to the structure.
 *
 * @param s Pointer to the student structure to be updated.
 */
void update(stu_t *s)
{
    s->marks = 100;
    strcpy(s->name, "janvi");
}

/**
 * @brief Main function of the program.
 *
 * Creates a student record, updates it using the update()
 * function, and prints the updated details.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Initialize student record */
    stu_t a = {"khushi", 90};

    /* Update student details */
    update(&a);

    /* Display updated details */
    printf("Name  : %s\n", a.name);
    printf("Marks : %d\n", a.marks);

    return 0;
}