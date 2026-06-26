/**
 * @file repeated_digits.c
 * @brief Program to detect repeated digits in a number.
 *
 * This program checks whether any digit in the given number
 * appears more than once. It prints "yes" if a repeated digit
 * is found, otherwise prints "no".
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer from the user and checks whether any digit
 * is repeated using an auxiliary array to track seen digits.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int seen[10] = {0};
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int rem;

    while (n > 0)
    {
        rem = n % 10;

        if (seen[rem] == 1)
        {
            break;
        }

        seen[rem] = 1;
        n = n / 10;
    }

    if (n > 0)
    {
        printf("yes\n");  // repeated digit found
    }
    else
    {
        printf("no\n");   // all digits are unique
    }

    return 0;
}