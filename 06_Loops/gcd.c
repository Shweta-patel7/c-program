/**
 * @file gcd_subtraction.c
 * @brief Program to find the GCD (Greatest Common Divisor) of two numbers.
 *
 * This program calculates the GCD of two integers using the
 * subtraction-based Euclidean algorithm.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads two integers from the user and computes their GCD by repeatedly
 * subtracting the smaller number from the larger until both numbers become equal.
 *
 * @return int Returns 0 on successful execution.
 */
int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Subtraction-based Euclidean algorithm
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    printf("GCD is: %d\n", a);

    return 0;
}