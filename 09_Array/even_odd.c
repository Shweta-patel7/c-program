#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is even\n", a[i]);
        }
        else
        {
            printf("%d is odd\n", a[i]);
        }
    }

    return 0;
}