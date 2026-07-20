#include<stdio.h>

struct self
{
    int i;
    char c;
    struct self *ptr;
};

int main()
{
    struct self v1;
    struct self v2;
    v1.i = 6;
    v1.c = 'a';
    v1.ptr = NULL;
    v2.i = 7;
    v2.c = 'b';
    v2.ptr = NULL;

    v1.ptr = &v2;
    printf("value of v1 : %d , %c\n", v1.i, v1.c);
    printf("value of v2 with v1 pointer : %d , %c\n", v1.ptr->i, v1.ptr->c);
}
