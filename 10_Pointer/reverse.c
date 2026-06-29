#include<stdio.h>
#define n 7
int main()
{
    int a[n], *p;
    printf("Enter %d number :", n);
    for (p = a; p <= a + n - 1; p++)
    {
        scanf("%d", p);
    }
    printf("reverse number : ");
    for (p = a + n - 1; p >= a; p--)
    {
        printf(" %d", *p);
    }
    return 0;
    

}