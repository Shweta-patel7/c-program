#include <stdio.h>
int main ()
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

    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i +1; j < n; j++)
        {
            if (a [j] < a [min])
            {
                min = j;
            }

        }
        temp = a[i]; 
        a[i] = a[min];
        a[min] = temp;
    
    }
    
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }


    return 0;


}
