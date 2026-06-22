#include <stdio.h>
int main()
{
    int a = 5, b = 6, c = 3;
    printf("a * b / c = %d\n", a*b/c);
    printf("a + b - c = %d\n", a+b-c);
    printf("a + b * c / a %% c = %d\n", a+b*c/a%c);
    printf("a / b %% a = %d\n", a/b%a);
    return 0;
}