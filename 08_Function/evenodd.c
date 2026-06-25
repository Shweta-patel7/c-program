#include <stdio.h>

/**
 * Determines whether a number is even or odd.
 *
 * Checks if the given integer is divisible by 2 and
 * prints whether it is even or odd.
 *
 * The integer to be checked.
 * int No meaningful value is returned.
 */
int evenorodd(int n);

/**
 * Entry point of the program.
 *
 * Prompts the user to enter an integer, reads the value,
 * and calls the evenorodd() function to determine whether
 * the number is even or odd.
 *
 * int Returns 0 on successful execution.
 */
int main(void)
{
    int a;

    printf("enter a value ");
    scanf("%d", &a);

    evenorodd(a);

    return 0;
}

/**
 * Determines whether a number is even or odd.
 *
 *The integer to be checked.
 * int No meaningful value is returned.
 */
int evenorodd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }

    return 0;
}