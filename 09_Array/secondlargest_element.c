#include <stdio.h>
int main()
{
    int n, i, j, min, temp;
    printf("enter number of element in array");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element of aray\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 1 + i; j < n; j++)
        {
            if (a [i] > a [j])
            {
                temp = a [i];
                a [i] = a [j];
                a [j] = temp;
            }
            
        }
        
    }
    
    printf("second largest element = %d\n", a[n-2]);
    return 0;

}