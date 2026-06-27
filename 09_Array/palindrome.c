#include <stdio.h>
int main()
{
    int n, i, flag = 1;
    printf("enter number of element in array");
    scanf("%d", &n);
    int a[n];
    printf("enter %d element of aray\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++)
    {   
       if(a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Array is Palindrome\n");
    else
        printf("Array is Not Palindrome\n");

    return 0;
    
    

} 