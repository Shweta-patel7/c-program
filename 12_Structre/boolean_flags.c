/**
 * @file bitfield_boolean.c
 * @brief Program to demonstrate the use of bit fields for storing Boolean flags.
 *
 * This program defines a structure with bit fields to store multiple
 * Boolean values efficiently. Each flag occupies only one bit of memory.
 */

#include <stdio.h>

/**
 * @struct boolean
 * @brief Stores Boolean flags using bit fields.
 *
 * Each member occupies one bit and can store either:
 * - 0 : False
 * - 1 : True
 */
struct boolean
{
    unsigned int student : 1;   /**< Indicates whether the person is a student */
    unsigned int employee : 1;  /**< Indicates whether the person is an employee */
    unsigned int car : 1;       /**< Indicates whether the person owns a car */
    unsigned int home : 1;      /**< Indicates whether the person owns a house */
};

/**
 * @brief Main function of the program.
 *
 * Creates a structure variable, assigns values to the bit fields,
 * and displays the Boolean flags.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Declare structure variable */
    struct boolean person;

    /* Assign Boolean values */
    person.employee = 1;
    person.student = 0;
    person.car = 1;
    person.home = 1;

    /* Display Boolean flags */
    printf("Is student     : %u\n", person.student);
    printf("Is employee    : %u\n", person.employee);
    printf("Has car        : %u\n", person.car);
    printf("Has home       : %u\n", person.home);

    return 0;
}