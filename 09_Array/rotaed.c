#include <stdio.h>

int main()
{
    int n, i, first, last;
    char y;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Left or Right rotation (l / r): ");
    scanf(" %c", &y);   

    if(y == 'l')
    {
        first = a[0];

        for(i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        a[n - 1] = first;

        printf("Array after left rotation:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else if(y == 'r')
    {
        last = a[n - 1];

        for(i = n - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = last;

        printf("Array after right rotation:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Invalid input");
    }

    printf("\n");
    return 0;
}