#include <stdio.h>
int main()
{
    int i, n = 2;
    //i value is start with 1 and increase upto 20 
    for (i = 1; i <= 20; i++)
    {
        //check wher i=n or not if it same then n+2 will done if not same so value of i will printed 
        if (i == n)
        {
            n = n + 2;
            continue;
        }
    printf("%d", i);

    }
return 0;

}