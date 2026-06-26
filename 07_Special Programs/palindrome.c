/**
 * @file palindrome_number.c
 * @brief Program to check whether a number is a palindrome.
 *
 * A palindrome number is a number that reads the same forward
 * and backward. Example: 121, 1331.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a number from the user, reverses it, and checks whether
 * the reversed number is equal to the original number.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int n, result = 0, q, rem;

    printf("Enter the number: ");
    scanf("%d", &n);

    q = n;

    // Reverse the number
    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }

    // Check palindrome condition
    if (result == n)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }

    return 0;
}