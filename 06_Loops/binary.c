/**
 * @file decimal_to_binary.c
 * @brief Converts a decimal number into binary representation.
 *
 * This program converts a given decimal number into its binary form
 * using repeated division by 2 and stores remainders in an array.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Reads a decimal number from the user, converts it into binary,
 * and prints the binary representation.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    /**
     * @brief Special case for zero
     */
    if (n == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }

    /**
     * @brief Convert decimal to binary
     *
     * Store remainders (0 or 1) in array
     */
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary: ");

    /**
     * @brief Print binary in reverse order
     */
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}