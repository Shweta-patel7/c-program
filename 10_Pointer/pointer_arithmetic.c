/**
 * @file pointer_increment_decrement.c
 * @brief Demonstrates pointer increment and decrement in arrays.
 *
 * This program shows how a pointer moves through an array using
 * increment (++) and decrement (--) operators, and how it accesses
 * different elements of the array.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Demonstrates pointer arithmetic by moving a pointer forward and
 * backward through an integer array and printing values and addresses.
 *
 * @return 0 on successful execution
 */
int main()
{
    /** Integer array */
    int a[] = {1, 2, 3, 4, 5};

    /** Pointer to array */
    int *p = a;

    printf("Before increment value = %d\n", *p);
    printf("Address of pointer = %p\n", (void *)p);

    /** Move pointer to next element */
    p++;

    printf("After increment value = %d\n", *p);
    printf("Address of pointer = %p\n", (void *)p);

    /** Move pointer back to previous element */
    p--;

    printf("After decrement value = %d\n", *p);
    printf("Address of pointer = %p\n", (void *)p);

    return 0;
}