#include <stdio.h>
int main()
{
    int a[] = {45, 9, 63, 6, 65, 98};
    int *p = a;
    int l = sizeof a / sizeof a[0];
    int i, max = *p;

    for (i = 0; i < l; i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }
    printf("larges value is %d\n", max);

    return 0;
}