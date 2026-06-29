#include <stdio.h>
void minmax (int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for (i = 1; i < len; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        
    }
    
}
int main()
{
    int a[] = {5, 9, 6, 546, 54, 89, 7, 65, 122, 5454, 21, 5435, 543, 54,67};
    int min, max;
    int len = sizeof (a) / sizeof (a[0]);
    minmax (a, len, &min, &max);
    printf("minimum value= %d\n maximum value =%d\n", min, max);
    return 0;
    
}