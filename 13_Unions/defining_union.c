/**
 * @file union_demo.c
 * @brief Program to demonstrate the use of a union in C.
 *
 * This program defines a union containing an integer and a character.
 * It initializes the union with a character value and displays the
 * values of both union members to illustrate that all members share
 * the same memory location.
 */

#include <stdio.h>

/**
 * @union abc
 * @brief Represents a union with an integer and a character.
 *
 * A union allocates a single memory location that is shared by all
 * its members. At any given time, only one member contains a valid value.
 */
union abc
{
    int a;   /**< Integer member */
    char b;  /**< Character member */
};

/**
 * @brief Main function of the program.
 *
 * Initializes the union with a character value and prints the values
 * of both the integer and character members.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Initialize union with a character value */
    union abc s = {66};

    /* Display union members */
    printf("Value in a : %d\n", s.a);
    printf("Value in b : %c\n", s.b);

    return 0;
}