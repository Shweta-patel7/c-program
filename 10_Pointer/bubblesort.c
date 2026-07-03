#include<stdio.h>
int bubblesort (int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(a + j) > *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
            
        }
        
    }
    
}

int main()
{
    int n, i;

    printf("enter number in array : ");
    scanf("%d", &n);

    int a[n];
    printf("enter element of array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubblesort(a, n);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
}