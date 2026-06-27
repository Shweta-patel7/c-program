#include <stdio.h>
int main()
{
    int n, i, j, k, min, temp;
    printf("enter number of element in array");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element of aray\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a [i] == a [j])
            {
                for (k = j; k < n - 1; k++)
                {
                    a [k] = a [k + 1];
                }
                
                n--;
                j--;
            }
            
        }
        
    }
    printf("array after removing duplicate\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d\n", a[i]);
    }
    
    
    return 0;
    

} 