#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("enter number for sum :");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i++;

    } while (n >= i);

    printf("sum of first %d natural numbers is = %d\n", n, sum);
    return 0;

    
}