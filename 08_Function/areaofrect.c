#include <stdio.h>

int areaofrect (int, int); 
int main()
{
    int l = 10, b = 20;
    int area = areaofrect (l, b);
    printf("area of rect is %d\n", area);
return 0;
}

    int areaofrect (int length, int brath)
    {
    int area;
    area = length * brath;
    return area;
    }
