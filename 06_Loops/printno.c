#include <stdio.h>
int main()
{
    int i;
    char a;
    printf ("forward or backward (f/b)");
    scanf (" %c", &a);
    if (a == 'f')
    {
        for (i=1; i<=10; i++)
    {
        printf(" %d", i );
    }
    }
    else if (a == 'b')
    {
        i = 10;
        while (i>=1)
        {
            printf(" %d", i );
            i--;
        }
        
    }
    
    else
    
return 0;
}