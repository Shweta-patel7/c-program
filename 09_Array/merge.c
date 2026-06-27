#include <stdio.h>
int main()
{
    int n1, n2, i, j;

    printf("enter number of element in array");
    scanf("%d", &n1);
    
    int a[n1];
    printf("enter %d element of aray\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter number of element in array");
    scanf("%d", &n2);
    
    int b[n2], c[n1 + n2];
    printf("enter %d element of aray\n", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < n2; j++)
    {
        c[n1 +j] = b[j];
    }
    printf("merge array\n");
    for (i = 0; i < n1 + n2; i++)
    {
        printf(" %d", c[i]);
    }
    
    return 0;
    



}