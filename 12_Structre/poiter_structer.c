/**
 * @file people_details.c
 * @brief Program to demonstrate updating a structure using a pointer.
 *
 * This program defines a people structure using typedef. A function
 * receives a pointer to the structure and assigns values to its
 * members. The updated details are then displayed.
 */

#include <stdio.h>
#include <string.h>

/**
 * @typedef people_t
 * @brief Represents personal details of a person.
 */
typedef struct
{
    char name[50];   /**< Person's name */
    int age;         /**< Person's age */
    int salary;      /**< Person's salary */
} people_t;

/**
 * @brief Updates the details of a person.
 *
 * This function assigns values to the structure members using
 * a pointer and the structure pointer operator (->).
 *
 * @param s Pointer to the people structure to be updated.
 */
void input(people_t *s)
{
    s->age = 24;
    strcpy(s->name, "abc");
    s->salary = 34567;
}

/**
 * @brief Main function of the program.
 *
 * Creates a people structure variable, initializes its values
 * through the input() function, and displays the details.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Declare structure variable */
    people_t a;

    /* Assign values using pointer */
    input(&a);

    /* Display person details */
    printf("Name   : %s\n", a.name);
    printf("Age    : %d\n", a.age);
    printf("Salary : %d\n", a.salary);

    return 0;
}