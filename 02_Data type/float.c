#include <stdio.h>

int main()
{
    float var1 = 3.15648487485415;
    double var2 = 6.487484548845876;
    long double var3 = 7.845846876567846516674L;

    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    printf("%.16f\n", var1);
    printf("%.16f\n", var2);
    printf("%.21Lf\n", var3);

    return 0;
}