#include <stdio.h>

/**
 * Calculates the area of a rectangle.
 *
 * Computes the area using the formula:
 * Area = length × breadth.
 *
 * Length of the rectangle.
 * Breadth (width) of the rectangle.
 * int The calculated area of the rectangle.
 */
int areaofrect(int length, int brath);

/**
 * Entry point of the program.
 *
 * Initializes the dimensions of a rectangle, calls
 * the area calculation function, and displays the result.
 *
 *int Returns 0 on successful execution.
 */
int main(void)
{
    int l = 10, b = 20;

    int area = areaofrect(l, b);

    printf("area of rect is %d\n", area);

    return 0;
}

/**
 * Calculates the area of a rectangle.
 *
 *Length of the rectangle.
 * Breadth (width) of the rectangle.
 * int Area of the rectangle.
 */
int areaofrect(int length, int brath)
{
    int area;

    area = length * brath;

    return area;
}