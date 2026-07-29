#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i, a[10];
    int sum = 0;
    printf("the value of argc is %d\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("argument index %d, having argument %s\n", i, argv[i]);
    }

    for (i = 1; i < argc; i++)
    {
        a[i] = atoi(argv[i]);

        sum += a[i];
    }
    
    printf("sum = %d\n", sum);
    
}
