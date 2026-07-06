/**
 * @file pyramid_pattern.c
 * @brief Prints upward and downward pyramid patterns using stars.
 *
 * This program repeatedly allows the user to generate either an upward
 * or downward pyramid pattern using nested loops inside an infinite loop.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes user input for number of rows and pattern type ('u' for upward
 * pyramid, 'd' for downward pyramid) and prints the corresponding pattern.
 * The program continues until the user chooses to exit.
 *
 * @return 0 on successful execution
 */
int main()
{
    int n, i, j;
    char x, a;

    /**
     * @brief Infinite loop for repeated execution
     */
    while (1)
    {
        printf("Enter how many rows you want in pyramid: ");
        scanf("%d", &n);

        printf("Which pyramid you want ('u' / 'd'): ");
        scanf(" %c", &x);

        switch (x)
        {
            /**
             * @brief Upward pyramid pattern
             */
            case 'u':
                for (j = 1; j <= n; j++)
                {
                    for (i = 1; i <= 2 * n - 1; i++)
                    {
                        if (i >= n - (j - 1) && i <= n + (j - 1))
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;

            /**
             * @brief Downward pyramid pattern
             */
            case 'd':
                for (j = 1; j <= n; j++)
                {
                    for (i = 1; i <= 2 * n - 1; i++)
                    {
                        if (i >= n - (n - j) && i <= n + (n - j))
                            printf("*");
                        else
                            printf(" ");
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Invalid choice\n");
                break;
        }

        /**
         * @brief Ask user whether to continue
         */
        printf("Want to continue (y/n): ");
        scanf(" %c", &a);

        if (a == 'n')
            break;
    }

    return 0;
}