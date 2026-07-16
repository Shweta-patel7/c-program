/**
 * @file floating_point_precision.c
 * @brief Demonstrates floating-point data types and precision.
 *
 * This program demonstrates the memory size and precision of
 * floating-point data types in C:
 * - float
 * - double
 * - long double
 *
 * It prints the size of each data type and displays stored values
 * with different precision levels.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program:
 * - Declares variables of type float, double, and long double.
 * - Prints the memory size of each data type using sizeof().
 * - Prints values with different decimal precision using printf().
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    /** Single precision floating-point variable */
    float var1 = 3.15648487485415;

    /** Double precision floating-point variable */
    double var2 = 6.487484548845876;

    /** Extended precision floating-point variable */
    long double var3 = 7.845846876567846516674L;

    /* Display memory size of floating-point data types */
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    /* Display values with different precision */
    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", var3);

    return 0;
}