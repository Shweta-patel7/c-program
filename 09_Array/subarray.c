#include<stdio.h>
int main()
{
    int n, i, j, curresum, maxsum;

    printf("enter number of value :");
    scanf("%d", &n);

    int a[n];
    printf("enter value of array : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    maxsum = a[0];

    for (i = 0; i < n; i++)
    {
        curresum = 0;

        for (j = i; j < n; j++)
        {
            curresum = curresum + a[j];

            if (curresum > maxsum)
            {
                maxsum = curresum;
            }
            
        }
        
    }
    printf("maximum subarray = %d", maxsum);

    return 0;
    
}