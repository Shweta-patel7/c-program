#include <stdio.h>

#define max 50


int main()
{
    int a[max][max], b[max][max], sum[max][max];
    int rows, columns;
    int i, j;

    printf("Enter number of rows and columns of Matrix: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        
    }

    printf("matrix a :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf (" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("matrix b :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf (" %d", b[i][j]);
        }
        printf("\n");
    }
    
    printf("sum of two matrix :\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf (" %d", sum[i][j]);
        }
        printf("\n");
    }

    

}