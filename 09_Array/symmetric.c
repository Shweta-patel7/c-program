#include <stdio.h>

int main()
{
    int r, c, i, j, count = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // A symmetric matrix must be square
    if (r != c)
    {
        printf("Matrix is not symmetric.\n");
        return 0;
    }

    int a[r][c], t[c][r];

    printf("Enter matrix elements:\n");

    // Input matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print transpose matrix
    printf("\nTranspose Matrix:\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    // Check symmetry
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != t[i][j])
            {
                count = 0;
                break;
            }
        }

        if (count == 0)
        {
            break;
        }
    }

    if (count == 1)
    {
        printf("\nMatrix is symmetric.\n");
    }
    else
    {
        printf("\nMatrix is not symmetric.\n");
    }

    return 0;
}