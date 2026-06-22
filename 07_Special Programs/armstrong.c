#include <stdio.h>
int main()
{
    int x, q, count = 0, cnt, mul = 1, result = 0, rem;
    printf ("enter a number ");
    scanf ("%d", &x);
    q = x;
    while (q != 0)
    {
        q = q / 10;
        count++;
        
    }
    cnt = count;
    q = x;
    while (q != 0)
    {
        rem = q % 10;
        while (cnt != 0)
        {
           mul = mul * rem;
           cnt--; 
        }
        result = result + mul;
        cnt = count;
        mul = 1;
        q = q / 10;
    }
    if (result == x)
    {
        printf("%d is armstrong number\n", x);
    }
    else
        printf("%d is not an armstrong number\n", x);
    
return 0;

}