#include<stdio.h>
int main()
{
    int a[] = {1, 6, 3, 98, 65, 78, 67};
    int *p = a;
    int len = sizeof a / sizeof a[0];
    for (p = a; p < a+ len; p++)
    {
        printf("value of array %d\n", *p);
    }
     
    return 0;
}