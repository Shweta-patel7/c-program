#include<stdio.h>
int main()
{
    int a [] = {1, 2, 3, 4, 5};
    int *p = a;
    printf("Befor increment %d\n", *p);
    printf("address of pointer %p\n", (void *)p);
    p++;
    printf("After increment %d\n",*p);
    printf("address of pointer %p\n", (void *)p);

    p--;
    printf("After decrement %d\n",*p);
    printf("address of pointer %p\n", (void *)p);
}