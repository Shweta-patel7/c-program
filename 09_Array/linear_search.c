#include <stdio.h>
int main()
{
    int n, i;
    printf("enter number of element: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int f, found = 0;
    printf("enter what to find: ");
    scanf("%d", &f);

    for (i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            printf("%d is at %d\n", f, i);
            found = 1;
            break;
        }
        
    }
    
    if (found == 0)
    {
        printf("%d is not found", f);
    }
    
    return 0;
}