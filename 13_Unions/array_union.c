#include<stdio.h>
typedef union 
{
    int a;
    char b;
    float c;
} data;

int main()
{
    data arr[10];
    arr[0].a = 7;
    arr[1].b = 'b';
    arr[2].c = 77.77;
    arr[3].a = 54;
    arr[4].c = 432.65;
    arr[5].b = 't';
    arr[6].b = 'j';

   printf(" %d", arr[0].a);
   printf(" %c", arr[1].b);
   printf(" %f", arr[2].c);
   printf(" %d", arr[3].a);
   printf(" %f", arr[4].c);
   printf(" %c", arr[5].b);
   printf(" %c", arr[6].b);

   

}

