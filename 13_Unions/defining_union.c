#include<stdio.h>
union abc
{
    int a;
    char b;
};

int main()
{
    union abc s = {'A'};
    printf("value in a : %d\n", s.a);
    printf("value in b : %c\n", s.b);
}
