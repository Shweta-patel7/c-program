#include <stdio.h>
int max (int a, int b, int c)
{
    if (a >= b && a >= c)
       return a;

    else if (b >= a && b >= c)
         return b;

    else
    return c;
    
}

int main()
{
    int x, y, z;
    printf("enter 3 number for finding maximum ");
    scanf("%d %d %d", &x, &y, &z);

    printf("maximum number = %d\n", max(x, y, z));

}