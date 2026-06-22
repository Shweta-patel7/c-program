#include <stdio.h>
int main()
{
    int n, i, out;
    printf("enter number of which you need table");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        out = n * i;
        printf("%d x %d = %d\n", n, i, out);

    }
    
}