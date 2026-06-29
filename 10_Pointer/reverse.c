#include <stdio.h>

#define n 7

/**
 * @brief Reads n integers into an array and displays them in reverse order.
 *
 * The program uses a pointer to:
 * - Read n integer values into an array.
 * - Traverse the array in reverse order.
 * - Print the elements from last to first.
 *
 * @return int Returns 0 on successful execution.
 */
int main()
{
    int a[n], *p;

    printf("Enter %d numbers: ", n);

    /* Read array elements using pointer */
    for (p = a; p <= a + n - 1; p++)
    {
        scanf("%d", p);
    }

    printf("Reverse numbers: ");

    /* Print array elements in reverse order */
    for (p = a + n - 1; p >= a; p--)
    {
        printf("%d ", *p);
    }

    return 0;
}