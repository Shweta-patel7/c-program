#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    printf("enter a number");
    scanf("%d", &a);

    while (a >= 10)
    {
        while (a > 0)
        {
            b = a % 10;
            sum = b + sum;
            a = a / 10;
        
        }
        
    }
printf("sum of digits is = %d\n", sum);    

    
}