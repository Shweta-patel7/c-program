/**
 * @file structure_pointer.c
 * @brief Program to demonstrate accessing structure members using pointers.
 *
 * This program defines a place structure, initializes two structure
 * variables, and uses a structure pointer to access and display the
 * members of one structure. It also displays the details of another
 * structure variable directly.
 */

#include <stdio.h>

/**
 * @struct place
 * @brief Stores information about a place.
 */
struct place
{
    char name_place[50]; /**< Name of the place */
    char city[50];       /**< City where the place is located */
    int place_tosee;     /**< Number of places to see */
};

/**
 * @brief Main function of the program.
 *
 * Creates two place structure variables, assigns a pointer to one
 * structure, and demonstrates accessing structure members using
 * both the dot (.) operator and arrow (->) operator.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    /* Initialize place details */
    struct place a = {"surat", "guj", 5};
    struct place b = {"indor", "mp", 8};

    /* Pointer to structure a */
    struct place *ptr = &a;

    /* Access structure members using pointer */
    printf("%s, %s, %d\n",
           (*ptr).name_place,
           ptr->city,
           ptr->place_tosee);

    /* Access structure members directly */
    printf("%s, %s, %d\n",
           b.name_place,
           b.city,
           b.place_tosee);

    return 0;
}