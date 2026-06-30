#include<stdio.h>
int main()
{
    int a = 12;
    int *p = &a;
    printf("print num %d\n", a);
    printf("address of num %p\n", (void*)&a);
    printf("value in pointer %d\n", *p);
    printf("pointer address %p\n", (void*)p);
    return 0;
}