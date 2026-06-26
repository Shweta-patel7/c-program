#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    
    printf("element copy from a to b:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d", b[i]);
    }
   
 return 0;

}