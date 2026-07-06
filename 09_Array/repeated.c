/**
 * @file digit_repetition_check.c
 * @brief Checks whether a number has repeated digits.
 *
 * This program checks if any digit in the given number appears more
 * than once using an auxiliary array to track seen digits.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads an integer, checks each digit from right to left, and
 * determines whether any digit repeats.
 *
 * @return 0 on successful execution
 */
int main()
{
    int seen[10] = {0};   /**< Array to track digits 0-9 */
    int n;
    int rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    /**
     * @brief Check for repeated digits
     */
    while (n > 0)
    {
        rem = n % 10;

        if (seen[rem] == 1)
        {
            break;   // duplicate digit found
        }

        seen[rem] = 1;
        n = n / 10;
    }

    /**
     * @brief Output result
     */
    if (n > 0)
    {
        printf("Yes (repeated digit found)\n");
    }
    else
    {
        printf("No (all digits are unique)\n");
    }

    return 0;
}