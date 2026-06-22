#include <stdio.h>
int main()
{
    int n, a = 1, b;
    printf("entre number for factorial = ");
    scanf("%d", &n);
    b = n;
    if (n > 0)
    {
         while (n >= 1)
    {
        a = n * a;
        n--;
    }
    printf("factorial of %d is %d\n", b, a);
    }
    
   else if (n == 0)
   {
    printf("factorial of %d is = 1", b);
   }
   
   else

return 0;   
}