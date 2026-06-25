#include <stdio.h>

/**
 * @brief Prints an array in forward and reverse order.
 *
 * The program initializes an array of nine integers, displays
 * its contents from the first element to the last, and then
 * displays the contents in reverse order.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    int a[9] = {25, 51, 65, 57, 45, 72, 38, 98, 78};
    int i;

    /* Print array in forward order */
    for (i = 0; i < 9; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    /* Print array in reverse order */
    for (i = 8; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}