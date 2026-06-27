#include<stdio.h>
int main()
{
    int r, c, i, j;
    printf("enter number o row and column : ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("matrix : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    
    printf("Matrix is:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


}