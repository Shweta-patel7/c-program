#include <stdio.h>
int main()
{
    int x, q, count = 0;
    printf ("enter a number ");
    scanf ("%d", &x);
    q = x;
    while (q != 0)
    {
        q = q / 10;
        count++;
        
    }
printf("%d\n", count);
return 0;

}