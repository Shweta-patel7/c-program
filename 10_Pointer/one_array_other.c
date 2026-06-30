#include<stdio.h>
int main()
{
    int a[] = {5, 65, 6, 53, 98, 32};
    int i, l = sizeof a / sizeof a[0];
    int b[l];
    int *p = a, *q = b;
    for (i = 0; i < l; i++)
    {
        *(q +i) = *(p +i);
    }
    printf("copied array :\n");
    for (i = 0; i < l; i++)
        {
            printf(" %d", *(q +i));
        }
        
    return 0;
}