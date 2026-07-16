/**
 * @file union_array.c
 * @brief Program to demonstrate the use of an array of unions.
 *
 * This program defines a union containing an integer, a character,
 * and a floating-point value. An array of unions is created, where
 * each element stores a value of one of the union members. The stored
 * values are then displayed.
 */

#include <stdio.h>

/**
 * @typedef data
 * @brief Represents a union that can store different data types.
 *
 * Since a union shares the same memory among all its members,
 * each element of the union can hold only one valid value at a time.
 */
typedef union
{
    int a;      /**< Integer value */
    char b;     /**< Character value */
    float c;    /**< Floating-point value */
} data;

/**
 * @brief Main function of the program.
 *
 * Creates an array of unions, stores integer, character,
 * and floating-point values in different array elements,
 * and displays the stored values.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Array of union variables */
    data arr[10];

    /* Store values in different union elements */
    arr[0].a = 7;
    arr[1].b = 66;
    arr[2].c = 77.77;
    arr[3].a = 54;
    arr[4].c = 432.65;
    arr[5].b = 't';
    arr[6].b = 'j';

    /* Display stored values */
    printf("%d\n", arr[0].a);
    printf("%c\n", arr[1].b);
    printf("%f\n", arr[2].c);
    printf("%d\n", arr[3].a);
    printf("%f\n", arr[4].c);
    printf("%c\n", arr[5].b);
    printf("%c\n", arr[6].b);

    return 0;
}