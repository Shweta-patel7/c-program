/**
 * @file employee_display.c
 * @brief Program to demonstrate passing a structure to a function.
 *
 * This program defines an employee structure using typedef.
 * An employee record is created and passed to a function that
 * displays the employee details.
 */

#include <stdio.h>

/**
 * @typedef emp_t
 * @brief Represents employee information.
 */
typedef struct
{
    char name[30];   /**< Employee name */
    int salary;      /**< Employee salary */
} emp_t;

/**
 * @brief Displays employee details.
 *
 * This function receives an employee structure as an argument
 * and prints the employee's name and salary.
 *
 * @param s Employee structure containing employee details.
 */
void display(emp_t s)
{
    printf("Name   : %s\n", s.name);
    printf("Salary : %d\n", s.salary);
}

/**
 * @brief Main function of the program.
 *
 * Creates an employee structure, initializes it with values,
 * and passes it to the display() function.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Initialize employee details */
    emp_t a = {"abc", 35673};

    /* Display employee information */
    display(a);

    return 0;
}