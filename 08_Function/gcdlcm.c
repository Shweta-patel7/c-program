#include <stdio.h>

/**
 *  Calculates the Greatest Common Divisor (GCD) of two integers.
 *
 * This function uses the subtraction-based Euclidean algorithm
 * to find the GCD of two positive integers.
 *
 *  First integer.
 * Second integer.
 * int The greatest common divisor of a and b.
 */
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

/**
 * Entry point of the program.
 *
 * Reads two integers from the user, calculates their
 * Greatest Common Divisor (GCD) and Least Common Multiple (LCM),
 * and displays the results.
 *
 * Formula used:
 * LCM = (a × b) / GCD
 *
 * int Returns 0 on successful execution.
 */
int main(void)
{
    int x, y, lcm;

    printf("Enter two numbers for GCD & LCM: ");
    scanf("%d %d", &x, &y);

    printf("GCD = %d\n", gcd(x, y));

    lcm = x * y / gcd(x, y);

    printf("LCM = %d\n", lcm);

    return 0;
}