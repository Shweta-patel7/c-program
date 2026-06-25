#include <stdio.h>

/**
 * @brief Checks whether a number is a palindrome.
 *
 * A palindrome number remains the same when its digits
 * are reversed (e.g., 121, 1331).
 *
 * @param a The number to be checked.
 * @return int No meaningful value is returned.
 */
int palindrome(int a);

/**
 * @brief Entry point of the program.
 *
 * Reads a number from the user and checks whether
 * it is a palindrome using the palindrome() function.
 *
 * @return int Returns 0 on successful execution.
 */
int main(void)
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}

/**
 * @brief Determines whether a number is a palindrome.
 *
 * Reverses the digits of the given number and compares
 * the reversed number with the original number.
 *
 * @param a The number to be checked.
 * @return int No meaningful value is returned.
 */
int palindrome(int a)
{
    int q, rem, result = 0;

    q = a;

    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }

    if (result == a)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("It is not a palindrome\n");
    }

    return 0;
}