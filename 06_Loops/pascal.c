#include <stdio.h>
int main()
{
    int n, i, j;
    long long coef;
    printf("enter number of row");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        coef = 1;
    
        for (j = 0; j <= 2 * n - 1; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++)
        {
            printf("%11lld ", coef);
            coef = coef * (i - j) / (j + 1);
        }
    
        printf("\n");

    }
    
    return 0;
}