/**
 * @file structure_size.c
 * @brief Program to find the size of a structure.
 *
 * This program defines a structure with different data types,
 * initializes a structure variable, and calculates the memory
 * occupied by the structure using sizeof().
 */

#include <stdio.h>

/**
 * @struct abc
 * @brief Demonstrates a structure containing different data types.
 */
struct abc
{
    char a[10];   /**< Character array member */
    int b;        /**< Integer member */
    float c;      /**< Floating-point member */
    char d;       /**< Character member */
};

/**
 * @brief Main function of the program.
 *
 * Creates a structure variable, calculates its memory size using
 * sizeof(), and displays the result.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int s;

    /* Initialize structure variable */
    struct abc def = {"alian", 67, 438.47, 'a'};

    /* Calculate size of structure */
    s = sizeof(def);

    /* Display structure size */
    printf("Size of structure: %d\n", s);

    return 0;
}