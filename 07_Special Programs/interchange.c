/**
 * @file reverse_number.c
 * @brief Program to reverse the digits of an integer.
 *
 * This program repeatedly accepts an integer from the user,
 * reverses its digits, displays the reversed number, and asks
 * whether the user wants to continue. The program terminates
 * when the user enters 'n'.
 */

#include <stdio.h>

/**
 * @brief Entry point of the program.
 *
 * The program performs the following steps:
 * - Reads an integer from the user.
 * - Reverses the digits of the integer.
 * - Displays the reversed number.
 * - Repeats until the user chooses to exit.
 *
 * Algorithm:
 * - Store the input number in a temporary variable.
 * - Extract the last digit using the modulus (%) operator.
 * - Append the extracted digit to the reversed number.
 * - Remove the last digit using integer division (/).
 * - Continue until the temporary variable becomes zero.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    // Infinite loop
    for (;;)
    {
        /** Original number entered by the user */
        int n;

        /** Stores the reversed number */
        int result = 0;

        /** Temporary variable used for digit extraction */
        int q;

        /** Stores the last digit of the number */
        int rem;

        /** User choice to continue or exit */
        char a;

        printf("Enter the number: ");
        scanf("%d", &n);

        /* Copy the input number */
        q = n;

        /* Reverse the digits */
        while (q != 0)
        {
            rem = q % 10;
            result = result * 10 + rem;
            q = q / 10;
        }

        printf("Reversed number: %d\n", result);

        printf("Want to continue (y/n): ");
        scanf(" %c", &a);

        if (a == 'n' || a == 'N')
            break;
    }

    return 0;
}