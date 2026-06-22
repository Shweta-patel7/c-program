#include <stdio.h>

int main()
{
    int a = 6, b = 9, c = 3;

    {
        if(a < b)
            printf("true");
        else
            printf("falus");
    }

    {
        if(a > c)
             printf("yes");
        else
             printf("no");
    }
    return 0;
}