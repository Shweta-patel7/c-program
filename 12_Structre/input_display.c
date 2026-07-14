/**
 * @file employee_details.c
 * @brief Program to input and display details of two employees.
 *
 * This program defines an employee structure, accepts details
 * of two employees from the user, and displays the entered
 * information.
 */

#include <stdio.h>

/**
 * @struct employee
 * @brief Stores information about an employee.
 */
struct employee
{
    int id;          /**< Employee ID */
    char name[50];   /**< Employee name */
    int salary;      /**< Employee salary */
};

/**
 * @brief Main function of the program.
 *
 * The function performs the following tasks:
 * - Accepts details of two employees.
 * - Stores the information in structure variables.
 * - Displays the entered employee details.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    struct employee a;

    printf("Employee 1\n");
    printf("Enter ID: ");
    scanf("%d", &a.id);

    printf("Enter Name: ");
    scanf("%49s", a.name);

    printf("Enter Salary: ");
    scanf("%d", &a.salary);

    struct employee b;

    printf("\nEmployee 2\n");
    printf("Enter ID: ");
    scanf("%d", &b.id);

    printf("Enter Name: ");
    scanf("%49s", b.name);

    printf("Enter Salary: ");
    scanf("%d", &b.salary);

    /* Display employee details */
    printf("\nEmployee 1 Details\n");
    printf("ID     : %d\n", a.id);
    printf("Name   : %s\n", a.name);
    printf("Salary : %d\n", a.salary);

    printf("\nEmployee 2 Details\n");
    printf("ID     : %d\n", b.id);
    printf("Name   : %s\n", b.name);
    printf("Salary : %d\n", b.salary);

    return 0;
}