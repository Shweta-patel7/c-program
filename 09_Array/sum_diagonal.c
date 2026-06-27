#include <stdio.h>

int main()
{
    int n, i, j;
    int primary = 0, secondary = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("matrix b :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf (" %d", a[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++)
    {
        primary += a[i][i];
        secondary += a[i][n - 1 - i];
    }

    printf("Sum of primary diagonal = %d\n", primary);
    printf("Sum of secondary diagonal = %d\n", secondary);

    return 0;
}