/**
 * @file number_to_words.c
 * @brief Program to convert a number (0–999) into words.
 *
 * This program takes an integer input and prints its English word
 * representation (e.g., 245 → Two Hundred Forty Five).
 */

#include <stdio.h>

/**
 * @brief Converts a number into words and prints it.
 *
 * Supports numbers from 0 to 999.
 *
 * @param n The number to convert.
 */
void numberToWords(int n)
{
    char *ones[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    char *teens[] = {
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
        "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };

    char *tens[] = {
        "", "", "Twenty", "Thirty", "Forty",
        "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    if (n == 0)
    {
        printf("Zero");
        return;
    }

    if (n >= 100)
    {
        printf("%s Hundred ", ones[n / 100]);
        n = n % 100;
    }

    if (n >= 20)
    {
        printf("%s ", tens[n / 10]);
        n = n % 10;
    }
    else if (n >= 10)
    {
        printf("%s", teens[n - 10]);
        return;
    }

    if (n > 0)
    {
        printf("%s", ones[n]);
    }
}

/**
 * @brief Main function of the program.
 *
 * Reads a number from the user, validates range (0–999),
 * and calls numberToWords() to print it in words.
 *
 * @return int Returns 0 on successful execution, 1 if input is invalid.
 */
int main()
{
    int num;

    printf("Enter a number (0-999): ");
    scanf("%d", &num);

    if (num < 0 || num > 999)
    {
        printf("Number out of range!\n");
        return 1;
    }

    numberToWords(num);
    printf("\n");

    return 0;
}