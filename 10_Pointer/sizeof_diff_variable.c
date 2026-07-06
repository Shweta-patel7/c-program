/**
 * @file datatype_size_pointer.c
 * @brief Demonstrates size of different data types using pointers.
 *
 * This program uses pointers to variables of different data types and
 * prints the memory size of the values they point to using sizeof().
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Declares variables of different data types, assigns pointers to them,
 * and prints the size of each data type using dereferenced pointers.
 *
 * @return 0 on successful execution
 */
int main()
{
    int i;
    char c;
    float f;
    double d;

    /** Pointer declarations */
    int *ip = &i;
    char *cp = &c;
    float *fp = &f;
    double *dp = &d;

    printf("Size of int    = %zu bytes\n", sizeof(*ip));
    printf("Size of char   = %zu bytes\n", sizeof(*cp));
    printf("Size of float  = %zu bytes\n", sizeof(*fp));
    printf("Size of double = %zu bytes\n", sizeof(*dp));

    return 0;
}